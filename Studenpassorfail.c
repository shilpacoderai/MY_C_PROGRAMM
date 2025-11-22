#include <stdio.h> 
int isPassed(int m1, int m2, int m3) 
{ 
 if (m1>=40 && m2>=40 && m3>=40) 
 return 1; 
 else return 0; 
} 
void main() 
{ 
 int sub1, sub2, sub3; 
 float average; 
 printf("Enter marks for Sub 1: "); 
 scanf("%d", &sub1); 
 printf("Enter marks for Sub 2: "); 
 scanf("%d", &sub2); 
 printf("Enter marks for Sub 3: "); 
 scanf("%d", &sub3); 
 average = (sub1 + sub2 + sub3) / 3.0; 
 printf("Average Marks: %.2f\n", average); 
 if (isPassed(sub1, sub2, sub3)) 
 printf("Result: PASS\n"); 
 else 
 printf("Result: FAIL\n"); 
}
