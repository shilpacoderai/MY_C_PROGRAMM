#include<stdio.h>
#include<stdlib.h>

int main() {
    
int *rajesh=(int*)calloc(10,sizeof(int));

printf("value %d\n", *rajesh);
*rajesh=10;
printf("after calloc %d", *rajesh);


}
