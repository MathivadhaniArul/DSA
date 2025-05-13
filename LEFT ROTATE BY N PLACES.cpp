// TC: O(2n)
//SC:O(R)
#include <iostream>
#include<vector>
using namespace std;
void reverse(int a[],int start,int end){
    int temp;
    while(start<=end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void LR(int a[],int n,int r){
   reverse(a,0,r-1);
   reverse(a,r,n-1);
   reverse(a,0,n-1);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}
int main() {
   int n,element,r;
   cout<<"Enter the size of the array : ";
   cin>>n;
   cout<<"no.of rotation: ";
   cin>>r;
   r=r%n;
   int a[n];
   
   for(int i=0;i<n;i++){
      cout<<"Enter element"<<(i+1)<<" : "; 
      cin>>element;
      a[i]=element;
   }
  
 LR(a,n,r);
   
    return 0;
}
