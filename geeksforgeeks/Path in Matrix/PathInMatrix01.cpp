#include <bits/stdc++.h>
using namespace std;

int Arr[21][21];
int DP[21][21];
int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int N; cin>>N;
        for(int i=1;i<=N;i++)
            for(int j=1;j<=N;j++) 
                cin>>Arr[i][j];
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(j==N)
                   DP[i][j] = Arr[i][j]+max(DP[i-1][j-1],DP[i-1][j]);
                else 
                   DP[i][j] = Arr[i][j]+max(DP[i-1][j-1],max(DP[i-1][j],DP[i-1][j+1]));
            }
        }
        int res = DP[N][1];
        for(int i=2;i<=N;i++){
            res = max(res,DP[N][i]);
        }
        cout<<res<<"\n";
      /**  for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
             cout<<DP[i][j]<<" ";
            }
            cout<<endl;
        }*/
        
    }
    return 0;
}