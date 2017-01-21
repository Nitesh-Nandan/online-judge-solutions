#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t,num;cin>>t;
    while(t--){
        cin>>num;
        if(num<1) {cout<<"0\n";continue;}
        if(num==1){cout<<"1\n";continue;}
        int lmax = sqrt(num);
        
        bool ck = false;
        for(int i=2;i<=lmax;i++){
            int p=i;
            while(p<num){
                if(p*i==num) { ck = true;break;}
                p*=i;
            }
            if(ck) break;
        }
        if(ck) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}