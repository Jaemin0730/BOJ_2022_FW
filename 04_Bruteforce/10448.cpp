#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int tn[1001];
int t;

bool ck(int num){
    for(int i = 1; i <=50; i++)
        for(int j = 1; j <=50; j++)
            for(int k = 1; k <= 50; k++)
                if(tn[i] + tn[j] + tn[k] == num)
                    return true;            
    return false;
}

int main(void)
{
    u 
    for (int i = 1; i <= 1000; i++) {
        tn[i] = tn[i-1] + i;
    }
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ck(n) <<'\n';
    }
}