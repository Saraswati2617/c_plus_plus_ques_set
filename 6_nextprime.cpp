// Next Prime Number: Given a number, find the next prime number greater than it.
#include<iostream>
using namespace std;

bool is_prime(int num){
    int fact = 0;
    for (int j = 1; j <= num; j++)
    {
        if (num % j == 0)
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
    int n;
    cout<<"enter your number:";
    cin>>n;
    int i=n+1;
    while(true){
        if(is_prime(i)){
            cout<<"prime number after "<<n<<" is "<<i;
            break;
        }
        i++;
    }
}