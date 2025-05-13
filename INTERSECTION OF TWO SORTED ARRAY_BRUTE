// TC: O(n1*n2)
//SC:O(n2) in case of visited array
#include <iostream>
#include<vector>
using namespace std;

void INTER(vector<int>a,vector<int>b){
    vector<int>uni;
   int n1,n2;
   n1=a.size();
   n2=b.size();
  for(int i=0;i<n1;i++){
      for(int j=0;j<n2;j++){
          if(a[i]==b[j]&&uni.empty()){
              uni.push_back(a[i]);
          }
          else if(a[i]==b[j]&&uni.back()!=a[i]){
              uni.push_back(a[i]);
          }
      }
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
   
 INTER(a,b);
   
    return 0;
}
