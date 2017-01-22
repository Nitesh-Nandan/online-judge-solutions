//Codeforces Beta Round #79 (Div. 2 Only)
//B. Sum of Digits
#include <bits/stdc++.h>
using namespace std;
typedef long long lln;
int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    lln num=0;
    for(int i=0;i<str.length();i++){
        num+=(int)(str[i]-48);
    }
    int ct = num==0?0:1;
    while(num>=10){
        ct++;
        lln temp=0;
        while(num>0){
            temp+=num%10;
            num/=10;
        }
        num = temp;
    }
    cout<<ct<<"\n";
    return 0;
}