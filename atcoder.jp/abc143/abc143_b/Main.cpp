#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i,n,N) for (int i = n; i < (int)(N); i++)
int main() {
    int N,ans=0;
    cin>>N;
    int tako[N];
    rep(k,0,N){
        cin>>tako[k];
    }
    rep(i,0,N){
        rep(j,i+1,N){
//            cout<<i<<j<<endl;
            ans+=tako[i]*tako[j];
        }
    }
    cout<<ans<<endl;
}