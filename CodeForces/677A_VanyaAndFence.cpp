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
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=h)
            res++;
        else
            res+=2;
    }
    cout<<res;

return 0;
}
