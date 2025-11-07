#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

void open(string s)
{
	if(fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int m, n;
ll a[505][505];
bool v[505][505];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

ll bfs(int r, int c) {
    ll s = 0;
    queue<pair<int, int>> q;
    q.push({r, c});
    v[r][c] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int r = p.first;
        int c = p.second;

        s += (r == 0) ? a[r][c] : max(0LL, a[r][c] - a[r - 1][c]);
        s += (r == m - 1) ? a[r][c] : max(0LL, a[r][c] - a[r + 1][c]);
        s += (c == 0) ? a[r][c] : max(0LL, a[r][c] - a[r][c - 1]);
        s += (c == n - 1) ? a[r][c] : max(0LL, a[r][c] - a[r][c + 1]);

        for (int i = 0; i < 4; i++) {
            int x = r + dx[i];
            int y = c + dy[i];

            if (x >= 0 && x < m && y >= 0 && y < n && a[x][y] > 0 && !v[x][y]) {
                v[x][y] = true;
                q.push({x, y});
            }
        }
    }
    return s;
}

int main() {
	open("");

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            v[i][j] = false;
        }
    }

    ll k = 0;
    ll t = 0;
    ll l = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0 && !v[i][j]) {
                k++;
                ll c = bfs(i, j);
                t += c;
                l = max(l, c);
            }
        }
    }

    cout << k << "\n";
    cout << t << "\n";
    cout << l << "\n";

    return 0;
}