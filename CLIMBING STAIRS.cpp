#include <bits/stdc++.h>
using namespace std;
int Climb(int n){
    int left ,right;
    if(n==0) {return 1;}
    if(n==1) {return 1;}
    left=Climb(n-1);
    right=Climb(n-2);
    return left+right;
    
}
int main() {
   int n;
   
    cout << "enter the Nth step : ";
    cin>>n;
    cout<<"No.of Ways: "<<Climb(n);

    return 0;
}
