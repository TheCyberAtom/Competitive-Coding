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
string s,t;
    cin>>s;
    cin>>t;
    int n=s.length();
    int i=0,j=n-1;
    int flag=1;
    for(i=0;i<n;i++,j--)
    {
        if(s[i]!=t[j])
            flag=0;
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";

return 0;
}
