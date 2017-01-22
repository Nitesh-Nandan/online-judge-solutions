// Codeforces Round #312 (Div. 2)
//B. Amr and The Large Array
#include <bits/stdc++.h>
using namespace std;
int A[1000005],B[1000005],f[1000005];
int maxx=0;
int main(){
   ios::sync_with_stdio(false);
   //freopen("input.txt","r",stdin);
   int lid,rid;
   int n,temp;cin>>n;
   for(int i=1;i<=n;i++){
       cin>>temp;
       f[temp]++;
       if(!A[temp]) A[temp]=i;
       B[temp]=i;
       if(maxx<=f[temp]){
           if(maxx==f[temp]){
               if(B[temp]-A[temp]<rid-lid){
                   lid=A[temp]; rid=B[temp];
               }
           }
           else{
               maxx = f[temp];
               lid=A[temp]; rid=B[temp];

           }
       }

   }
   cout<<lid<<" "<<rid<<"\n";
   return 0;
}