#include<stdio.h >

  int main() {
    int array_list[100], n, i, j, swap;

    printf("Enter the number of elements in array :\n");
    scanf("%d", &n);

    printf("Enter %d integer(s) array value :\n", n);

    for (i = 0; i < n; i++) {
      scanf("%d", &array_list[i]);
    }

    for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - i - 1; j++) {
        if (array_list[j] > array_list[j + 1]) /* For decreasing order use < */ {
          swap = array_list[j];
          array_list[j] = array_list[j + 1];
          array_list[j + 1] = swap;
        }
      }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++) {
      printf("%d\n", array_list[i]);
    }
    return 0;
  }
