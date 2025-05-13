// TC:O(N1LOGN+N2LOGN+N1+N2)
//SC:O(N1+N2)
#include <iostream>
#include<set>
using namespace std;

void UNION(set<int>a,set<int>b){
    set<int>uni;
    for(auto i:a){
       uni.insert(i);
   }
    for(auto i:b){
       uni.insert(i);
   }
   for(auto k:uni){
       cout<<k<<" ";
   }
}
int main() {
   set<int> a,b;
   int n1,n2,element;
   cout<<"Enter the size of first array : ";
   cin>>n1;
   cout<<"Enter the size of second array : ";
   cin>>n2;
   cout<<"First array: "<<"\n";
   for(int i=0;i<n1;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a.insert(element);
   }
   cout<<"Second array: "<<"\n";
   for(int i=0;i<n2;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      b.insert(element);
   }
   
   UNION(a,b);
   
    return 0;
}
