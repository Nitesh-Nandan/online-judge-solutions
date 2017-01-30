#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
int A[11][11];
PII dp[11][11];

PII ck(PII t1,PII t2,int c){
   if(t1.second+c<0){
       t1.first+=abs(t1.second+c);
       t1.second=0;
   }
   else{
       t1.second+=c;
   }
   
   if(t2.second+c<0){
       t2.first+=abs(t2.second+c);
       t2.second=0;
   }
   else{
       t2.second+=c;
   }

  if(t1.first<t2.first) return t1;
   else if(t1.first==t2.first){
       if(t1.second>t2.second) return t1;
       else return t2;
   }
   else return t2;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>A[i][j];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1){
                      PII t = dp[i][j-1];
                      if(t.second+A[i][j]<0){
                          t.first+= abs(t.second+A[i][j]);
                          t.second=0;
                      }
                      else{
                          t.second+=A[i][j];
                      }
                      dp[i][j]=t;
                }

                else if (j==1){
                    PII t = dp[i-1][j];
                     if(t.second+A[i][j]<0){
                          t.first+= abs(t.second+A[i][j]);
                          t.second=0;
                      }
                      else{
                          t.second+=A[i][j];
                      }
                     dp[i][j]=t;
                }
                
                else{
            
                    dp[i][j]=ck(dp[i-1][j],dp[i][j-1],A[i][j]);
                     
                }

            }
        }

      /**  for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<dp[i][j].first<<","<<dp[i][j].second<<"  "; 
            }
            cout<<endl;
        }*/

        cout<<dp[n][m].first+1<<"\n";

       
    }
    return 0;
}