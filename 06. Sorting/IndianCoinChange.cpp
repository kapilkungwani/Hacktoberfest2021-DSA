#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    int x;
    cin >> x;
    int i = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= (x / a[i]) * a[i];
    }
    cout << ans << endl;
    return 0;
}