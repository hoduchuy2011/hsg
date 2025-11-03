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

void A()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S;
    int K;
    
    cin >> S >> K;
    
    if (K == 0)
    {
        int B = -1;
        for (int D = (int)S.length() - 1; D >= 0; D--)
        {
            if (S[D] == '5')
            {
                B = D;
                break;
            }
        }
        
        cout << S.substr(0, B + 1) << "\n";
    }
    else
    { 
        ll E = 0;
        for (char C : S)
        {
            E += C - '0';
        }
        
        int F = E % 3;
        
        if (F == 0)
        {
            cout << S << "\n";
            return;
        }
        
        vector<int> G;
        vector<int> H;
        
        for (int D = 0; D < (int)S.length(); D++)
        {
            if ((S[D] - '0') % 3 == 1)
            {
                G.push_back(D);
            }
            else if ((S[D] - '0') % 3 == 2)
            {
                H.push_back(D);
            }
        }
        
        vector<string> I;
        
        auto J = [&](const vector<int>& K) -> string
        {
            string L = "";
            vector<bool> M((int)S.length(), false);
            for (int N : K)
            {
                M[N] = true;
            }
            for (int N = 0; N < (int)S.length(); N++)
            {
                if (!M[N])
                {
                    L += S[N];
                }
            }
            return L;
        };
        
        if (F == 1)
        {
            for (int D : G)
            {
                I.push_back(J({D}));
            }
        }
        else
        { 
            for (int D : H)
            {
                I.push_back(J({D}));
            }
        }
        
        if (I.empty())
        {
            if (F == 1)
            {
                if (H.size() >= 2)
                {
                    for (size_t P = 0; P < H.size(); P++)
                    {
                        for (size_t Q = P + 1; Q < H.size(); Q++)
                        {
                            I.push_back(J({H[P], H[Q]}));
                        }
                    }
                }
            }
            else
            { 
                if (G.size() >= 2)
                {
                    for (size_t P = 0; P < G.size(); P++)
                    {
                        for (size_t Q = P + 1; Q < G.size(); Q++)
                        {
                            I.push_back(J({G[P], G[Q]}));
                        }
                    }
                }
            }
        }
        
        string R = "";
        for (const string& Q : I)
        {
            if (Q.empty()) continue;
            if (Q.length() > R.length())
            {
                R = Q;
            }
            else if (Q.length() == R.length())
            {
                if (Q > R)
                {
                    R = Q;
                }
            }
        }
        
        cout << R << "\n";
    }
}

int main()
{
    open("");
    
    int O;
    cin >> O;
    
    while (O--)
    {
        A();
    }
    
    return 0;
}