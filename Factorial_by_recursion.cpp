#include<bits/stdc++.h>
using namespace std;
 
long long int ans = 1;
long long int factorial(int n)
{
  //Base Case
  if(n == 0)
  {
    return 1;
  }
  //Recursive case
  cout<<"We are at number : " <<n<<endl;
  
  ans = n * factorial(n-1);
  cout<<ans<<endl;
  return ans;
}




int main()
{
  int n;
  cin>>n;

  factorial(n);



  return 0; 
}