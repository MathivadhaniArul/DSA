//Tabulation
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
    vector<int>dp(n,0);
    dp[0]=0;
    //memset(dp,0,sizeof(dp));
    int fs,ss;
    for(int i=1;i<n;i++){
    fs=dp[i-1]+abs(energy[i]-energy[i-1]);
    ss=INT_MAX;
    if(i>2){ss=dp[i-2]+abs(energy[i]-energy[i-2]);}
    dp[i]=min(fs,ss);
    }
    return dp[n-1];
  
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
    cout<<"Energy required : "<<frog(energy,step);

    return 0;
}
