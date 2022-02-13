#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int arr[3];
int totaldistance=0;
for(int i=0;i<3;i++){
    cin>>arr[i];
}
sort(arr,arr+3);
totaldistance=arr[2]-arr[0];
cout<<totaldistance;


}