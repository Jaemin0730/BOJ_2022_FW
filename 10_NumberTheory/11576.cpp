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
    int a, b, m;
	cin >> a >> b;
	cin >> m;
	int d = 0;
	while (m--) {
		int num;
		cin >> num;
		d += num*pow(a, m);
	}
	stack<int> st;
	int div = d;
	while (div) {
		st.push(div % b);
		div /= b;		
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}