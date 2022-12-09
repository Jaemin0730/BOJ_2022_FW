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
    int mmax = 0, n, m, cnt = 0;
    stack<int> s;

    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>m; 
        s.push(m);
    }
    while (s.size()) {
        if (mmax < s.top()) {
            mmax = s.top();
            cnt++;
        }
        s.pop();
    }  
    cout<<cnt;
}