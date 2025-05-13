// TC: O(n1+n2)
//SC:O(n1+n2)
#include <iostream>
#include<vector>
using namespace std;

void UNION(vector<int>a,vector<int>b){
    vector<int>uni;
   int n1,n2,i=0,j=0;
   n1=a.size();
   n2=b.size();
   while(i<n1&&j<n2){
       if(a[i]<b[j]){
           if(uni.empty()||uni.back()!=a[i]){
               uni.push_back(a[i]);
           }
           i++;
       }
       else if(a[i]>b[j]){
              if(uni.empty()||uni.back()!=b[j]){
               uni.push_back(b[j]);
       }
        j++;
       }
       else{
           if(uni.empty()||uni.back()!=b[j]){
               uni.push_back(b[j]);
       }
       j++;
       i++;
   }}
   while(i<n1){
       if(uni.empty()||uni.back()!=a[i]){
               uni.push_back(a[i]);
           }
           i++;
   }
  while(j<n2){
        if(uni.empty()||uni.back()!=b[j]){
               uni.push_back(b[j]);
       }
       j++;
  }
   for(auto k:uni){
       cout<<k<<" ";
   }
}
int main() {
   vector<int> a,b;
   int n1,n2,element;
   cout<<"Enter the size of first array : ";
   cin>>n1;
   cout<<"Enter the size of second array : ";
   cin>>n2;
   cout<<"First array: "<<"\n";
   for(int i=0;i<n1;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.push_back(element);
   }
   cout<<"Second array: "<<"\n";
   for(int i=0;i<n2;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      b.push_back(element);
   }
   
   UNION(a,b);
   
    return 0;
}
