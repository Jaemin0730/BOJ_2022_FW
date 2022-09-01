#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int newCases, newHospitalizations;

string filter(){
    if(newCases <= 50 && newHospitalizations <= 10) return "White";
    if(newHospitalizations > 30) return "Red";
    return "Yellow";
}

int main(void)
{
    u;
    cin >> newCases >> newHospitalizations;
    cout << filter();
}