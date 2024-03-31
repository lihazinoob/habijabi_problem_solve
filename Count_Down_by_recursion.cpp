#include<bits/stdc++.h>
using namespace std;

void count_down(int n)
{
  if(n == 0)
  {
    return;
  }
  //recursive case
  //count n<< " "; this is for count down
  count_down(n-1);
  cout<<n<<" "; //this is for count up 

}



int main()
{ 
  int n;
  cin>>n;

  count_down(n);

  return 0;
}