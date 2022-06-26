#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pb push_back

char Node[26][2];    // 트리에 루트, 좌우 자식 노드를 저장하기!
void preorder (char x) {
    if (x == '.') {
        return;
    }
    cout << x;
    preorder(Node[x][0]);
    preorder(Node[x][1]);
}
void inorder (char x) {
    if (x == '.') {
        return;
    }
    inorder(Node[x][0]);
    cout << x;
    inorder(Node[x][1]);
}
void postorder (char x) {
    if (x == '.') {
        return;
    }
    postorder(Node[x][0]);
    postorder(Node[x][1]);
    cout << x;
}

int main(void)
{
    u;
    int n;
    cin >> n;
    // 노드 정리하는게 좀 까다로웠음 ㅠㅠ
    for (int i = 0; i < n; i++) {
        char ro, l, r;
        cin >> ro >> l >> r;
        Node[ro][0] = l;
        Node[ro][1] = r;
    }
    // 순회는 많이해서 설명 스킵~
    preorder('A');
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
    cout << "\n";
}