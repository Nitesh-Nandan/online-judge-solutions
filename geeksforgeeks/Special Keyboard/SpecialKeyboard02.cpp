#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
lln DP[80];

int cal(int num){
    if(DP[num]!=0) return DP[num];
    lln maxx = 0;
    for(int i = num-3;i>=1;i--){
        lln curr = (num-i-1)*cal(i);
        maxx  =  max(curr,maxx);
    }
    //return maxx;
    return DP[num]=maxx;
}
int main(){
    ios::sync_with_stdio(false);
    DP[1]=1;DP[2]=2;DP[3]=3,DP[4]=4;DP[5]=5;DP[6]=6;
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<cal(n)<<"\n";
    }
    return 0;
}