#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int N;
 cin>>N;
 vector<int>A(N);
 vector<int>B(N);
 for (int i=0;i<N;i++){
    cin>>A[i];  
 }
  for (int i=0;i<N;i++){
   cin>>B[i];  
 }

 vector<int>C(2*N);
 for(int i=0;i<N;i++){
       C[i]=B[i] ;
    }
 for(int i=0;i<N;i++){
       C[N+i]=A[i] ;
    }
    
 for(int i=0;i<2*N;i++){
    cout<<C[i]<<" ";
 }

  return 0;
}