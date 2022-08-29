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
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    bool result = (wc - ws) >= 2 && (hc - hs) >= 2;
    cout << result << "\n";
}