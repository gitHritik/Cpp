#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
        int32_t main(){
        int year,a,b,c,d,ans=0;

        cin>>year;
        while(1){
            year++;
            ans=year;
            a=year%10;
            year=year/10;
            b=year%10;
            year=year/10;
            c=year%10;
            year=year/10;
            d=year%10;

            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                cout<<ans;
                break;
            }
            year = ans;

        }
    }