#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
long long n=0;
int a=0;
cin>>n;

while(n!=0){
    if(n%10 == 7 || n%10 == 4)
        a++;
        n=n/10;
    
    
}
if(a == 7 || a == 4){
    cout<<"Yes";
}else{
    cout<<"No";
}

}