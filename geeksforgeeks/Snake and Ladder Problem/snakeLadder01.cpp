#include <bits/stdc++.h>
using namespace std;
vector<int> ladder;
vector<int> ttr;
vector<bool>visited;

void reach(int cp){
    queue<int> mq;
    mq.push(cp);
    ttr[cp]=0;
    visited[cp] = true;
    while(!mq.empty())
    {
        int t = mq.front();
        mq.pop();
        for(int i=1;i<=6;i++)
        {
              if(t+i<=30)
              { 
                    cp = ladder[t+i];
                    //cout<<cp<<" ";
                    if(!visited[cp])
                    {
                        visited[cp] = true;
                        mq.push(cp);
                        ttr[cp] = ttr[t]+1;
                    }

              }

        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    int t,a,b,n; cin>>t;

    while(t--){
       
       ladder.clear();ttr.clear();visited.clear();
       ladder.resize(31);
       ttr.resize(31,31); visited.resize(31,false);
       for(int i=0;i<=30;i++)ladder[i]=i;
       
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            ladder[a]=b;
        }
         reach(1);
         cout<<ttr[30]<<"\n";
       
    }
    return 0;
}