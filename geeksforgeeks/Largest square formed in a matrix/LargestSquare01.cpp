#include <bits/stdc++.h>
using namespace std;
int Arr[51][51],DP[51][51];

int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++) 
           for(int j=1;j<=n;j++){
               cin>>Arr[i][j];
           }
        
        int res = 0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(Arr[i][j]==0){
                    DP[i][j]=0;
                }
                else{
                    DP[i][j]=1+min(DP[i-1][j-1],min(DP[i-1][j],DP[i][j-1]));
                    res = max(res,DP[i][j]);
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}