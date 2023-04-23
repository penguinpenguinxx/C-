#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
int N;
int main(){
    cin >> N;
//    cout << N <<endl;
    for(int i=1;i<10;i++){
        if(N%i==0){
            if(N/i<10){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}