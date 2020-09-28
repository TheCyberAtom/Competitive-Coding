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
        int n,count=0;
        cin>>n;
        while(n--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if((a==1 && b==1 ) || (a==1 && c==1) || (b==1 && c==1))
                count++;
        }
        cout<<count;
    return 0;
    }