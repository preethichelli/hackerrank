#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
 int max_and = 0, max_or = 0, max_xor = 0;
  for (int a = 1; a < n;a ++){
    for(int b = a + 1; b <= n; b ++ )
    {
        if ((a & b) < k && (a & b) > max_and){
            max_and = a & b; 
        }
        if ((a | b) < k && (a | b) > max_or){
            max_or = a | b;    
        }
        if ((a ^ b) < k && (a ^ b) > max_xor ){
            max_xor = a ^ b; 
        }
  }
}
