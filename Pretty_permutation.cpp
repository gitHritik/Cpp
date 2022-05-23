#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void swap(int i ,int j){
    int temp = i;
    i=j;
    j=temp;
}
int32_t main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
if(n%2 != 0){
    for(int i=1;i<=n-3;i+=2){
        cout<<i+1<<" "<<i<<"\n";
        
    }
    cout<<n<<" "<<n-2<<" "<<n-1<<"\n";
}else{
    for(int i=1;i<=n;i+=2){
        cout<<i+1<<" "<<i<<"\n";
    } 
}


}

}