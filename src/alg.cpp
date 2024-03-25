// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      k++;
    }
  }
  if (k > 0) {
    return k;
  } else {
    return 0;
  }
