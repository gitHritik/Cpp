#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void capital(char s[100]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i] >=97){
            s[i] -=32;
        }
    }
}
void small(char s[100]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i] <=90){
            s[i] +=32;
        }
    }
}
int32_t main(){
    char s[100];
    int u=0,l=0;

    cin>>s;
    for(int i=0;s[i] != '\0';i++){
        if(s[i] >= 97){
            l++;
        }
        else{
            u++;
        }
    }

    if(u>l){
        capital(s);
    }else{
        small(s);
    }

    cout<<s;

}