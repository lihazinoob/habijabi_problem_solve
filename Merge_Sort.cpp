#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>ans;
void mergethearray(int left,int mid,int right)
{
  int pointer1 = left;
  int pointer2 = mid+1;
  while(pointer1<=mid && pointer2<=right)
  {
    if(arr[pointer1] <= arr[pointer2])
    {
      ans.push_back(arr[pointer1]);
      ++pointer1;
    }
    else
    {
      ans.push_back(arr[pointer2]);
      ++pointer2;
    }
  }

  while(pointer1<=mid)
  {
    ans.push_back(arr[pointer1]);
    ++pointer1;
  }
  while(pointer2<=right)
  {
    ans.push_back(arr[pointer2]);
    ++pointer2;
  }

}



void dividethearray(int left,int right)
{
  if(left == right)
  {
    return;
  }
  //divide the whole array recursively
  int mid = (left + right) /2;
  dividethearray(left,mid);
  dividethearray(mid + 1,right);
  mergethearray(left,mid,right);
  return;

}
void printthearray(int n)
{
  for(int i = 0;i<n;i++)
  {
    cout<<ans[i];
  }
}

int main()
{
  int n;
  cin>>n;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  // for(int i = 0;i<n;i++)
  // {
  //   cout<<arr[i]<<" ";
  // }
  dividethearray(0,n-1);
  printthearray(n);
  return 0;
}