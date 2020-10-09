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
    int T,flag=0;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"EASY";
    else
        cout<<"HARD";

return 0;
}
