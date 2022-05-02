#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int sum = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    if(sum % n == 0){
        int avg = (float)sum/(float)n;
        int k =0;
        for(int i=0;i<n;i++){
            if(a[i] > avg){
                k++;
            }
        }
        cout<<k<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}
