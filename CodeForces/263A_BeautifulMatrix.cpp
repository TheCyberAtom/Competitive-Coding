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
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    int posi=-1,posj=-1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                posi=i;
                posj=j;
                break;
            }
        }
        if(posi!=-1 && posj!=-1)
            break;
    }
    cout<<(abs(posi-2)+abs(posj-2));
return 0;
}
