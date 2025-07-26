#include <stdio.h>

void exchange(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}

void rotate_right(int arr[], int pos) {
  for (int i = pos - 1; i > 0; i--) exchange(&arr[i-1], &arr[i]);
}

int main() {
  int arr[] = { 11,22,33,44,55,66,77,88,99 };
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before Rotate: ");
  for (int i=0; i<n; i++) printf("%d ", arr[i]);
  printf("\n");

  rotate_right(arr, 5);

  printf("After Rotate: ");
  for (int i=0; i<n; i++) printf("%d ", arr[i]);

  return 0;
}
