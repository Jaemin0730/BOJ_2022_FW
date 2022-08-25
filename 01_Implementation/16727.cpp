#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u;
    int p1, s1, p2, s2;
    cin >> p1 >> s1 >> s2 >> p2;
    int diff = (p1 + p2) - (s1 + s2);
    if (diff > 0) {
        cout << "Persepolis\n";
    }
    else if (diff < 0) {
        cout << "Esteghlal\n";
    }
    else {
        if (s1 > p2) {
            cout << "Esteghlal\n";
        }
        else if (s1 < p2) {
            cout << "Persepolis\n";
        }
        else {
            cout << "Penalty\n";
        }
    }
}