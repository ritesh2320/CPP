#include <iostream>
#include <vector>
using namespace std;

int countWaysRec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return countWaysRec(n - 1) + countWaysRec(n - 2);
}

int countWaysMemo(int n, vector<int> &count)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (count[n] != -1)
    {
        return count[n];
    }

    count[n] = countWaysMemo(n - 1, count) + countWaysMemo(n - 2, count);
    return count[n];
}

int countWaysTab(int n)
{
    vector<int> count(n + 1, 0);
    count[0] = 1;
    count[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        count[i] = count[i - 1] + count[i - 2];
    }
    return count[n];
}

// variation

int CountWaysvariation(int n)
{ // 1,2& 3 jumps are allowed
    vector<int> count(n + 1, 0);
    count[0] = 1;
    count[1] = 1;
    count[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        count[i] = count[i - 1] + count[i - 2] + count[i - 3];
    }
    return count[n];
}

int main()
{
    int n;
    n = 6;
    vector<int> count(n + 1, -1);
    cout << countWaysRec(n) << endl;
    cout << countWaysMemo(n, count) << endl;
    cout << countWaysTab(n) << endl;
    cout << CountWaysvariation(n) << endl;
    return 0;
}