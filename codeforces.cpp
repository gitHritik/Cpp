#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int a[6][6],i,j,r,c;

for(int i=1;i<6;i++){
    for(int j=1;j<6;j++){
        cin>>a[i][j];

        if(a[i][j] == 1){
            r=abs(3-i);
            c=abs(3-j);
            cout<<r+c;
        }
    }
}

}