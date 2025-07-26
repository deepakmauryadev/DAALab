#include "stdio.h"

int calculatePrefixSum(int arr[], int prefixSum[], int n) {
  int sum = 0;

  for (int i=0; i<n; i++) {
    sum += arr[i];
    prefixSum[i] = sum;
  }
}

int main() {
  unsigned int n;
  printf("Enter size of the array: ");
  scanf("%d", &n);

  int arr[n];
  int prefixSum[n];

  for (int i=0; i<n; i++) {
    printf("%d: ", i);
    scanf("%d", &arr[i]);
  }

  calculatePrefixSum(arr, prefixSum, n);

  for (int i=0; i<n; i++) printf("%d ", prefixSum[i]);
  printf("\n");
  

  return 0;
}