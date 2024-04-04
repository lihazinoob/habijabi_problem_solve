#include<bits/stdc++.h>
using namespace std;
void print1toNbyrec(int current,int n)
{
  if(current>n)
  {
    return;
  }
  cout<<current<<" ";
  print1toNbyrec(current+1,n);
}

void printNto1byrec(int current,int n)
{
  if(current>n)
  {
    return;
  }
  
  printNto1byrec(current+1,n);
  cout<<current<<" ";
}




int main()
{
  int n;
  cin>>n;
  print1toNbyrec(1,n);
  cout<<endl;
  printNto1byrec(1,n);



  return 0;
}