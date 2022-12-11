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
    char a[101],b[101];
	bool check = 0;
	char s[10] = {'C','A','M','B','R','I','D','G','E'};
	cin >> a;
	int k = 0;
	for (int i=0; i<strlen(a); i++) {
		check = false;
		for (int j=0;j<9;j++) {
			if (s[j] == a[i]){
				check = true;
			}
		}
		if (!check) {
			b[k] = a[i];
			k++;
		}
	}
	cout << b;
}