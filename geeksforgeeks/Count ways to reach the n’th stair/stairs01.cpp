#include <bits/stdc++.h>
using namespace std;
# define MOD 1000000007
int fab[102];
void fun(){
    fab[1]=1; fab[2]=2;
    
    for(int i=3;i<=100;i++){
        fab[i] = (fab[i-1]+fab[i-2])%MOD;
    }

}
int main(){
    fun();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<fab[n]<<"\n";
    }
    return 0;
}