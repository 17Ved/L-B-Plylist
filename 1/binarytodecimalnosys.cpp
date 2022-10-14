#include <iostream>
#include <math.h>
#define size 6
using namespace std;

// The pow() function returns the result of the first argument raised to the power of the second argument.
// This function is defined in the cmath header file.

int main()
{

    // Program to convert from decimal to binary
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Binary format is" << ans << endl;

// -----------------------------------------------------------
    // for 1s complement

    int i;
    
    char binary[size + 1], comp[size + 1];

    cout << " Enter a binary number" << endl;
    cin >> binary;

    for (int i = 0; i < size; i++)
    {
        if (binary[i] == '1'){
            comp[i] = '0';
        }
        else 
        if( binary[i] == '0'){
            comp[i] = '1';
        }
        else{
            cout << endl;
            
        }

    }
        cout << " The original binary number was " << binary << endl;
        cout << " The complemented binary number is" << comp << endl;
    
// --------------------------------------------------------------------------

// binary to decimal 
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int digit = n % 10;

        if( digit == 1){
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;

    }
    cout << ans << endl;

    return 0;
}


// Important point to be noted-----
// int digit = n % 10; and n = n / 10;  -- digit level approach to convert from decimal to binary or binary to decimal
// int bit = n & 1; and n = n >> 1;  -- bit level approach to convert from decimal to binary or binary to decimal