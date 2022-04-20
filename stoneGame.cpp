#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)


int32_t main(){

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
 
        int a[n];
 
        int ma=INT_MIN;
        int mi=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            ma=max(ma,a[i]);
            mi=min(mi,a[i]);
        }
 
        int lma,lmi;
 
        for (int i = 0; i < n; i++)
        {
            if(a[i]==ma)
                lma=i+1;
 
            if(a[i]==mi)
                lmi=   i+1; 
        }
 
        int rma=n-lma+1;
        int rmi=n-lmi+1;
 
        int a1=max(rma,rmi);
        int a2=max(lma,lmi);
 
        int a3=min(lma+rmi,rma+lmi);
 
        cout<<min(a1,min(a2,a3))<<"\n";
    }
}