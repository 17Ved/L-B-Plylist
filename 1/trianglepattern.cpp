// Triangle patterns questions -- 
// This file includes all possible traingle patterns 

#include <iostream>

using namespace std;

int main()
{

int n;
    cin >> n;

    int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout<<"*";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;

    // }

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;

// -------------------------------------------------------------------

 // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n) // for columns
    // {
    //     int j = 1; // for rows
    //     while (j <= n)
    //     {
    //         // cout << j;
    //         cout << n - j + 1;      // for do the same pattern in reverse order
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;


// ----------------------------------------------------------------
    int n;
    cin>>n;

    int row = 1;
    while(row <= n)
    {
        int col = 1;                             // *
        while(col <= row){                       // * *
            // cout<<row;                        // * * *
            cout<<" * ";                         // * * * *
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    //--------------------------------------------------
    int n;
    cin>>n;

    int row = 1;
    int count = 1;      // for counting numbers
    while(row <= n)                                  // 1
    {                                                // 2 3
        int col = 1;                                 // 4 5 6
        while(col <= row){                           // 7 8 9 10
            // cout<<row;
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    //------------------------------------------------------
    int n;
    cin>>n;

    int row = 1;
    while(row <= n)
    {                                           // 1
        int col = 1;                            // 2 3
        int value = row;                        // 3 4 5
        while(col <= row){                      // 4 5 6 7

           cout<<value;
           value = value + 1;
           col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    // ------------------------------------------------------------------
    //    cout << i - j + 1;            // for reverse order pattern in triangle

    int n;
    cin>>n;

    int row = 1;                // i
    while(row <= n)
    {
        int col = 1;            // j
        while (col <= row)
        {
            cout << row - col + 1<<" ";         // 1
            col = col + 1;                      // 2 1
        }                                       // 3 2 1
        cout<<endl;                             // 4 3 2 1
        row = row + 1;                          // 5 4 3 2 1
    }

    // --------------------------------------------------------------------------

    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row - 1;                // A A A A
            cout<< ch;                              // B B B B
            col = col + 1;                          // C C C C
        }                                           // D D D D
        cout<<endl;
        row = row + 1;

    }

    // -------------------------------------------------------------

    // char ch = 'A' + j - 1;

    int n;
    cin>>n;

    int row = 1;        // i
    while(row <= n){
        int col = 1;        // j
        while(col <= n){
            char ch = 'A' + col - 1;             // A A A
            cout<<ch;                            // B B B
            col = col + 1;                       // C C C
        }
        cout<<endl;
        row = row + 1;
    }

    // -------------------------------------------------------------

    int n;
    cin>>n;

    int row = 1;
    char count = 'A';
    while(row <= n){
        int col = 1;                            // A B C D
        while (col <= n)                        // E F G H
        {                                       // I J K L
            cout<<count;                        // M N O P
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;

    }

    // ----------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {                                                       // A B C D
           char ch = 'A' + row + col - 2;                       // B C D E
           cout<<ch;                                            // C D E F
            col = col + 1;                                      // D E F G
        }
        cout << endl;
        row = row + 1;
    }

    // --------------------------------------------------------------------------------
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            // cout<<'A' + row - 1;     // if u write directly like this, then it'll print int values
            char ch = 'A' + row - 1;    // so use typecasting here
            cout<<ch;
            col = col + 1;                      // A
                                                // B B
        }                                       // C C C
        cout<<endl;                             // D D D D
        row = row + 1;
    }

    // ------------------------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    char count = 'A';
    while (row <= n)
    {
        int col = 1;

        while (col <= row)                   // A
        {                                    // B C
            cout << count;                   // D E F
            count = count + 1;               // G H I J
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    //---------------------------------------------------------------------------------------

     int n;
     cin>>n;

     int row = 1;
     while(row <= n){
        int col = 1;

        while(col <= row){                          // A
            char ch = 'A' + row + col - 2;          // B C
            cout<<ch;                               // C D E
            col = col + 1;                          // D E F G

        }
        cout<<endl;
        row = row + 1;
     }

    // -----------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)                      // D
        {                                       // C D
            cout << start;                      // B C D
            start = start + 1                   // A B C D
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    // ----------------------------------------------------------------------

    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1;
        char start = 'A' + row + col - 2;
        while(col <= n){                         // A B C
            cout<<start;                         // B C D
            start = start + 1;                   // C D E
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    //-------------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        // Print spaces first
        int space = n - row;
        while(space){
            cout <<" ";
            space = space - 1;
        }

        // Print Stars now                      //     *
        int col = 1;                            //    **
        while (col <= row){                     //   ***
            cout<<"*";                          //  ****
            col = col + 1;                      // *****
        }
        cout<<endl;
        row = row + 1;
    }

    //-----------------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;                                // * * * *
        int stars = n - row + 1;                    // * * *
        while(stars){                               // * *
            cout<<"*";                              // *
            stars = stars - 1;
        }

        while (col <= row){
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    //-------------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces = spaces - 1;
        }
        int col = 1;                                //       1
        while (col <= row)                          //     2 2
        {                                           //   3 3 3
            cout << row;                            // 4 4 4 4
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    //-----------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while(row <= n){
        int spaces = n - row;
        while(spaces){
            cout<<"  ";
            spaces = spaces - 1;
        }

        int col = 1;                           //     1
        while(col <= row){                     //   2 3
            cout<<count<<" ";                  // 4 5 6
            count = count + 1;                //7 8 9 10
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;

    }
    //--------------------------------------------------------------------------

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        // printing spaces (1st triangle)
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces = spaces - 1;
        }

        int col = 1;                           //       1
        // print 2nd triangle                  //     1 2 1
        while(col <= row){                     //   1 2 3 2 1
            cout<<col;                         // 1 2 3 4 3 2 1
            col = col + 1;
        }

        // print 3rd triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }

    //------------------------------------------------------------------------------

// code for following expected pattern -
/*
4321*4321
321***321
21*****21
1*******1
*/
    int n;
    cin >> n;

    int row = 1;
    // int count = 1;
    while (row <= n)
    {
        
        int num = n - row + 1;
        while (num)
        {
            cout << num;
            num = num - 1;
        }

        int col = 1;                                 
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }

        int start = row - 1;
        while (start)
        {
            cout << "*";
            start = start - 1;
        }

        int end = n - row + 1;
        while (end)
        {
            cout << end;
            end = end - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}
