#include <stdio.h>
#include <string.h>

char check_non_repeated( char *str)
{
    int i, j, repeated = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {

        repeated = 0; 
        for (j = 0; j < length; j++) {
            if (i != j && str[i] == str[j]) {
                repeated = 1;
                break;
            }
        }

        if (repeated == 0) {
            return str[i];
        }
    }

    return '\n';
}

int main()
{
    char string[] = "adegadecb";
    char first;

    first = check_non_repeated(string);

    printf("Final Result: %c\n", first == '\n' ? '0' : first);
}
