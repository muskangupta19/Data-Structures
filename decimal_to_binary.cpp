#include<bits/stdc++.h>
using namespace std;

int dec_to_bin(int n){
    int x=1,a=0;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int l=n/x;
        n-=x*l;
        a=(a*10) + l;
        x/=2;
    }
    return a;
}

int main(){
    int n;
    cout<<"Enter a decimal number";
    cin>>n;
    int m=dec_to_bin(n);
    cout<<"Binary number is "<<m;
    return 0;
}