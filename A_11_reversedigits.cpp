// Reverse a number
#include<iostream>
using namespace std;
int reverse(int num){
    int rev=0;
    while(num){
        int ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    return rev;
}


int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int res=reverse(n);
    cout<<"Reverse number is:"<<res;
}
