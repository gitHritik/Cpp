#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void swap(int i,int j){
    int temp = i;
    i=j;
    j=temp;
}
int32_t main(){
int n;
cin>>n;

if(n % 2 == 0){
   cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
}else{
    cout<<"-1"<<" ";
}
}