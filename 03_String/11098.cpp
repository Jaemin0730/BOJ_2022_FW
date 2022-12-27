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
    int n, p;
	cin >> n;
	while (n--)
	{
		cin >> p;
		vector <pair<int, string>> s(p);
		int ans = 0, i = 0, ex = 0;
		while (p--)
		{
			cin >> s[i].first >> s[i].second;
			if (s[i].first > ex)
			{
				ex = s[i].first;
				ans = i;
			}
			i++;
		}
		cout << s[ans].second << '\n';
	}
}