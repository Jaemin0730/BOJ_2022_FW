#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int length, h, v, biggestVolume, width[2], height[2];

int main(void)
{
    u;
    cin >> length >> h >> v;
    width[0] = v, width[1] = length - v;
    height[0] = h, height[1] = length - h;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            biggestVolume = max(biggestVolume ,width[i] * height[j] * 4);
        }
    }
    cout << biggestVolume;
}