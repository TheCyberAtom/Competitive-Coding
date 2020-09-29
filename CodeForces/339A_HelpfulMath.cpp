#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define UINT unsigned int
#define LLI long long int
#define LL long long
#define T testcases
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define PB push_back
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 1000000007

int main()
{
//OJ;
FASTIO;
    string s;
    cin>>s;
    int n=s.length();
    vector<int>v;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='+')
            v.push_back(s[i]-'0');
    }
    sort(v.begin(),v.end());
    string res;
    res+=v[0]+'0';
    for(int i=1;i<v.size();i++)
    {
        res+='+';
        res+=v[i]+'0';
    }
    cout<<res;
return 0;
}
