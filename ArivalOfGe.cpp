#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int max_no = 0,min_no=100;
int maxi=0,mini=0;
int a;
for(int i=1;i<=n;i++){
    cin>>a;
    if(a > max_no){
        maxi=i;
        max_no=a;
    }
    if(a <= min_no){
        mini=i;
        min_no=a;
    }
}
if(maxi > mini){
    cout<<(maxi-1)+(n-mini)-1;
}else{
    cout<<(maxi-1)+(n-mini);
}

}