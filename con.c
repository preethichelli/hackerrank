#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
int n;
scanf("%d", &n);
if (1 <= n && n <= 9){
   switch (n){
    case 1:
    printf("one");
    break;
    
    case 2:
    printf("two");
    break;
    
    case 3:
    printf("three");
    break;
    
    case 4:
    printf("four");
    break;
    
    case 5:
    printf("five");
    break;
    
    case 6:
    printf("six");
    break;
    
    case 7:
    printf("seven");
    break;
    
    case 8:
    printf("eight");
    break;
    
    case 9:
    printf("nine");
    break;
   }
}
else {
    printf("Greater than 9");
}
}
