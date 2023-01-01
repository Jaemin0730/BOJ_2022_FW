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
    int t;
	string p;
	vector<string> pw, pr;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> p;
		pw.push_back(p);
		reverse(p.begin(), p.end());
		pr.push_back(p);
	}

	for (int i = 0; i < pw.size(); i++) {
		for (int j = 0; j < pr.size(); j++) {
			if (pw[i] == pr[j]) {
				cout << pw[i].size() << " ";
				cout << pw[i][pw[i].size() / 2];
				return 0;
			}
		}
	}
}