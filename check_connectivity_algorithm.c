#include<stdio.h>
  int main() {
    int n, i, j, flag = 0, x, y, array[100][100];
    printf("Enter the number of elements in graph : \n");
    scanf("%d", & n);
    printf("The Graph %d value are:\n", n);

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", & array[i][j]);
      }
    }

    printf("Enter row no : ");
    scanf("%d", & x);

    printf("Enter coloumn no: ");
    scanf("%d", & y);

    for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
        if (array[x][y] == 1) {
          flag = 1;
        }
      }
    }
    if (flag == 1) {
      printf("That is  connected");
    } else {
      printf("That is not connected");
    }

    return 0;
  }
