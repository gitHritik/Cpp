#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000

int32_t main(){
int t;cin>>t;
 int min = INT_MAX;
 int max = INT_MIN;
while(t--){
    int n;cin>>n;
    int a[n];
    int count=0;
    int p_max=-1;
    int p_min=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
         if(a[i] > max){
             max=a[i];
             p_max=i+1;
         }

         if(a[i] < min){
             min=a[i];
             p_min=i+1;
         }
        
    }
  
    int rmax=n-p_max+1;
    int rmin=n-p_min+1;

    int a1=max(rmax,rmin);
    int a2=max(p_max,p_min);
    int a3=min(rmax+p_min,rmin+p_max);

  
    cout<<min(a1,min(a2,a3))<<"\n";
}
}