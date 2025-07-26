#include "stdio.h"

int main() {
  unsigned int n = 5;
  int arr[] = {4, 2, 6, 1, 9};

  int smallest_index = 0;
  int largest_index = 0;
  int second_smallest_index = 0;
  int second_largest_index = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < arr[smallest_index]) {
      second_smallest_index = smallest_index;
      smallest_index = i;
    }
    if (arr[i] > arr[largest_index]) {
      second_largest_index = largest_index;
      largest_index = i;
    }
  }

  printf("Second smallest: %d\n", arr[second_smallest_index]);
  printf("Second largest: %d\n", arr[second_largest_index]);

  return 0;
}
