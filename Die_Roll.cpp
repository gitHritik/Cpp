#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int a,b,c;cin>>a>>b;
 c = max(a,b);
 c =(6-c)+1;
if(c%2==1){
    if(c==3)
        cout<<"1/2"<<"\n";
    else
        cout<<c<<"/6"<<"\n";
    
}else{
    if(c==4)
        cout<<"2/3"<<"\n";
    else
        cout<<"1/"<<6/c<<"\n";
    
}


}