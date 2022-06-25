#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

int main(void)
{
    u;
    int t;
    cin >> t;
    while (t--) {
        deque<int> dq;
        // 이 문제의 핵심인 deque를 dq로 선언해주기!
        string fuc; // 함수
        cin >> fuc;
        int num;    // 배열 개수
        cin >> num;
        string arr; // 배열의 원소들
        cin >> arr;
        // ----------------------------------------------
        // -> 배열의 원소들을 dq에 넣는 과정!
        string s = "";
        for (int i = 0; i < arr.length(); i++) {
            if (arr[i] == '[') {
                continue;
            }
            else if ('0' <= arr[i] && arr[i] <= '9') {
                s += arr[i];
            }
            else if (arr[i] == ',' || arr[i] == ']') {
                if (!s.empty()) {
                    dq.pb(stoi(s));
                    s = "";
                }
            }
        }
        // ----------------------------------------------
        // -> 함수가 R , D를 적용하기! (feat.Deque)
        // 1. R -> 원소가 뒤집히지 않으면 true
        // 2. D -> error이면 true
        bool rr = true;
        bool dd = false;
        // fuc의 R과 D를 dq에 적용시켜줌!
        for (int i = 0; i < fuc.length(); i++) {
            if (fuc[i] == 'R') {
                rr = !rr;
            }
            else {
                if (dq.empty()) {
                    dd = true;
                }
                else {
                    if (rr) {
                        dq.pop_front();
                    }  
                    else {
                        dq.pop_back();
                    }
                }
            }
        }
        // ----------------------------------------------
        // -> dq를 R을 기준으로 출력해주자!
        if (dd) {
            cout << "error\n";
            continue;
        }
        if (!rr) {
            // R로 뒤집힘 -> 반대로 출력
            cout << "[";
            while (!dq.empty()) {
                cout << dq.back();
                dq.pop_back();
                if (!dq.empty()) {
                    cout << ",";
                }
            }
            cout << "]\n";
        }
        else {
            // R로 뒤집히지 않음 -> 그대로 출력
            cout << "[";
            while (!dq.empty()) {
                cout << dq.front();
                dq.pop_front();
                if (!dq.empty()) {
                    cout << ",";
                }
            }
            cout << "]\n";
        }
    }
}