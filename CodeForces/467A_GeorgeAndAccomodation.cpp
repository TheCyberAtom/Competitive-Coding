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
    int T,count=0;
    cin>>T;
    while(T--)
    {
        int p,q;
        cin>>p>>q;
        if(p<=q-2)
            count++;
    }
    cout<<count;
return 0;
}
