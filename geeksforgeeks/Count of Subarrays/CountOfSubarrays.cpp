#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main(){
    int t; cin>>t;
    while(t--){
        int N,K,S=0; cin>>N>>K;
        for(int i=0;i<N;i++)cin>>arr[i];

        for(int i=0;i<N;){
            if(arr[i]>K){i++;continue;}
            int ct=0;
            while(i<N and arr[i]<=K){ct++;i++;}
            S+=(ct*(ct+1)/2);

        }
        cout<<(N*(N+1)/2-S)<<"\n";

    }
    return 0;

}