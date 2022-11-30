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
    int N, K;
    int a[1000];
    cin >> N >> K;
	for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
	sort(a, a + N);
	cout << a[N - K];
}