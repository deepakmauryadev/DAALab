#include "stdio.h"

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int *arr, int n) {
  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      if (arr[i] > arr[j]) swap(&arr[i], &arr[j]);
    }
  }
}

void selectionSort(int *arr, int n) {
  for (int i=0; i<n; i++) {
    int k = i;
    for (int j=i; j<n; j++) 
      if (arr[j] < arr[k]) k = j;
    
    if (k != i) swap(&arr[i], &arr[k]); 
  }
}

void insertionSort() {
  
}

int main() {
  int choice;
  int arr[100];
  int n;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    printf("%d : ", i);
    scanf("%d", &arr[i]);
  }

  printf("\n\tMENU\n");
  printf("1. Bubble Sort\n");
  printf("2. Selection Sort\n");
  printf("other. Exit\n\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      bubbleSort(arr, n);
      break;

    case 2:
      selectionSort(arr, n);
      break;
    
    default:
      break;
  }

  for (int i=0; i<n; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");

  return 0;
}