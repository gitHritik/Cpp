#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int best,wrost,count=0;

cin>>best;
wrost = best;

while(--n){
    int a;
    cin>>a;
    if(wrost > a){
        wrost = a;
        count++;
    }
    if(best < a){
        best = a;
        count++;
    }
}
cout<<count;

}