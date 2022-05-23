#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
int xa,xb;cin>>xa>>xb;
int ya,yb;cin>>ya>>yb;
int za,zb;cin>>za>>zb;
int dis=abs(ya-xa)+abs(yb-xb);
if(xa == ya && xa == za){
    if((zb > xb && zb < yb) || (zb < xb && zb > yb)){
        dis+=2;
    }
}else if(xb == yb && xb == zb){
   if((za > xa && za < ya) || (za < xa && za > ya)){
       dis+=2;
   }
}
cout<<dis<<"\n";
}

}