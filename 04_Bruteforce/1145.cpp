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
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 1;; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
            if (i % a[j] == 0)
            {
                cnt++;
                if (cnt >= 3)
                {
                    cout << i;
                    return 0;
                }
            }
    }
}