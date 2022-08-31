#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string getContestName(int year){
    if( year == 1996 || year == 1997 || year == 2000 || 
        year == 2007 || year == 2008 || year == 2013 || year == 2018
    ) return "SPbSU";
    if( year == 2006) return "PetrSU, ITMO";
    return "ITMO";
}

int main(void)
{
    u;
    int year;
    cin >> year;
    cout << getContestName(year);
}