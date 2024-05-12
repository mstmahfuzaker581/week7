#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (cnt <= 2)
        {
            cout << 'a';
            cnt++;
        }
        else if (cnt > 2 && cnt <= 4)
        {
            cout << 'b';
            cnt++;
            if (cnt == 5)
                cnt = 1;
        }
    }
    cout << endl;
}