#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
# define MOD 1000000007

lln DP[71];

void fun(){
    DP[1]=2; DP[2]=3;
    for(int i=3;i<=70;i++){
        DP[i]=(DP[i-1]+DP[i-2])%MOD;
    }
}

int main(){
    ios::sync_with_stdio(false);
    fun();
    int t; cin>>t;
    while(t--){
        int num; cin>>num;
        cout<<DP[num]<<"\n";
    }
    return 0;
}