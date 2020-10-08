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
    int T,x,count=1;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++)
        cin>>arr[i];
    for(int i=1;i<T;i++)
    {
        x=arr[i-1]%10;
        if(x!=arr[i]%10)
            count++;
    }
    cout<<count;
return 0;
}
