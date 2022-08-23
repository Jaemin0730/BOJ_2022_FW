#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n;
double sol = 0;
vector<pair<double, double>> star;                  // 별들 x,y 좌표 값 저장해주기
vector<pair<double, pair<int , int>>> save;    // 별들 사이에 거리 + 좌표의 순서(기준 좌표, 변화하는 좌표) (총 3개)를 저장해주기
int node[105] = {}; // 부모노드를 넣어주는 곳!!!!

int Find (int a) {  // 각 노드의 부모노드를 찾아서 반환한다
    if (a == node[a]) {
        return a;
    }
    else {
        return node[a] = Find(node[a]);
    }
}

bool IsSame (int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a == b) {
        return true;
    }
    else {
        return false;
    }
}

void Union (int a, int b) {
    a = Find(a);
    b = Find(b);
    // b의 부모노드를 a의 부모노드와 일치시켜주자!
    node[a] = b;
}

int main(void)
{
    u;
    cin>>n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        star.pb({x, y});
    }
    // 거리 계산
    for (int i = 0; i < star.size(); i++) {
        for (int j = i + 1; j < star.size(); j++) {
            double temp = sqrt(pow(star[j].first - star[i].first, 2) + pow(star[j].second - star[i].second, 2));
            save.pb({temp, {i, j}});
        }
    }
    // 크루스칼 알고리즘 사용
    for(int i = 0; i < n; i++) {
        node[i] = i;
    }
    sort(save.begin(), save.end());
    for (int i = 0; i < save.size(); i++) {
        int X = save[i].second.first;
        int Y = save[i].second.second;
        double cost = save[i].first;
        if (!IsSame(X, Y)) {    //  두 노드의 부모노드가 다를 경우 -> 부모노드를 같게 해주고 그 사이 간선을 더해주자!!
            Union(X, Y);
            //cout << cost << "\n";
            sol += cost;
        }
    }
    cout.precision(3);
    cout << sol;
}