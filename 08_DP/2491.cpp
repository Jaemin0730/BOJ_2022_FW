#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[100000] ={};

int main(void)
{
    u 
    int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int maxV = 1;;
	int len = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) len++;
		else len = 1;
		maxV = max(maxV, len);
	}

	len = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) len++;
		else len = 1;
		maxV = max(maxV, len);
	}
	cout << maxV;
}