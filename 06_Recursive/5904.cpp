#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

string st = "moo";

void s (int n, int k, int len) {
    // s(n-1) + mo..... + s(n-1)의 규칙을 가짐!
    int nl = len * 2 + k + 3;
    // 새로운 길이를 ln으로 설정
    if (n <= 3) {
        // 3보다 작은 경우는 그냥 출력!
        cout << st[n - 1];
        exit(0);
    }
    if (nl < n) {
        s(n, k + 1, nl);
        // 새로운 길이가 구하는 n보다 작은 경우에는
        // 1. s(k)에서 k의 숫자를 늘려주고,
        // 2. s(k)의 길이도 새로 구한 nl로 바꿔서
        // 재귀를 돌려서 nl>= n인 경우를 찾게 해준다!!
    }
    else {
        // 새로운 길이가 구하는 n보다는 크다!
        if (n > len && n <= len + k + 3) {
            // s(n-1) + mo..... + s(n-1) 중 moo...부분을 살펴봄
            // n에서 len을 빼면 1부터 시작한 특정 숫자가 나옴
            if (n - len == 1) {
                // 1이면 m!
                cout << "m";
            }
            else {
                // 1 아닌 나머지는 모두 o!
                cout << "o";
            }
            exit(0);
        }
        else {
            // mo..보다 큰 s(n-1)부분인 경우는 s(n-1) + mo.. + s(n-1) 중 앞부분 s(n-1)으로 재귀!
            // s(n-1)부분을 재귀로 볼때, n을 s(n-1)부분으로만 보기에 기본으로 초기화하고 재귀!!!
            s(n - (len + k + 3), 1, 3);
        }
    }
}

int main(void)
{
    u;
    int n;
    cin >> n;
    s(n, 1, 3);
    // s가 n,k,len의 3개의 값을 가짐
    // 1. n   -> 몇번째 숫자인지 확인
    // 2. k   -> s(0), s(1), s(2)등의 괄호 안 숫자
    // 3. len -> s의 길이!
}