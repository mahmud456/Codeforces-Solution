#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,a=0;
    cin>>n>>p;
    int c[n];
    for(int i=0;i<n;i++) cin>> c[i];
    for(int i=0;i<n;i++) if(c[i]>=c[p-1] && c[i]>0) a++;
    cout<<a;
}
