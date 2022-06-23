#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    string s;
    cin >> s;
    int alp[26] = {};
    string sol = "";
    // s에 각 알파벳에 해당하는 개수 체크!
    for (int i = 0; i < s.length(); i++) {
        alp[s[i] - 'A']++;
    }
    // 만약에 알파벳의 개수가 홀수인 알파벳이 2개 이상이면 -> cnt로 확인
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        //cout << alp[i] << "\n";
        if (alp[i] % 2 == 1) {
            cnt++;
        }
    }
    // cnt가 2개 이상이면 출력 후 강제 종료
    if (cnt >= 2) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    // 알파벳을 오름차순으로 절반의 개수를 붙인다.
    for (int i = 0; i < 26; i++){
        if (alp[i] > 0) {
            for (int j = 0; j < alp[i] / 2; j++) {
                //cout << i << " " << char(i + 'A') << "!!\n";
                sol += char(i + 'A');
            }
        }
    }
    // 알파벳의 개수가 혼자 홀수인 
    for (int i = 0; i < 26; i++){
        if (alp[i] % 2 == 1) {
            sol += char(i + 'A');
        }
    }
    // 알파벳을 내림차순으로 나머지 절반의 개수를 붙인다.
    for (int i = 25; i >= 0; i--){
        if (alp[i] > 0) {
            for (int j = 0; j < alp[i] / 2; j++) {
                //cout << i << " " << char(i + 'A') << "??\n";
                sol += char(i + 'A');
            }
        }
    }
    cout << sol;
}