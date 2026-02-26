//NAME:KEMBOI AMOS KIPNGENO
//REGNO:EB3/68883/23
//insertion sort using C programming language
#include<stdio.h>
void insertionSort(int arr[],int n){
//int i;
int key;
int j;
for(int i=1;i<n;i++){
	key=arr[i];
	j=i-1;
	//swapping elements greater than the key
	 while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;


}	
}
int main(){
	 int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}