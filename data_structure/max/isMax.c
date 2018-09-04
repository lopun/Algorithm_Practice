#include <stdio.h>

// Better (O(n))
int CompareToMax(int array[], int n) {
  int curMax, i;

  if (n <= 0)
    return -1;

  curMax = array[0];

  for (i=1; i < n; i++) {
    if (array[i] > curMax) {
      curMax = array[i];
    }
  }

  return curMax;
}

// Worst O(n^2)
int CompareToAll(int array[], int n) {
  int i, j;
  bool isMax;

  if (n <= 0)
    return -1;

  for (i = n-1; i > 0; i--) {
    isMax = true;
    for (j = 0; j < n; j++) {
      isMax = true;
      for (j=0; j < n; j++) {
        if (array[i] > array[j])
          isMax = false;
      }
    }
    if (isMax)
      break;
  }

  return array[i];
}