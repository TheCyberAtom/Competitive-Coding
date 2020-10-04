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
    int ucount=0,lcount=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            ucount++;
        else
            lcount++;
    }
    if(ucount>lcount)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    
    cout<<s;
return 0;
}
