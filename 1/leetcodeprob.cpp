

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Question No. 1 ----->
    // Reverse Integer Question -  (ans = ans * 10 + digit)
    // Prob statement - Given a signed 32 bit integer x, return x with its digits reversed. If reversing x causes
    // the value to go outside the signed 32 bit integer range [-2^31, 2^31 - 1], then return 0.
    int n;
    cin >> n;

    int ans = 0;
    while( n!= 0){
        int digit = n % 10;
        if((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10)){       // checking whether given no. is in the range of 32bit integer
            return 0;
        }
        ans = ans * 10 + digit;         // imp formula
        n = n / 10;
    }

    cout << ans;

    // -------------------------------------------------------------------------------------------------------------------------------------------
    // Question No. 2 ------->
    // Complement of Base 10 Integer
    // Prob Statement - The complement of an integer is the integer you get when you flip all the
    // '0's to '1's and all the '1's to '0's in its binary representation.
    // Given an integer, n, return its complement

    int n;
    int m = n;
    cin >> n;
    int mask = 0;

    // edge case
    if (n == 0)
    {
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans;


    //---------------------------------------------------------------------------------------------------------------------------------------------- 

    // Question No. 3 -- Power of two 
    // Prob. Statement - Given an integer n, return true if it is a power of two.
    // Otherwise return false. An integer n is a power of two, if there exists
    // an integer x such that n == 2^x.

    int ans = 1;
    int n;
    for(int i = 0; i <= 30; i++){
        int ans = pow(2, i);

        if(ans == n){
            return true;
        }
        if(ans < INT32_MAX/2)
            ans = ans * 2;
    }
    return 0;
}