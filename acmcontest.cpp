#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll M = 1e9 + 7;
void FIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void testcases()
{
    int n;
    int r1, p1, s1;
    string play;
    cin >> n >> r1 >> p1 >> s1 >> play;
    ll points = 0;
    string ans;
    for (int i = 0; i < play.size(); i++)
    {
        if (play[i] == 'R')
        {
            if (p1 > 0)
            {
                ans += 'P';
                points++;
                p1--;
            }
            else if (r1 > 0)
            {
                r1--;
                ans += 'R';
            }
            else if (s1 > 0)
            {
                s1--;
                ans += 'S';
            }
        }
        if (play[i] == 'P')
        {
            if (s1 > 0)
            {
                points++;
                s1--;
                ans += 'S';
            }
            else if (p1 > 0)
            {
                ans += 'P';
                p1--;
            }
            else if (r1 > 0)
            {
                r1--;
                ans += 'R';
            }
        }
        if (play[i] == 'S')
        {
            if (r1 > 0)
            {
                points++;
                r1--;
                ans += 'R';
            }
            else if (s1 > 0)
            {
                s1--;
                ans += 'S';
            }
            else if (p1 > 0)
            {
                p1--;
                ans += 'P';
            }
        }
    }
    if ((points >= (n + 1) / 2))
        cout << "YES\n"
             << ans << '\n';
    else
        cout << "NO\n";
}

int main()
{
    FIO();
    int tests = 1;
    cin >> tests;
    while (tests--)
        testcases();
    return 0;
}