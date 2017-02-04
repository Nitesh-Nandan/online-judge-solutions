#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
lln Arr[85];
void fun(){
    Arr[1]=Arr[2]=Arr[3]=1; Arr[4]=2;
    for(int i=5;i<84;i++){
        Arr[i]=Arr[i-1]+Arr[i-4];
    }
}
int main(){
    int t; cin>>t;
    fun();
    while(t--){
        int num;
        cin>>num;
        cout<<Arr[num]<<"\n";
    }
    return 0;
}