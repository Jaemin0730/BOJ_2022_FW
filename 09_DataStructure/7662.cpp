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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> ms;  
        // -> 노드 기반의 연관 컨테이너,균형 이진트리로 구성,중복 key 가능,오름차순!
        for (int i = 0; i < n; i++) {
            char s;
            int k;
            cin >> s >> k;
            if (s == 'I') {
                ms.insert(k);
            }
            else {
                if (!ms.empty()) {
                    if (k == -1) {  // 최솟값 삭제
                        ms.erase(ms.begin());
                    }
                    else {          // 최댓값 삭제
                        auto i = ms.end();  // = 마지막 인덱스 +1
                        i--;    // -> 마지막 인덱스 찾기 위해 -1
                        ms.erase(i);
                    }
                }
            }
        }
        if (!ms.empty()) {
            auto i = ms.end();  // = 마지막 인덱스 +1
            i--;                // -> 마지막 인덱스 찾기 위해 -1
            cout << *i << ' ' << *ms.begin() << "\n";
        }
        else {
            cout << "EMPTY\n";
        }
    }
}