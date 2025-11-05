#include <bits/stdc++.h>
using namespace std;

void open(string s)
{
    if (fopen((s + ".INP").c_str(), "r"))
    {
        freopen((s + ".INP").c_str(), "r", stdin);
        freopen((s + ".OUT").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    open("ARN");
    string s, c;
    cin >> s >> c;
    int res = 0;
    size_t pos = 0;
    while (true)
    {
        pos = s.find(c, pos);
        if (pos == string::npos)
            break;
        res++;
        pos += c.size();
    }

    cout << res;
    return 0;
}
