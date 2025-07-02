// swap two integers using pointers
#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    a = 1; 
    b = -1;
    printf("a: %d, b: %d", a, b);
    swap(&a, &b);
    printf("a: %d, b: %d", a, b);

}
