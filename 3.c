#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sapxep(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

int main() {
  int arr[5];  
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Nhap vao 5 so: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Mang chua sap xep: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  sapxep(arr, n);
  printf("Mang da sap xep (giam dan): ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
