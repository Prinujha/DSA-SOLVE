#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n);
int main()
{
  int arr[50];
  int num;
  int i;
  printf("Enter number of elements\n");
  scanf("%d", &num);
  if(num>50){
    printf("Enter valid Array Size");
    return ;
  }
  printf("Enter %d integers\n", num);

  for (i= 0; i < num; i++)
    scanf("%d", &arr[i]);
    insertionSort(arr,num);
  return 0;
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted Array in Ascending Order by Insertion Sort");
     for (i = 0; i < n; i++){
      printf("%d ", arr[i]);
    printf("\n");
}
}
