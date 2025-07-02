//returns sum of elements in an array using pointers
#include <stdio.h>
#include <iostream>

int sumArray(int* arrPtr, int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        printf("Array element: %d\n", *(arrPtr + i));
        sum += *(arrPtr + i);
    }
    return sum;
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << " size: " << size << std::endl;
    int* ptr = arr;


    int sum = sumArray(ptr, size);

    printf("Sum of elements of array: %d \n" , sum);

    return 0;

}