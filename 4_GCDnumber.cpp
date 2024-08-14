// Find the greatest common divisor of two numbers

// using Euclidean algorithm
#include<iostream>
using namespace std;

int find_gdc(int n1,int n2){
    int r;
    int a,b;
    if(n1>n2){
            a=n1;
            b=n2;
        }
        else{
            a=n2;
            b=n1;
        }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cout<<"GCD is :"<<a;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    find_gdc(num1,num2);
}


// using vector
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int gcd(vector<int> factors1,vector<int> factors2){
//     int max=1;
//     for(int i=0;i<factors1.size();i++){
//         int x=factors1[i];
//         for(int j=0;j<factors2.size();j++){
//             if(x==factors2[j]){
//                 if(x>max){
//                     max=x;
//                 }
//             }
//         }
//     }
//     cout<<max;

// }
// int find_factors(int num1,int num2){
//     vector<int> factors1;
//     vector<int> factors2;
//     for(int i=1;i<=num1;i++){
//         if(num1%i==0){
//             factors1.push_back(i);
//         }
//     }

//     for(int i=1;i<=num2;i++){
//         if(num2%i==0){
//             factors2.push_back(i);
//         }
//     }
    
//     gcd(factors1,factors2);
// }

// int main(){
//     int num1,num2;
//     cout<<"Enter two numbers:";
//     cin>>num1>>num2;
//     find_factors(num1,num2);
// }