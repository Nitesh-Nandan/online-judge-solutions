#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int A[10][10];

pii getGroup(int r,int c){
    if(r<=3 and c<=3) return make_pair(1,1);
    else if(r<=3 and c<=6) return make_pair(1,4);
    else if(r<=3 and c<=9) return make_pair(1,7);
    else if(r<=6 and c<=3) return make_pair(4,1);
    else if(r<=6 and c<=6) return make_pair(4,4);
    else if(r<=6 and c<=9) return make_pair(4,7);
    else if(r<=9 and c<=3) return make_pair(7,1);
    else if(r<=9 and c<=6) return make_pair(7,4);
    else  return make_pair(7,7);

}

bool isValidinGroup(int r,int c,int num){
    pii dim  = getGroup(r,c);
    int R = dim.first;
    int C = dim.second;
    for(int i=R;i<=R+2;i++){
        for(int j=C;j<=C+2;j++){
            if(A[i][j]==num) return false;
        }
    }
    return true;
}

bool isValidinRow(int r,int num){
    for(int i=1;i<=9;i++){
        if(A[r][i]==num) return false;
    }
    return true;
}

bool isValidinCol(int c,int num){
    for(int i=1;i<=9;i++){
        if(A[i][c]==num) return false;
    }
    return true;
}

bool isValidNo(int r,int c,int num){
    if(isValidinGroup(r,c,num) && isValidinRow(r,num) && isValidinCol(c,num)) return true;
    else return false;
}

bool isBlank(int &r,int &c){
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
            if(A[i][j]==0){ r=i; c=j;return true;}

    return false;
}

bool solve(){
    int row,col;
    if(!isBlank(row,col))
       return true;
    
    for(int i=1;i<=9;i++){
        if(isValidNo(row,col,i)){
            A[row][col]=i;

            if(solve())
                return true;
            A[row][col]=0;
        }
    }
    return false;
    
}

int main(){
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t; cin>>t;
    while(t--){
        for(int i=1;i<=9;i++)
            for(int j=1;j<=9;j++)
               cin>>A[i][j];

        solve();
       
        for(int i=1;i<=9;i++)
            for(int j=1;j<=9;j++)
                cout<<A[i][j]<<" ";
        
        cout<<"\n";
    }
    return 0;

}