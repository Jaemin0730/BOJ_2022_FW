#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int arr[26];

int main(void)
{
    u;
    string s;
    while(getline(cin,s))
        for (int i = 0; i < s.size(); i++)
            if ('a' <= s[i] && s[i] <= 'z')
                arr[s[i] - 'a']++;
    int max = *max_element(arr, arr + 26);
    for (int i = 0; i < 26; i++)
        if (arr[i] == max)
            printf("%c", i + 'a');
    printf("\n");
}