#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int N,q;
 cin>>N>>q;
 int A[N];
 for(int i=0;i<N;i++){
    cin>>A[N];
 }
 int pre[N];
  for(int i=1;i<N;i++){
    pre[i]=A[i]+pre[i-1];
 }
  for(int i=0;i<N;i++){
    cout<<pre[i]<<" ";
 }
 while(q--){
    int l,r;
    cin>>l>>r;
    int sum=0;
    // if(l==0)sum=pre[N];
    // else sum=pre[N]-pre[l-1];
 }

  return 0;
}