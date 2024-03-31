#include<bits/stdc++.h>
using namespace std;
int sum = 0;
long long int get_sum_by_recursion(int n)
{
  //base case declaration
  if(n == 1)
  {
    return 1;
  }

  //recursive case declaration
  return n + get_sum_by_recursion(n-1);

}


int main()
{
  int n;
  cin>>n;
  cout<<get_sum_by_recursion(n);


  return 0;
}