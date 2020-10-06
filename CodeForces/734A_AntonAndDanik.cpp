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
    int n;
    cin>>n;
    cin>>s;
    int an=0,dk=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='A')
            an++;
        else
            dk++;
    }
    if(an==dk)
        cout<<"Friendship";
    else if(an<dk)
        cout<<"Danik";
    else
        cout<<"Anton";

return 0;
}
