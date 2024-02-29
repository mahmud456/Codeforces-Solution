#include<bits/stdc++.h>
using namespace std;

int main(){
  int j;
  cin>>j;
  for(;j>0;j--){
    int c=0;
    string w;
  cin>> w;
  for(int i=0;w[i]!=NULL;i++)
    c++;
  if(c>10)
    cout<<w[0]<<c-2<<w[c-1]<<endl;
  else
    cout<<w<<endl;
  }
}
