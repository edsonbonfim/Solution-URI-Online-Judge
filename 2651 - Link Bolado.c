#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char S[1000001];

    scanf("%s",S);

    int i;

    for (i = 0; S[i] != '\0'; i++)
    {
        S[i] = tolower(S[i]);
    }

    if(strstr(S, "zelda") != NULL){
        printf("Link Bolado\n");
    }else{
        printf("Link Tranquilo\n");
    }
    return 0;
}
