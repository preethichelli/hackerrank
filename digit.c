#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
       char str[1024];  
    int digit_count[10] = {0};  

   
    scanf("%s", str);

    
    for (int i = 0; i < strlen(str); i++) {
        
        if (str[i] >= '0' && str[i] <= '9') {
            digit_count[str[i] - '0']++;  
        }
    }

    
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_count[i]);
    }
    
    return 0;
}
