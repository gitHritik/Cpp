#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
    int32_t main(){
       int n;cin>>n;
           int mw = 0,cw=0;
       for(int i=0;i<n;i++){
           int m,c;
          
           cin>>m>>c;

           if(m > c){
              mw++;
           }else if(m < c){
               cw++;
           }else{
               mw++;
               cw++;
           }

       }
       if(mw > cw){
             cout<<"Mishka";
       }else if(mw < cw){
             cout<<"Chris";
       }else{
           cout<<"Friendship is magic!^^";
       }

    }