#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;

int faces=0;
while(n--){
 string s;
 cin>>s;
    if(s=="Tetrahedron"){
        faces+=4;
    }
    else if(s=="Cube"){
         faces+=6;
    }
    else if(s=="Octahedron"){
        faces+=8;
    }
    else if(s=="Dodecahedron"){
         faces+=12;
    }
    else{
         faces+=20;
    }

} 
cout<<faces;

}