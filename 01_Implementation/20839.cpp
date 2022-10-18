#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

double a, c, e, s[3];
char getGrade(){
    if (s[0] >= a && s[1] >= c && s[2] >= e) return 'A';
    if (s[0] >= a / 2 && s[1] >= c && s[2] >= e) return 'B';
    if (s[1] >= c && s[2] >= e) return 'C';
    if (s[1] >= c / 2 && s[2] >= e / 2) return 'D';
    return 'E';
}

int main(void)
{
    u;
    cin >> a >> c >> e;
    for(int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    cout << getGrade();
}