#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
//memo array is for memoization
ll memo[100];

ll power_of_two(int n)
{
  if(n == 0)
  {
    return 1;
  }
  if(memo[n] != -1)
  {
    return memo[n];
  }

  memo[n] = power_of_two(n-1) + power_of_two(n-1);
  return memo[n];
}


int main()
{
  int n;
  cin>>n;
  for(int i = 0;i<=n;i++)
  {
    memo[i] = -1;
    //initializing the memo array with -1 that indicates it is not pre calculated
  }
  cout<<power_of_two(n);
  return 0;
}