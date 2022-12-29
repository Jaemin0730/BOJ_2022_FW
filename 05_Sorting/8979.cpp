#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int N, K;
int gold[1001];
int silver[1001];
int bronze[1001];
int sol = 0;

int main(void)
{
    u 
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        cin >> gold[x] >> silver[x] >> bronze[x];
    }

    for (int i = 1; i <= N; i++) {
        if (gold[i] > gold[K]) {
            sol++;
        }
        else if (gold[i] == gold[K]) {
            if (silver[i] > silver[K]) {
                sol++;
            }
            else if (silver[i] == silver[K]) {
                if (bronze[i] > bronze[K]) {
                    sol++;
                }
            }
        }
    }
    cout << sol + 1;
}