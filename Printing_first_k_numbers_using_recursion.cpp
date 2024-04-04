//Problem Status: Given two positive integers n and k, print all increasing sequences of length k such that the elements in every sequence are from the first n natural numbers.

#include<bits/stdc++.h>
using namespace std;

void rec(int currpos,int n,int k)
{
  if(currpos>=k)
  {
    for(int i = 1;i<=currpos;i++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    return;
  }
  rec(currpos + 1 ,n,k);
}
int main()
{
  int n,k;
  cin>>n>>k;
  rec(1,n,k);
  return 0;
}