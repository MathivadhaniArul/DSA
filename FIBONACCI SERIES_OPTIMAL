// TC: O(N)
// SC:O(1)
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    int prev1,prev2,curr;
    prev2=0;
    prev1=1;
    for(int i=2;i<n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main() {
    vector<int>a;
    int n;
        cout<<"Enter index for fibo series  : ";
        cin>>n;
    
    cout<<fibo(n);

    return 0;
}
