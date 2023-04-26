#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    string S;
    cin>>S;
    int num=0,ans=0;
    rep(i,S.size()){
        if(S[i]=='A'||S[i]=='T'||S[i]=='C'||S[i]=='G'){
            num+=1;
            ans=max(ans,num);
        }
        else{
            num=0;
        }
    }
    cout<<ans<<endl;

}