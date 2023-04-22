#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string s;
  cin >> s;
  char t='f';
  for (const auto&ss:s){
    if(ss==t){
      cout << "No" << endl;
      exit(0);
    }
    t=ss;
  }
  cout << "Yes" <<endl;
}