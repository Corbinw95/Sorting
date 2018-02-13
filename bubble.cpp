#include <vector>
#include <iostream>

#include "bubble.hpp"

//Sort integers with bubble Sort
vetcor<int> sort(vector<int> toSort){
  int swap;
  for(int i = 0; i < toSort.size();i++){
    for(int k = 1;k < toSort.size();k++){
      if(toSort[i]>toSort[k]){
        swap = toSort.at(k);
        toSort.at(k) = toSort.at(i);
        toSort.at(i) = swap;
      }
    }
  }
  return toSort;
}
