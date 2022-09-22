#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t;

int main(void)
{
    u;
    cin >> t;
	cout << "Gnomes:\n";
	while(t--){
		vector <int> beard(3);
		for(int i = 0; i < 3; i++) {
            cin >> beard[i];
        }
		if((beard[1] - beard[0]) * (beard[2] - beard[1]) > 0) {
            cout << "Ordered\n";
        }
		else {
            cout << "Unordered\n";
        }
	}
}