// TC:O(NLOGN)
//SC: O(N)
#include <iostream>
#include<vector>
#include<map>
using namespace std;
int major(vector<int>a){
    int n=a.size();
    map<int,int> m;
    for(int i=0;i<n;i++){
       m[a[i]]++;
      if(m[a[i]]>n/2){
        return a[i];
      }
    }
    return -1;
}
int main() {
   int n,element;
   cout<<"Enter the size of the array : ";
   cin>>n;
   vector<int>a;
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.push_back(element);
   }
   int k=major(a);
   if(k==-1){
       cout<<"No Major element ";
   }
   else{
   cout<<"Major element: "<<k;}
    return 0;
}
