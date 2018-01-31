#pragma once
#include bubble.hpp

//Sort integers with bubble Sort
int sort(int toSort[]){
  int swap;
  for(int i = 0; i < toSort.length();i++){
    for(int k = 1;k < toSort.length();k++){
      if(toSort[i]>toSort[k]){
        swap = toSort[k];
        toSort[i] = toSort[k];
        toSort[i] = swap;
      }
    }
  }
  return toSort[];
}
