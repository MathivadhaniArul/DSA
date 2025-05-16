//Memoization (Top - Bottom approach ) 
#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include<climits>
using namespace std;

int min(int n1,int n2){
    if(n1<=n2){ return n1;}
    
    return n2;
}

int frog(vector<int>energy,int n){
    int dp[energy.size()];
    memset(dp,-1,sizeof(dp));
    int left ,right;
    if(n==0) {return 0;}
    if(dp[n]!=-1){return dp[n];}
    left=frog(energy,n-1)+abs(energy[n]-energy[n-1]);
    right=INT_MAX;
    if(n>1){
    right=frog(energy,n-2)+abs(energy[n]-energy[n-2]);}
    return dp[n]=min(left,right);
    
  
}
int main() {
   int n,element,step;
   vector<int>energy;
   
    cout << "enter the no.of steps : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"Enter Enery for step "<<(i+1)<<" : ";
        cin>>element;
        energy.push_back(element);
    }
     cout << "enter the step : ";
    cin>>step;
    cout<<"Energy required : "<<frog(energy,step-1);

    return 0;
}
