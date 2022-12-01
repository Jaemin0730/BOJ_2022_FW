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
    int n;
    cin >> n;

    vector <int> v;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        v.push_back(c);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i = 0; i < v.size() - 1; i++){
        sum += v[i];
    }
    cout << sum;
}