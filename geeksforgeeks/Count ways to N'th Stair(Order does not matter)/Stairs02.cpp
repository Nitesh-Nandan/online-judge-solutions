#include <bits/stdc++.h>
using namespace std;
# define MOD 1000000007
int fab[102];
void fun(){
   for(int i=1;i<=101;i++) fab[i]=1;
   fab[2]=2;
   for(int j=3;j<=101;j++){
       fab[j]=1+fab[j-2];
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