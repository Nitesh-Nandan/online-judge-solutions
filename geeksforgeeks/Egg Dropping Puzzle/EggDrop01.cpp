#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
lln DP[11][51];
void fun(){
    lln res;
    for(int i=1;i<=50;i++) DP[1][i]=i;
    for(int i=1;i<=10;i++) DP[i][1]=1;

    for(int i=2;i<=10;i++){
        for(int j=2;j<=50;j++){
            DP[i][j]=LONG_MAX;

            for(int x=1;x<=j;x++){
                res = 1 + max(DP[i][j-x],DP[i-1][x-1]);
                if(res<DP[i][j]){
                    DP[i][j] =res;
                }
            }
        }
    }
}
int main(){
    fun();
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<DP[n][k]<<"\n";
    }
    return 0;
  
}