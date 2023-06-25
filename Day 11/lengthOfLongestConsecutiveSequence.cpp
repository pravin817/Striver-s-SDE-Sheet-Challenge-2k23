#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {

  set<int> s(arr.begin(), arr.end());
  bool first = true;
  int prev;
  int count = 0;
  int Max = INT_MIN;

  for(auto i : s){
      if(first){
          first = false;
          prev = i;
          count = 1;
      }else if(i == prev+1){
          count++;
      }else{
          Max = max(Max, count);
          count = 1;
      }
      prev = i;
  }
  Max = max(Max, count);
  return Max;
}