#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i,n,N) for (int i = n; i < (int)(N); i++)
int main() {
    int N,num;
    cin>>N;
    string S;
    cin>>S;
 //   cout<<S<<endl;
    rep(i,0,S.size()){
        num=S[i];
 //       cout<<num<<endl;
        num+=N;
   //     cout<<num<<endl;
        if(num>90){
            num-=26;
        }
//        cout<<char(num)<<endl;
        S[i]=char(num);
    }
    cout<<S<<endl;
}