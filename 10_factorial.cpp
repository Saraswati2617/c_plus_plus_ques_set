// Find the factorial of a number
#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=n;i>=1;i--){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int res=factorial(n);
    cout<<res;
}