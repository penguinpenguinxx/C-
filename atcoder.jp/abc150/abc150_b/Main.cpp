#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)


int N;
string S;

int main() {
    cin >> N >> S;
    int ans=0;
    rep(i,N-2)
        if(S.substr(i,3)=="ABC")
        ans++;
    cout<<ans<<endl; 
}