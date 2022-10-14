#include <iostream>

using namespace std;

// Power of a number -------------------------------------------------
int power(int x, int y)
{

    int ans = 1;

    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << "Answer is " << answer<< endl;

    return 0;
}

// no is even or odd  ---------------------------------------------
bool isEven(int a){

    if(a&1){
        return 0;
    }
    return 1;
}

int main(){

    int b;
    cout << " Enter a no" << b << endl;
    cin >> b;
    if (isEven(b)){
        cout << " No is even" << endl;
    }
    else{
        cout << " No is odd" << endl;
    }
}

// nCr of a number ------------------------------------

int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int ans = num / denom;
    return ans;

}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << " Asnwer is " << nCr(n, r) << endl;

}

// Print counting from n number --------------------------

void printcount(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printcount(n);
// }

// prime or not ------------------------------------------

// 1 - prime no
// 0 - not a prime no

bool isPrime(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}
int main()
{

    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << " No is prime " << endl;
    }
    else
    {
        cout << " No is not prime" << endl;
    }
    isPrime(n);
}