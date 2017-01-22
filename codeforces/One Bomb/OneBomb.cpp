//Codeforces Round #363 (Div. 2)
//One Bomb
#include <bits/stdc++.h>
using namespace std;
char A[1001][1001];
int V[1001],H[1001];


int main(){
    ios::sync_with_stdio(false);
   // freopen("input.txt","r",stdin);
    int nw=0,a,b,n,m;
    bool res=false;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>A[i][j];
            nw+=A[i][j]=='*';
            V[i]+=A[i][j]=='*';
            H[j]+=A[i][j]=='*';
         }
     }

    int curr=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
           curr = (V[i]+H[j])-(A[i][j]=='*');
           if(curr == nw){
               res = true;
               a=i;b=j;
               break;
           }
        }
        if(res) break;
    }
    if(res){
        cout<<"YES\n";
        cout<<a<<" "<<b<<"\n";
    }
    else cout<<"NO\n";
    
    return 0;

}