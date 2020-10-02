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
    int res=0;
    int temp=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        temp-=a;
        temp+=b;
        res=max(res,temp);
    }
    cout<<res;
return 0;
}
