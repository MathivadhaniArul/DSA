// TC: O(2N)--> IF MAJOR ELEMENT MAY NOT EXIST 
     //  O(N) --> IF MAJOR ELEMENT EXIST FOR SURE
//SC O(1)
#include <iostream>
#include<vector>
#include<map>
using namespace std;
int major(vector<int>a){
    int n=a.size(),major=a[0],count=1,m=0;
    
    for(int i=0;i<n;i++){
        if(a[i]==major){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            major=a[i+1];
        }
    }
    for(int j=0;j<n;j++){
        if(a[j]==major){
            m++;}
            if(m>n/2){
                return major;
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
