#include <bits/stdc++.h> 
#include<algorithm>
int maximumProfit(vector<int> arr){
  int maxPro = 0;
  int minPrice = INT_MAX;
  for (int i = 0; i < arr.size(); i++) {
      if(arr[i] < minPrice)
          minPrice= arr[i];
      int diff = arr[i] - minPrice;
      if(diff > maxPro)
          maxPro = diff;
  }
  return maxPro;
}
