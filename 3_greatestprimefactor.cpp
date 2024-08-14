// To get the larget prime factor of a number

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number:";
//     cin>>num;
//     int max=1;
//     int p=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             int fact=0;
//             for(int j=1;j<=i;j++){
//                 if(i%j==0){
//                     fact++;
//                 }
//             }
//             if(fact==2){
//                 p=i;
//                 // cout<<i<<endl;
//             }
//         if(p>max){
//             max=p;
//          }
//         }
//     }
//     cout<<"Max prime factor:"<<max;
// }

// USING VECTOR
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int check_prime(int n)
{
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

int find_factors(int num)
{
    vector<int> factors;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
          if(check_prime(i)){
            factors.push_back(i);
          }
        }
    }
    return (*max_element(factors.begin(),factors.end()));
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    find_factors(num);
    int max = 1;
    int p = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            int fact = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    fact++;
                }
            }
            if (fact == 2)
            {
                p = i;
                // cout<<i<<endl;
            }
            if (p > max)
            {
                max = p;
            }
        }
    }
    cout << "Max prime factor:" << max;
}
