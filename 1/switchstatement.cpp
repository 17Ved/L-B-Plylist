#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int num = 2;
    char ch = 'a';

    cout << endl;

    // while (1)
    // {
        switch ( ch ) // if the value of num i.e. 2 and the case constant gets matched then that statement will get print.
        {           // on the below cases, case 2: is matching with switch expression i.e. switch (num). so case 2 will get print.
        case 1:     // case (constant)
            cout << " First Statement" << endl;
            break;

        case 2: // case (constant)                     // the values of cases here cannot be in float or string, it must be in either int or char
            cout << " Second Statement" << endl;
            break;

        case 'a':
            switch (num)
            { // we can also write switch case within a switch case it's called nested switch case
            case 2:
                cout << " The value of num is " << num << endl;
                cout << " This is 'a' case" << ch << endl;
                _Exit(0);           // refer to line - 53
            }
            break;

        default: // default case is not mandatory in switch case.
            cout << "Default Case" << endl;
            break;
        }

       
    return 0;
    }

    // while(1){                            // Infinite loop
    //     cout << "This is 1" << endl;
    // }

// }

// continue statement is not valid in switch case.

// _Exit(0); - we used this function on line 32 -- because when we write switch case inside infinite while loop we need to stop it.
// so we use _Exit(0) to ensure, that the infinite loop should be break with exit code 0 
