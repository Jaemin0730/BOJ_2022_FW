#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int a[2][7] = {}, N, K, r=0;
	cin >> N >> K;
	
	for(int i=0; i<N; i++){
		int S, G;
		cin >> S >> G;
		
		a[S][G]++;
	}
	
	for(int i=0; i<2; i++){
		for(int j=1; j<7; j++){
			
			if(a[i][j]!=0){
				
				r += a[i][j]/K;
				
				if(a[i][j]%K!=0) {
                    r++;
                }
			}
		}
    }
	cout << r;	
}