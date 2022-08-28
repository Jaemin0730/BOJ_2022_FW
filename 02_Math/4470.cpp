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
    int n;
	char str[1000];
	char arr[1000];
	scanf("%d", &n);
	fgets(arr, sizeof(arr), stdin);
	for (int i = 1; i <= n; i++) {
		fgets(str, sizeof(str), stdin);
		printf("%d. ", i);
		printf("%s", str);
	}
}