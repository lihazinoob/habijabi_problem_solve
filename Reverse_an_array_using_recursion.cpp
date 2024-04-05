#include<bits/stdc++.h>
using namespace std;
vector<int>arr;

void reverserec(int index , int n)
{
  if(index == n)
  {
    //cout<<arr[index];
    return;
  }
  reverserec(index+1,n);
  cout<<arr[index]<<endl;

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

  reverserec(0,n);


  return 0;
}