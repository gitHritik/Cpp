#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
    int n,d=0,a=0;
    char s[n];
    cin>>n;
    cin>>s;

    for(int i=0;s[i] != '\0';i++){
        if(s[i] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }

    if(a > d){
        cout<<"Anton";
    }else if(a < d){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

}