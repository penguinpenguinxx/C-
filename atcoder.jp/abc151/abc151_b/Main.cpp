#include <bits/stdc++.h>
#include <atcoder/modint>
#include <iostream>
#include <string>
#include <vector>
using namespace atcoder;
using namespace std;

int N, K,M;

int main() {
    cin >> N >> K >> M;
    int A[N-1];
    for (int i = 0; i < N-1; i++) cin >> A[i];
    M=M*N;
    for (int i = 0; i < N-1; i++) M-=A[i];
    if (M>K){
        cout<<(-1)<<endl;
    }
    else if(M<0){
        cout<<0<<endl;
    }
    else{
        cout<<M<<endl;
    }
}