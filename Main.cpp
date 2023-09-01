#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
template <typename S>
void show_v(vector<S> &vect)
{
    for (auto i : vect)
    {
        cout << i << " ";
    }
}
template <typename S>
void show_l(list<S> &l)
{
    for (auto i : l)
    {
        cout << i << " ";
    }
}

int main()
{
    IO();
    ll n, m, a;
    cin >> n >> m >> a;
    int width = (n % a == 0 ? 0 : 1);
    int height = (m % a == 0 ? 0 : 1);

    cout << ((n / a) + width) * ((m / a) + height);
    return 0;
}