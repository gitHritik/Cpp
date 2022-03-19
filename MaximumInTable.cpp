#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int a[10][10];
for(int i=0;i<n;i++){
    for(int j = 0;j<n;j++){
        a[i][0] = 1;
        a[0][j] = 1;
       
    }

   for(int i=1;i<n;i++){
       for(int j=1;j<n;j++){
           a[i][j] = a[i-1][j] + a[i][j-1];
       }
   }
}
cout<<a[n-1][n-1];

}