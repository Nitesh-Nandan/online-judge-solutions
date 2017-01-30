#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
int C[301];
lln DP[10000];

int main(){
    int t; cin>>t;
    while(t--){
        int n,amt;
        cin>>n;
        for(int i=0;i<n;i++) cin>>C[i];
        cin>>amt;
        sort(C,C+n);
        for(int i=0;i<=amt;i++) DP[i]=0;
        DP[0]=1;

        for(int i=0;i<n;i++){
            for(int j=C[i];j<=amt;j++){
                DP[j]+=DP[j-C[i]];
            }
        }
        
         cout<<DP[amt]<<"\n";
    }
   
 return 0;
}