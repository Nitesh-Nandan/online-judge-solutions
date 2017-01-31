#include <bits/stdc++.h>
using namespace std;
int C[102];
int Amt[100005];

int main(){
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int amt,n;
        cin>>n>>amt;
        for(int i=0;i<n;i++) cin>>C[i];

        for(int i=1;i<=amt;i++){
            int temp = 100001;
            for(int j=0;j<n;j++){
                if(i>=C[j]){
                    if(1 + Amt[i-C[j]]<temp)
                        temp = 1 + Amt[i-C[j]];
                }

            }
            Amt[i]=temp;
        }

       if(Amt[amt]==100001) cout<<"-1\n";
       else cout<<Amt[amt]<<"\n";
    }
    return 0;
}