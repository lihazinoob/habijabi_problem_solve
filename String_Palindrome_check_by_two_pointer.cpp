#include<bits/stdc++.h>
#include<string>
using namespace std;

bool checkPallindrome(string input ,int size)
{
  bool flag = false;
  int first = 0;
  int last = size - 1;
  while(first<=last)
  {
    if(input[first]  == input[last])
    {
      flag = true;
      ++first;
      --last;
    }
    else
    {
      flag = false;

      break;
    }
  }
  return flag;
}


int main()
{
  string s;
  getline(cin,s);
  int size = s.size();
  // cout<<size;
  if(checkPallindrome(s,size))
  {
    cout<<"YES"<<endl;
    return 0;
  }
  cout<<"NO"<<endl;
  return 0;
}