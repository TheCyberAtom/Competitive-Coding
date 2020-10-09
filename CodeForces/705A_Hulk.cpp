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
    int n;
    cin>>n;
    string s="I hate ";
    string hate="I hate ";
    string love="I love ";
    string it="it";
    string that="that ";
    if(n>=1)
    {
        for(int i=1;i<n;i++)
        {
            if(i%2==0)
            {
                s+=that;
                s+=hate;
            }
            else
            {
                s+=that;
                s+=love;
            }
        }
    }
    s+=it;
    cout<<s;
    
return 0;
}
