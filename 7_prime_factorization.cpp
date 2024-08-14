
// prime factorization
#include<iostream>
using namespace std;

bool is_prime(int n){
        int fact = 0;
    for (int j = 1; j <= n; j++)
    {
        if (n % j == 0)
        {
            fact++;
        }
    }
    if (fact == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=2;i<=(num/2);i++){
        if(num%i==0){
            if(is_prime(i)){
                while(num%i==0){
                    cout<<i<<" ";
                    num=num/i;
                }
            }
        }
    }
    if(num>1){
        cout<<num;
    }
}