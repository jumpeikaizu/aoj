#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  int num[n]; 
  for(int i=0;i<n;i++) cin>>num[i];
  sort(num,num+n);
  for(int i=0;i<n;i++){
    if(i) cout<<' ';
    cout<<num[i];
  }
  cout<<endl;
}