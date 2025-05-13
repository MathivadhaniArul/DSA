// TC: O(2n)
//SC:O(1)
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
void SecondLar(int a[],int n){
   int smallest=INT_MAX,second=INT_MAX;
   for(int i=1;i<n;i++){
       if(a[i]<smallest){
           smallest=a[i];
       }
   }
   
   for(int i=1;i<n;i++){
       if(second>a[i]&&a[i]>smallest){
           second=a[i];
       }
   }
   cout<<"Second smallest element is "<<second;
   
}
int main() {
   int n,element;
   cout<<"Enter the size of the array : ";
   cin>>n;
   int a[n];
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a[i]=element;
   }
  
 SecondLar(a,n);
   
    return 0;
}
