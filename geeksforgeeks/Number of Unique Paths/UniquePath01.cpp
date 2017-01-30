#include <bits/stdc++.h>
using namespace std;
int A[16][16];
int main(){
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                 
                  if(i==1 or j==1) A[i][j]=1;
                  else{
                      A[i][j]=A[i-1][j]+A[i][j-1];
                  }

            }
        }
        cout<<A[m][n]<<"\n";
    }
    return 0;
}