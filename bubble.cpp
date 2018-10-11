#include <vector>
#include <iostream>

#include "bubble.hpp"

//Sort integers with bubble Sort
void bubble::sort(){
  int swap;
  for(int i = 0; i < toSort.size(); i++){
    for(int k = 0; k < toSort.size(); k++){
      if(toSort[i]>toSort[k]){
        swap = toSort.at(k);
        toSort.at(k) = toSort.at(i);
        toSort.at(i) = swap;
      }
    }
  }
}

void bubble::print(){
  std::cout << "SORTED DESCENDING:" << std::endl;
  for(int i = 0; i < toSort.size(); i++){
    std::cout << toSort.at(i) << std::endl;
  }
}
