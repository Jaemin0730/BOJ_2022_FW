#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    string s;
    cin >> s;
    // 부분집합을 모아줄 set 만들기
    // set은 이진트리 + 중복X 특징을 가짐!!
    set<string> set;
    string st = "";
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            // 부분집합을 set에 넣는 과정!
            // st에다가 임시 저장해서 넣어준 후 i가 바뀔때 초기화해주자
            st += s[j];
            // s[j]를 누적해서 넣어주면서 가능한 부분집합을 다 넣어줄 수 있음!
            set.insert(st);
        }
        // 초기화
        st = "";
    }
    cout << set.size();
}