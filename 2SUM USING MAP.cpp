// TC: O(nlogn)
//SC:O(n)
#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector<int> Sum2(vector<int>a,int n,int sum){
  map<int,int> ind;
  int more;
  for(int i=0;i<n;i++){
      more=sum-a[i];
      if(ind.find(more)!=ind.end()){
          return {ind[more],i};
      }
      ind[a[i]]=i;
  }
  return {-1,-1};
}
int main() {
   int n,element,sum;
   cout<<"Enter the size of the array : ";
   cin>>n;
   vector<int> a;
   cout<<"enter the sum ";
   cin>>sum;
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.push_back(element);
   }
  
vector<int>index=Sum2(a,n,sum);
for(auto i:index){
    cout<<i<<" ";
}
   
    return 0;
}
