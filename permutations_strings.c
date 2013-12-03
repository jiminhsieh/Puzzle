#include <stdio.h>
#define debug 1

void swap (char *x, char *y)
{
        char temp;
        temp = *x;
        *x = *y;
        *y = temp; 
}

void permute(char *address, int i, int n)
{
        int j;
        if (i == n)
                printf("%s\n", address);
        else {
                for (j = i; j <= n; j++) {
                        swap((address+i), (address+j));
                        permute(address, i+1, n);
                        swap((address+i), (address+j)); // restore strings 
#if debug
                        printf("In backtrack: %s\n", address);
#endif 
                }
        }
}

int string_length(char *address)
{
        int length = 0;

        while('\0' != address[length]){
                length++;
        }
   
        return length;
}

int main()
{
        char string[] = "ABCDEF";
        int length;

        length = string_length(string);
#if debug
        printf("String Length = %d\n", length);
#endif 
        permute(string, 0, length -1 );
    
        return 0;
}
