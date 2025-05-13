//TC: O(N)
//SC:O(1)
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
#include<string>
using namespace std;
void swap(int*a ,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SORT_012(vector<int>a){
    int n=a.size();
 int low=0,mid=0,high=n-1;
 while(mid<=high){
     if(a[mid]==0){
         swap(&a[low],&a[mid]);
         low++;
         mid++;
     }
     else if(a[mid]==1){
         mid++;
     }
     else{
         swap(&a[mid],&a[high]);
         high--;
     }
 }
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
   
}
int main() {
   int n,element,sum;
   cout<<"Enter the size of the array ";
   cin>>n;
   vector<int> a;
   
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.push_back(element);
   }
   
 SORT_012(a);

   
    return 0;
}
