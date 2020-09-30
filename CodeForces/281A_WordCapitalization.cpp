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
    string res="";
    if(s[0]>='a' && s[0]<='z')
        {
            res+=s[0]-32;
        }
    else
    {
        res+=s[0];
    }
    
    for(int i=1;s[i];i++)
        res+=s[i];
    cout<<res;

return 0;
}
