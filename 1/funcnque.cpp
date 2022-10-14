#include <iostream>

using namespace std;

// que 1 - program to print Arithmetic Progression of nth number
int ap(int n)
{
    int arith = (3 * n + 7);
}

int main()
{
    int n;
    cin >> n;
    cout << ap(n) << endl;

    return 0;
}

// que 2 - program to print fibonacci series

int fibona(int n)
{
    int t = 0;
    int s = 1;

    cout << t << " " << s << " ";
    for (int i = 1; i <= n; i++)
    {
        int nxtno = t + s;
        cout << nxtno << " ";
        t = s;
        s = nxtno;
    }
}

int main()
{

    int n;
    cin >> n;
    fibona(n);
}

// que 3 - random question

int update(int a)
{
    a = a / 2;
    // cout << a << endl;
    return a;
}

int main()
{
    int b = 10;
    update(b);
    cout << b;
}

// que 4 --- random question

int update(int a)
{
    int b = a - 5;
    return b;
}
int main()
{
    int a = 15;
    update(a);
    cout << a << endl;
}

// ques 5 --- random question

int update(int a)
{
    int ans = a * a;
    return ans;
}
int main()
{
    int a = 14;
    a = update(a);
    cout << a << endl;
}