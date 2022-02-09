#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n,t;
cin>>n>>t;

char s[n];
cin>>s;
for(int i=0;i<t;i++){
    for(int j=0;s[j] !='\0';j++){
        if(s[j] == 'B' && s[j+1] == 'G'){
            s[j] = 'G';
            s[j+1] = 'B';
            j++;
        }
    }
}
  cout<<s;

}