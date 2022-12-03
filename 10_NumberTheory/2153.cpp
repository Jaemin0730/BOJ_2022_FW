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
    string s;
    cin >> s;

    int b;
    int sum = 0;

    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if (isupper(c)) {
            b = int(c)-38;
        }
        else if (islower(c)) {
            b = int(c)-96;
        }
        sum += b;
    }

    int cnt = 0;
    for (int j=1; j<=sum; j++){
        if(sum % j == 0){
            cnt++;
        }
    }

    if (cnt == 2 || sum == 1) {
        cout<<"It is a prime word.";
    }
    else {
        cout<<"It is not a prime word.";
    }
}