#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i,N){
        cin>>A[i];
        if(A[i]%2==0){
            if(A[i]%3!=0 and A[i]%5!=0){
                cout<<"DENIED"<<endl;
                return 0;

            }
        }
    }
    cout<<"APPROVED"<<endl;


}