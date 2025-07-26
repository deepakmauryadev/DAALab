#include "stdio.h"
#include "stdlib.h"

#define MAX_VALUE 1000

int main() {
  unsigned int n;
  printf("Enter how many numbers you want to read from file: ");
  scanf("%d", &n);

  int numbers[n];
  int *occurance = calloc(MAX_VALUE, sizeof(int));

  FILE *file = fopen("numbers.txt", "r");

  for (int i=0; i<n; i++) {
    if (fscanf(file, "%d", &numbers[i]) != 1) {
      printf("File does not content enough numbers.\n");
      fclose(file);
      break;
    }
  }

  for (int i=0; i<n; i++) occurance[numbers[i]]++;

  int no_of_duplicate = 0;
  int most_repeating = 0, most_repeating_count = 0;

  for (int i=0; i<MAX_VALUE; i++) {
    if (occurance[i] > 1) no_of_duplicate++;
    if (occurance[i] > most_repeating_count) {
      most_repeating = i;
      most_repeating_count = occurance[i];
    }
  }
  printf("No of duplicate element: %d\n", no_of_duplicate);
  printf("Most repeating element: %d\n", most_repeating);

  fclose(file);
  free(occurance);

  return 0;
}
