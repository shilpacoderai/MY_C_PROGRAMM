#include<stdio.h>
#include<stdlib.h>

int main() {
    
int *rajesh=(int*)malloc(10 * sizeof(int));
*rajesh=10;
printf("value %d", *rajesh);


}
