#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
};

int fibDP(int n, vector<int> &f)
{

    // Memoization
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (f[n] != -1)
    {
        return f[n];
    }

    f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
    return f[n];
};

int fibTab(int n)
{
    vector<int> fib(n + 1, 0);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fibTab(i - 1) + fibTab(i - 2);
    }
    return fib[n];
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // vector<int> f(n + 1, -1);

    // cout << fibDP(n, f);

    cout << fibTab(n);

    return 0;
}