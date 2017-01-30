#include <bits/stdc++.h>
using namespace std;

int A[101];
int D[101];

int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=1;i<=n;i++) cin>>A[i];
        D[1]=0;
        for(int i=2;i<=n;i++){
            int temp = 101;
            for(int j=1;j<=i-1;j++){
                if(j+A[j]>=i){
                    temp = min(temp,D[j]);
                }
            }
            D[i]=temp+1;
        }
       if(D[n]==102)cout<<"-1\n";
       else cout<<D[n]<<"\n";


    }
    return 0;
}