#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    int n;cin>>n;
    int temp;
    int one =0,two=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp == 1){
            one++;
        }else{
            two++;
        }

    }
    int sum = one*1+two*2;
    if(sum % 2 == 1 || two % 2 == 1){
        cout<<"NO"<<"\n";
    }
    else{

        if(two % 2 == 1){
            if(one >= 2 && one % 2 == 0){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    
    else{
        cout<<"YES"<<"\n";
    }
    }
}
int32_t main(){
 int t;cin>>t; 
 while(t--){
     solve();

 }


}