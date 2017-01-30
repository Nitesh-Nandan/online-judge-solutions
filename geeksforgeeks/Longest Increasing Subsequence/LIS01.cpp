#include <bits/stdc++.h>
using namespace std;
int A[1001];
int L[1001];
int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=1;i<=n;i++) {cin>>A[i];L[i]=1;}
        int res= 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){

                    if(A[i]>A[j] and L[i]<L[j]+1){
                         
                         L[i] = L[j]+1;
                         res = max(res,L[i]);

                    }
            }
        }

        cout<<res<<"\n";

        
    }
    return 0;
}