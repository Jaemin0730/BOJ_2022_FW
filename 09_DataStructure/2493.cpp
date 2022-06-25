#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

int main(void)
{
    u;
    int n;
    cin >> n;
    // n개의 탑들 넣어줄 stack!
    stack<pair<int, int>> st;
    for (int i = 1; i <= n; i++) {
        int num;
        // 탑 높이를 num으로 받아줌
        cin >> num;
        while (!st.empty()) {
            // 자기보다 더 높은 탑이 있을때까지 pop해주고,
            // 더 높은 탑이 있으면 그 탑의 번호를 출력해준다!!
            if (st.top().first > num) {
                cout << st.top().second << " ";
                break;
            }
            else {
                st.pop();
            }
        }
        // 스택이 비어있는 경우
        if (st.empty()) {
            cout << "0 ";
        }
        // 마지막에는 해당 탑의 높이를 stack에 넣어준다!
        st.push(make_pair(num, i));
    }
}