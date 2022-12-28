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
    int JOI = 0, IOI = 0;
	string s;
    cin >> s;
	int sl = s.length();
	for (int i = 0; i < sl - 2; i++) {
		if (s.substr(i, 3) == "JOI") JOI++;
		else if (s.substr(i, 3) == "IOI") IOI++;
	}

	cout << JOI << '\n' << IOI;
}