#include <iostream>
using namespace std;
string findvowels(string a,int k){
    string retu;
    int ar[a.size()]={0},maxval,currval,flag=0; // here ar keeps the track of size of the substring
    for (int i=0;i<a.size();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            ar[i]=1;
            flag=1;
        }
        else ar[i]=0;
        if(i) ar[i]+=ar[i-1];
    }
    maxval=0;
    for(int  j=k;j<a.size();j++){
        currval=ar[j]-ar[j-k];
        if(currval>maxval){
            maxval=currval;
            retu=a.substr(j-k+1,k); //substr used to get the substring associated with the max val
        }
    }
    if(flag) return retu;
    else return "nooooo";
}
int main(){
    string a;
    a=findvowels("bbbbbbb",5); //here 5 is the window size
    cout<<a;
    return 0;
}

//time complexity o(n)
