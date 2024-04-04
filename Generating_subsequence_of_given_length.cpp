// Problem Statement:
// Given an array of size n, generate and print all possible combinations of r elements in the array.


#include<bits/stdc++.h>
using namespace std;
int n,r;
int arr[100];
bool is_taken[100];
int cnt  = 0;
void generate_sub(int index)
{
  //base case
  if(index>n)
  { 
    if(cnt>r)
    {
      for(int i = 1;i<=n;i++)
      {
        if(is_taken[i] == true && cnt !=r )
        {
          cout<<arr[i]<<" ";
        }
      }
      cout<<'\n';
    }
    
    return;
  }
  //recursive case

 //This is the part for not taking
  is_taken[index] = false;
  generate_sub(index+1);

  //This is the part for taking
  is_taken[index] = true;
  ++cnt;
  generate_sub(index+1);
  
}





int main()
{
  cin>>n>>r;
  for(int i = 1;i<=n;i++)
  {
    cin>>arr[i];
    is_taken[i] = false;
  }
  generate_sub(1);

  return 0;
}

