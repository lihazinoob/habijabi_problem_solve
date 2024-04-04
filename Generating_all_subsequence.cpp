#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int inputarr[100];
bool is_taken[100];
void generate_all_subsequence(int index,int n)
{
  if(index > n)
  {
    for(int i = 1;i<=n;i++)
    {
      if(is_taken[i] == true)
      {
        cout<<inputarr[i]<<" ";
      }
    }
    cout<<endl;
    return;
  }

  is_taken[index] =false; //do not take
  generate_all_subsequence(index+1,n);

  is_taken[index] = true;
  generate_all_subsequence(index+1,n);

}
int main()
{
  int n;
  cin>>n;
  for(int i = 1;i<=n;i++)
  {
    cin>>inputarr[i];
    is_taken[i] = false;
  }
  generate_all_subsequence(1,n);


  return 0;
}