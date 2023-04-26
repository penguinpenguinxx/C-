#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int a,b;
    cin>>a>>b;
    string S(b,'0'+a),T(a,'0'+b);
    if(a>b){
        cout<<T<<endl;
    }
    else{
        cout<<S<<endl;
    }

}