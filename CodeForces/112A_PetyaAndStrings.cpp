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
  string s1,s2;
  cin>>s1>>s2;
  for(int i=0;s1[i];i++)
  {
      if(s1[i]>=65 && s1[i]<=92)
      {
	    s1[i]=s1[i]+32;
      }
      if(s2[i]>=65 && s2[i]<=92)
      {
	  s2[i]=s2[i]+32;
      }
  }
  int flag;
  for(int i=0;s1[i];i++)
  {
      if(s1[i]<s2[i])
        {
            flag=-1;
            break;
        }
      if(s1[i]>s2[i])
        {
            flag=1;
            break;
        }
    else
    {
        flag=0;
    }
    
  }
  cout<<flag;

return 0;
}
