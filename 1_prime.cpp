// Check Prime: Determine if a number is prime.
#include<iostream>
using namespace std;

bool prime(int num){
    int fact=1;
    for (int i=2;i<=(num/2);i++){
        if(num%i==0){
            fact++;
        }
        if(fact>1){
            break;
        }
    }
    if (fact>1){
        return false;
    }
    else{
        return true;
    }  

}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    bool check=prime(n);
    if (check==true){
        cout<<n<<" is prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }
    
}