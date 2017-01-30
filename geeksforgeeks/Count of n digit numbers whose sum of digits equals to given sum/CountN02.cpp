#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
# define MOD 1000000007

lln DP[102][1002];

void fun(){
    for(int i=1;i<=9;i++) DP[1][i]=1;

    for(int i=2;i<=100;i++){
        for(int j=1;j<=1000;j++){
           lln res=0;
           for(int x=9;x>=0;x--){
               if(j>=x) res= (res+DP[i-1][j-x])%MOD;
           }
           DP[i][j] = res;

        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    fun();
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(DP[a][b]==0) cout<<"-1\n";
        else cout<<DP[a][b]<<"\n";
    }
    return 0;
}