// Check for Palindrome Number: Check if a number is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int palindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==temp){
        cout<<"palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    
}

int main(){
    int num;
    cin>>num;
    palindrome(num);
}