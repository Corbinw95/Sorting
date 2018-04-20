#include <random>
#include "bubble.hpp"

using namespace std;

int main(){
  vector<int> unsorted;
  bubble bsort(unsorted);
  bsort.print(bsort.sort());
  return 0;
}
