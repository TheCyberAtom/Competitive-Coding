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
        //M is row and N is column of retecngular board 
        int M,N;
        cin>>M>>N;
        
        //calculating total numbers of dominos can be fitted 
        int  total=M*N;
     
        cout<<total/2;
     
    return 0;
    }