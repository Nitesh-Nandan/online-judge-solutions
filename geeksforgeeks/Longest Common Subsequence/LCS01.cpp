#include <bits/stdc++.h>
using namespace std;
int dp[105][105];
int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string str1,str2;
        cin>>str1>>str2;
        str1="*"+str1;
        str2="*"+str2;
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++)
                dp[i][j]=0;

        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i]==str2[j]){
                    dp[i][j]=1+dp[i-1][j-1];
                }    
                else{
                    dp[i][j]= max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
                }

            }
        }

      /** for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/

        cout<<dp[m][n]<<"\n";

    }
    return 0;

   
}