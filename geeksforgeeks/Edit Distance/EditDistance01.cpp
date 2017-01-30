#include <bits/stdc++.h>
using namespace std;
int DP[102][102];
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        string str1,str2;
        int n,m; cin>>n>>m;
        cin>>str1>>str2;
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0) DP[i][j]=j;
                else if(j==0) DP[i][j]=i;
                else if(str1[i-1]==str2[j-1]){
                    DP[i][j]=DP[i-1][j-1];
                }
                else
                    DP[i][j]=1 + min(DP[i-1][j-1],min(DP[i-1][j],DP[i][j-1]));
            }

        }
     
        cout<<DP[n][m]<<"\n";

    }
}