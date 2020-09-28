

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
      int n,k;
      cin>>n>>k;
      int arr[n];
      int count=0;
      //array input
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      //counting numbers greater than or equal to kth item.
      for(int i=0;i<n;i++)
      {
          if(arr[i]>=arr[k-1] && arr[i]!=0)
            count++;
          else
            break;
          
      }
      cout<<count;
    return 0;
    }