#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;

while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool istrue=true;
    for(int j=n-1;j>0;j--){
        if(arr[j] - arr[j-1] > 1){
            istrue=false;
            break;
        }
    }
    
if(istrue){
    cout<<"YES"<<"\n";
}else{
    cout<<"NO"<<"\n";
}
}

}