#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int inputarr[100];
void generate_all_subsequence(int index,int n)
{
  if(index >= n)
  {
    for(auto i:ans)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    return;
  }
  ans.push_back(inputarr[index]);
  generate_all_subsequence(index+1,n);
  ans.pop_back();
  generate_all_subsequence(index+1,n);

}
int main()
{
  int n;
  cin>>n;
  for(int i = 0;i<n;i++)
  {
    cin>>inputarr[i];
  }
  generate_all_subsequence(0,n);


  return 0;
}