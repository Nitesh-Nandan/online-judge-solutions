//codeforces 127 B. Canvas Frames
//codeforces 127 

#include <bits/stdc++.h>
using namespace std;
int A[101];
int main(){
    ios::sync_with_stdio(false);
   // freopen("input.txt","r",stdin);
    int n,num; cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        A[num]++;
    }
    int res=0;
    for(int i=1;i<=100;i++){
        res+=(A[i]/2);
    }
    cout<<res/2<<"\n";
    return 0;

}