// Find lcm of two numbers
#include<iostream>
using namespace std;

int find_gcd(int n1,int n2){
    if(n2==0){
        return n1;
    }
    return find_gcd(n2,n1%n2);
}
int lcm(int num1,int num2){
    if(num1%num2==0){
        return num1;
    }
    if(num2%num1==0){
        return num2;
    }
    return ((num1/find_gcd(num1,num2))*num2);
    

}

int main(){
    int num1,num2;
    int ans;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    ans=lcm(num1,num2);
    cout<<"Answer:"<<ans;
}