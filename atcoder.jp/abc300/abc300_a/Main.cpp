#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i,n,N) for (int i = n; i < (int)(N); i++)
int main() {
    int N,A,B,s;
    cin>>N>>A>>B;
    rep(i,0,N){
        cin>>s;
        if(A+B==s){
            cout<<i+1<<endl;
        }
    }
}