#include <bits/stdc++.h>
using namespace std;
int DP[51][51];

int LCS(string A,string B){
    A = '*'+A;
    B = '*'+B;
    int n = A.length();
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(A[i]==B[j]){
                DP[i][j]=1+DP[i-1][j-1];
            }
            else
               DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
        }
    }
    return DP[n-1][n-1];
}
int main(){
    int t; cin>>t;
    while(t--){
        string rstr,str;
        cin>>str;
        rstr=str;
        reverse(rstr.begin(),rstr.end());
        cout<<str.length()-LCS(str,rstr)<<"\n";  
    }
    return 0;
}