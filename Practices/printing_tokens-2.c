#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    for (int i = 0; i < strlen(str); i++){
            if ( str[i] == ' ' ){
                  printf("\n");
            }
            else {
                  printf("%c",str[i]);
            }
    }
    return 0;
}


