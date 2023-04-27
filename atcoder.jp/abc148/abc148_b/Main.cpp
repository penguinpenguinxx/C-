#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int N;
    cin>>N;
    string S,T;
    cin>>S>>T;
    string ans;
    rep(i,N){
        ans+=S[i];
        ans+=T[i];
    }
    cout<<ans<<endl;
}
