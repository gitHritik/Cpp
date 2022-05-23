#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int sum=0,cnt=0;
int x = 1;
while(1){//it will run until the break statement hit
    for(int i=1;i<=x;i++){
        sum+=i;//first it wil run for once so sum = 1;
               //next so it again run from 1 to 2 so 1 + 1+ 2=4;
               //4 + 1 + 2 + 3+=10;
               //10 + 1+2+3+4=20
               //now the 5th time it will break;
    }
    x++;
    if(sum > n)//because sum > n
    break;
    cnt++;// it will kept increasing until loop not break;
    //so now it will 2
}
   
cout<<cnt;

}