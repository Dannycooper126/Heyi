#ifndef SYNCRETISM_H
#define SYNCRETISM_H
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//标记公式集中括号匹配数
class Syncretism {
 private:
  struct Transform {  // 一个代换(差异集)
    string t_f1;
    string t_f2;
  };

 public:
  bool Issyn(string f1, string f2, vector<Transform> &t);  //是否能合一
  Transform different(const string f1, const string f2)    //求差异集
  {
    int i = 0;
    Transform t;
    while (f1.at(i) == f2.at(i)) i++;
    int j1 = i;
    while (j1 < f1.length() - 1 && f1.at(j1) != ',') j1++;
    if (j1 - i == 0) return t;
    t.t_f1 = f1.substr(i, j1 - i);
    int j2 = i;
    while (j2 < f2.length() - 1 && f2.at(j2) != ',') j2++;
    if (j2 - i == 0) return t;
    t.t_f2 = f2.substr(i, j2 - i);
    while (t.t_f1[j1 - i - 1] == t.t_f2[j2 - i - 1]) {
      t.t_f1.erase(j1 - 1 - i);
      t.t_f2.erase(j2 - i - 1);
      j1--;
      j2--;
    }
    return t;
  }
  bool same(const string f1, const string f2);  // 判断两个公式是否相同
  string change(string f, Transform t);  //用代换q 对公式f 进行合一代换
  bool legal(Transform &t);              //
  int var(const string s);  // s 中每个()内的子串是变量还是常量
  vector<string> show(string f1, string f2);  //最终演示算法
  int iC = 0;
  string result;
  string output;
};
#endif  // SYNCRETISM_H
