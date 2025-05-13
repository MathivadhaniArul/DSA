// TC: O(2n)
//SC:O(1)
#include <iostream>
#include<vector>
using namespace std;
void SecondLar(int a[],int n){
   int largest=a[0],second=a[0];
   for(int i=1;i<n;i++){
       if(a[i]>largest){
           largest=a[i];
       }
   }
   
   for(int i=1;i<n;i++){
       if(second<a[i]&&a[i]<largest){
           second=a[i];
       }
   }
   cout<<"Second Largest element is "<<second;
   
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
