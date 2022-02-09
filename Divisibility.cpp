#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
                int t;
                cin>>t;
                int a,b;
              
                
                while(t--){
                    cin>>a>>b;
                    if(a % b ==0){
                        cout<<0<<'\n';
                    }else{
                        cout<<b - (a%b)<<'\n';
                    }

                    
                }

}