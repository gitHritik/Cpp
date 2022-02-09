#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int i,j,len;
char s[100];
cin>>s;
len = strlen(s);

for(int i=0;i<len-1;i++){
    for(int j=0;j<len-i-1;j++){
        if(s[j] != '+'){
            if(s[j] > s[j+2]){
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
}
 cout<<s;

}