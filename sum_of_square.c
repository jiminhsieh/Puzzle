#include <stdio.h>

int main()
{
        int i = 1; 
        int result = 0; 
        
        for(;i <= 100; i++) {
                result += i * i;
        }

        printf("Sum of 1^2 ~ 100^2 = %d\n", result);

        return 0;
}
