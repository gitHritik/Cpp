#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
  int n;cin>>n;
 int a[n];
  int s=0;
  int d = 0;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int left =0,right = n-1;
  int taken=n,i=0;
  while(taken--){
      if(i % 2 == 0){
          if(a[left] > a[right]){
              s += a[left];
               left++;
          }else{
              s+=a[right];
              right--;
          }
      }
      else{
         if(a[left] > a[right]){
              d+= a[left];
               left++;
          }else{
              d+=a[right];
              right--;
          }
      }
      i++;
  }


  cout<<s<<" "<<d;

}