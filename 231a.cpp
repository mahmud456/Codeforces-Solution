#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,s=0;
    cin>>i;
    for(;i>0;i--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>1) s++;
    }
    cout<<s<<endl;
}
