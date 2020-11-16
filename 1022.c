#include <stdio.h>
int main()
{
    char sentence[2001];
    fgets(sentence, 2000, stdin);
    printf("%s\n", sentence);
    return 0;
}