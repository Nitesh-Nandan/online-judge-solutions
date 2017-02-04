#include <bits/stdc++.h>
using namespace std;
int Arr[105];
int DP[105];
int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>Arr[i];
        
        for(int i=1;i<=n;i++){
            int tem = Arr[i];
            for(int j=i-1;j>=1;j--){
                if(Arr[i]>Arr[j]){
                    tem = max(tem,Arr[i]+DP[j]);
                }
            }
            DP[i] = tem;
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
           ans = max(ans,DP[i]);
        }
        cout<<ans<<"\n";
    }
 return 0;
}