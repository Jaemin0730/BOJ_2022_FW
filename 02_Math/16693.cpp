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
    double A1,P1,R1,P2;
    cin>>A1>>P1>>R1>>P2;

    if(A1*P2>R1*R1*3.1415926535*P1){
        cout<<"Slice of pizza";
    }
    else{
        cout<<"Whole pizza";
    }
}