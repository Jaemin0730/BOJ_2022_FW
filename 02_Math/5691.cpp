#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;


int minFunc(int a, int b, int c)
{
	vector<int> num = { a,b,c };
	sort(num.begin(), num.end());
	return num[0];
}

int main(void)
{
    u 
    int a, b;
	int c;
	cin >> a >> b;

	while (a != 0 && b != 0)
	{
		if (a > b) { 
			int t = a;
			a = b;
			b = t;
		}
		c = minFunc(2 * a - b, (a + b) / 2, 2 * b - a);
		cout << c << "\n";
		cin >> a >> b;
	}
}