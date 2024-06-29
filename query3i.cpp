#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 int pre[n];
  for(int i=0;i<n;i++){
    pre[i]=a[i]=pre[i-1];
 }
 int x;
 cin>>x;
  for(int i=0;i<x;i++){
    cout<<pre[i]<<" ";
 }
  return 0;
}