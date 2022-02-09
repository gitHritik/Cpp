#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void capital(char s[100]){
    for(int i=0;s[i] != '\0';i++){
        if(s[i] >= 97){
            s[i]=s[i]-32;
        }
    }
}
int32_t main(){
char s[100],c[100];
capital(s);
capital(c);
int i = strcmp(s,c);
cout<<i;
}