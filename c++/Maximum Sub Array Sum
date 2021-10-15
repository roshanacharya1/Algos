//cumulative sum approach o(n2)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cursum[n+1]; //sum of 0 to i
     cursum[0] = 0;
    int maxSum = INT_MIN;
for(int i= 1; i<=n;i++){//start point
cursum[i] = cursum[i-1]+a[i-1];  
}



for(int i=1; i<=n; i++){
    int sum = 0;
    for(int j = 0; j<i; j++){
        sum = cursum[i] - cursum[j];
        maxSum = max(sum,maxSum);
    }
}
cout<<maxSum;
return 0 ;
}
