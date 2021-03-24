#include "syncretism.h"
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool Syncretism::Issyn(string f1, string f2, vector<Transform> &lan) {
  while (!same(f1, f2)) {
    Transform t = different(f1, f2);
    bool flag = legal(t);
    if (!flag)
      return false;
    else {
      lan.push_back(t);  //将t 加入vector lan 中
      if (flag) {
        f1 = change(f1, lan.back());  //用lan 的最后一个元素代换
        f2 = change(f2, lan.back());
        cout << "变换后:" << endl;
        cout << "f1:" << f1 << endl;
        cout << "f2:" << f2 << endl << endl;
      }
      if (same(f1, f2)) break;
    }
  }
  return true;
}
bool Syncretism::same(const string f1, const string f2) {
  if (f1.compare(f2) == 0)
    return true;
  else
    return false;
}
string Syncretism::change(string f, Transform t) {
  int i = f.find(t.t_f2);
  while (i < f.length()) {
    i = f.find(t.t_f2);
    if (i < f.length()) f = f.replace(i, t.t_f2.length(), t.t_f1);
  }
  return f;
}
bool Syncretism::legal(Transform &t) {
  if (t.t_f1.length() == 0 || t.t_f2.length() == 0)
    return false;
  else if (var(t.t_f1) == 0 || var(t.t_f2) == 0)
    return false;
  else if (var(t.t_f1) == 1 && var(t.t_f2) == 1 && t.t_f1.compare(t.t_f2) != 0)
    return false;
  else if (var(t.t_f1) == 2) {
    if (var(t.t_f2) == 1) {
      string temp = t.t_f1;  //变量常量交换位置
      t.t_f1 = t.t_f2;
      t.t_f2 = temp;
    } else {
      int i1 = var(t.t_f2);
      i1 = iC;
      iC = 0;
      int i2 = var(t.t_f1);
      i2 = iC;
      if (i1 < i2) {
        string temp = t.t_f1;  //变量常量交换位置
        t.t_f1 = t.t_f2;
        t.t_f2 = temp;
      }
    }
    return true;
  } else
    return true;
}
int Syncretism::var(const string s) {
  if (s.length() == 0) return 0;                                //空
  if (s.length() == 1 && s[0] >= 'a' && s[0] <= 'g') return 1;  //常量
  if (s.length() > 1) {
    int i = 0;
    while (i < s.length() && s.at(i) != '(') i++;
    iC++;
    string ss =
        s.substr(i + 1, s.length() - i - 2);  //抽取s 中的匹配的()中的子串
    return var(ss);
  } else
    return 2;
}
vector<string> Syncretism::show(string f1, string f2) {
  cout << "常量:形如a,b,c,d(a-g)等" << endl << "变量:形如x,y,z,u 等" << endl;
  vector<string> results;
  vector<Transform> lan;
  if (Issyn(f1, f2, lan)) {
    if (same(f1, f2))  //如果f1,f2 相同则合一为ε
    {
      result = "ε ";
      output = "success";
      results.push_back(result);
      results.push_back((output));
    }

    for (int i = 0; i < lan.size(); i++) {
      if (i < lan.size() - 1) {
        string local_result;
        if (i == 0) {
          result = "{ " + lan[i].t_f1 + "/" + lan[i].t_f2 + ",";
        } else {
          local_result = lan[i].t_f1 + "/" + lan[i].t_f2 + ",";
          result = result + local_result;
        }
      } else {
        result = result + lan[i].t_f1 + "/" + lan[i].t_f2;
      }
    }
    result = result + " }";
    output = "success";
    results.push_back(result);
    results.push_back((output));

  } else {
    cout << "不能进行合一" << endl;
    result = "No result";
    output = "Fail";
    results.push_back(result);
    results.push_back((output));
  }

  return results;
}
