#include<iostream>

using namespace std;

int main()
{
    // int a = 9;          // global
    // cout << a << endl;

    // if(true){
    //     int a = 3;          // local
    //     cout << a << endl;
    // }
    // cout << a << endl;      // global value will get print
    // return 0;
   
   //-----------------------------------------------------------------------
  
   // Subtract the product and sum of digits of integer
    int n;
    cin >> n;
    int product = 1;
    int sum = 0;

    while(n != 0){
        int rem = n%10;
        product = product * rem;
        sum = sum + rem;

        n = n / 10;
    }

    int answer = product - sum;
    cout << answer;
    return answer;

    // -----------------------------------------------------
    // check Number of 1 bits present in binary number

    int k;
    cin >> k;
    int count = 0;
    while(k != 0){
        // checking last bit
        if(k&1){
            count++;
        }
        k = k >> 1;

    }
    return count;
}
