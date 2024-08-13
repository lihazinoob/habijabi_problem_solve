// Using Merge Sort Algorithm to sort an array

#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public: 
  void mergeSort(vector<int> &vect,int left, int right)
  {
    
    if(left>=right)
    {
      return;
    }
    else
    {
      int mid = (left + right) /2;
      // cout<<left<<" "<<right<<" "<<mid<<endl;
      mergeSort(vect,left,mid);
      mergeSort(vect,mid+1,right);
    }
  }
};

int main()
{
  vector<int> vect1 = {78, 454, 98, 1, 34, 5666, 56, 1, 56};
  Solution s;
  s.mergeSort(vect1,0,8);
  return 0;
}