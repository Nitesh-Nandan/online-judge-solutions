#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
# define MOD 1000000007
lln DP[1002][802];

void fun(){
    for(int i=0;i<=1000;i++) DP[i][0]=1;
    
    for(int i=1;i<=1000;i++){
         int lmt = min(i,800);
        for(int j=1;j<=lmt;j++){
            DP[i][j]=(DP[i-1][j-1]+DP[i-1][j])%MOD;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    fun();
    int t; cin>>t;
    while(t--){
        int N,R; cin>>N>>R;
        cout<<DP[N][R]<<"\n";
    }
    return 0;
}