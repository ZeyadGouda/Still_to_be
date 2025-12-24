#include <bits/stdc++.h>
using namespace std;

void FIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

using ll = long long;

void testcases()
{
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
}
int main()
{
    FIO();
    int tests;
    cin >> tests;
    while (tests--)
        testcases();
    return 0;
}
// git config --global user.email "you@example.com"
// git config --global user.name "Your Name"