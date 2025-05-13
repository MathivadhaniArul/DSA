// TC: O(nlogn)
//SC:O(1)
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string Sum2(vector<int>a,int sum){
    sort(a.begin(),a.end());
 int start=0;
 int end=a.size()-1;
 while(start<=end){
     if(start==end)
     return "NO";
     else if(a[start]+a[end]<sum)
     start++;
     else if(a[start]+a[end]>sum)
     end--;
     else
     return "YES";
 }
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
   }5
   
  
string ans=Sum2(a,sum);
cout<<ans;
   
    return 0;
}
