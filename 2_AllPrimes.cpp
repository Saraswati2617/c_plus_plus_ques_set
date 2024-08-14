//Find All Primes Up to N: Use the Sieve of Eratosthenes to find all primes up to a given number. 

#include<iostream>
using namespace std;
int AllPrimes(int n){
    int arr[n]={0};
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            for(int j=2*i;j<=n;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if (arr[i]==0){
            cout<<i<<" ";
        }
    }

}


int main(){
    int num;
    cout<<"Enter the end number:";
    cin>>num;
    AllPrimes(num);
}