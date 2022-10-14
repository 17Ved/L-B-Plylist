#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 6;

    cout << " a & b - " << (a & b) << endl;
    cout << " a | b - " << (a | b) << endl;
    cout << "  ~a  - " << ~a << endl;
    cout << " a ^ b - " << (a ^ b) << endl;

    // left shift and right shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // pre post increment and decrement
    int i = 8;

    cout << (i++) << endl;
    // 8, i = 9
    cout << (++i) << endl;
    // 10, i = 10
    cout << (i--) << endl;
    // 10, i = 9
    cout << (--i) << endl;
    // 8, i = 8

    // 5 Questions -
    // 1st question - ------------------------------------------
    int c = 10, d = 1;
    if (++c)
    {
        cout << d++;
    }
    else
    {
        cout << ++d; // output - 1;
    }

    // 2nd question -------------------------------------------

    int e = 1;
    int f = 2;

    if (e-- > 0 && ++f > 2)
    {
        cout << " Stage 1 - Inside If";
    }
    else
    {
        cout << "Stage 2 - Inside Else";
    }

    cout << e << " " << f << endl; // output - Stage 1 - Inside If 0 3

    // 3rd question - --------------------------------------------

    int g = 1;
    int h = 2;

    if (g-- > 0 || ++h > 2)
    {
        cout << "Stage 1- Inside If" << endl;
    }
    else
    {
        cout << "Stage 2- Inside Else" << endl;
    }
    cout << g << " " << h << endl; // output - Stage 1 - Inside If 0 2

    // 4th question - -------------------------------------------------

    int number = 3;
    cout << (25 * (++number)) << endl; // output - 100  4
    cout << number << endl;

    // 5th question - --------------------------------------------------

    int j = 1;
    int k = j++;
    int l = ++j;

    cout << k << endl;
    cout << l << endl; // output - 1  3

    // -----------------------------------------------------------------------------------------------------------------

    // Basic example of for loop

    int m;
    cout << " Enter the value of m " << endl;
    cin >> m;
    cout << " Printing count from 1 to m" << endl;
    for (int n = 1; n <= m; n++)
    {
        cout << n << endl;
    }

    // you can also write for loop like below

    int o = 1; // initialization
    for (;;)
    { // it is not necessary to write initialization, condition and incrementation after for().
        if (o <= m)
        { // condition
            cout << o << endl;
        }
        else
        {
            break; // break statement is necessary, otherwise it'll go in endless loop and will give u garbage values
        }
        o++; // incrementing
    }

    // we can also include multiple variables in for loop like below -
    // including 3 variables inside for loop
    for (int x = 0, y = 1, z = 3; x >= 0 && y >= 1 && z >= 3; x--, y++, z++)
    {
        cout << x << " " << y << " " << z << endl;
    }

    // print sum of n numbers
    int q;
    cin >> q;

    int sum = 0;
    for (int i = 1; i <= q; i++)
    {
        // sum = sum + i;
        sum += i;
    }
    cout << sum << endl;

    // print fibonacci series

    int n = 10;
    int t = 0;
    int s = 1;

    cout << t << " " << s << " ";
    for (int i = 1; i <= n; i++)
    {
        int nxtno = t + s;
        cout << nxtno << " " << endl;
        t = s;
        s = nxtno;
    }

    // prime or not

    int u;
    cout << " Enter the value for 'u' " << endl;
    cin >> u;

    bool isPrime = 1;
    for(int i = 2; i < u; i++){
        if(u % i == 0){
            // cout << " This no is not prime" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0){
        cout << " The no is not Prime" << endl;
    }
    else{
        cout << " The no is Prime" << endl;
    }

// ---------------------------------------------------------------------------------
    // continue - statement 
    for(int i = 1; i < 5; i++){
        cout << " Hi" << endl;
        cout << " Hey" << endl;
        continue;
        cout << " Please reply" << endl;    // please reply statement will not get print
    }

// ----------------------------------------------------------------
// Questions ---
// Que 1 --

    for(int i = 0; i<=5; i++){
        cout << i << " " << endl;
        i++;
    }

// ------------------------------------------------------------------
// Que 2----   
    // for(int i = 0; i<=5; i--){
    //     cout << i << " " << endl;
    //     i++;
    // }

// -------------------------------------------------------------------
// Que 3 -------

    for(int i = 0; i<= 15; i+=2){
        cout << i << " ";

        if(i&1){
            continue;
        }
        i++;
    }

// -------------------------------------------------------------------
// Que 4------
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << i << " " << endl;
        }
    }

// -------------------------------------------------------------------
// Que 5-

    for(int i = 0; i < 5; i++){
        for(int j = i; j <= 5; j++){
            if(i+j == 10){
                break;
            }
            cout << i << " " << j << endl;
        }
    }
    return 0;
}