#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int sol = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = i; j <= 500; j++)
        {
            if (j*j == i * i + n) sol++;
        }
    }
    cout << sol << '\n';
}