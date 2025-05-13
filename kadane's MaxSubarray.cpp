//TC: O(n)
//SC:O(1)
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
#include<string>
using namespace std;
void MaxSum(vector<int>a){
    int n=a.size();
  int sum=0,max=INT_MIN,start,end;
  for(int i=0;i<n;i++){5
      sum+=a[i];
      if(sum>max){
          max=sum;
          end=i;
      }
      if(sum<0){
          sum=0;
      }
      if(sum==0){
          start=i+1;
      }
  }
 cout<<"MaxSum: "<<max<<"\n";
cout<<"Max subarray: ";
 for(int i=start;i<=end;i++){
     cout<<a[i]<<" ";
 }
   
}
int main() {
   int n,element,sum;
   cout<<"Enter the size of the array : ";
   cin>>n;
   vector<int> a;
   
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.push_back(element);
   }
   
 MaxSum(a);

   
    return 0;
}
