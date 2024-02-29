#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>> name;
    int c=name.size(),f=0;

    for(int i=0;i<name.size();i++){
        for(int j=i+1;j<name.size();j++){
            if(name[i]==name[j]) f=1;
        }
        if(f==1) c--;
        f=0;
    }
    if(c%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}
