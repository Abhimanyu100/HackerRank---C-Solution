/* ###PLAYING WITH CHARACTER### */

#include <stdio.h>
#include <string.h>


#define MAX 500
int main()
{
    char ch;
    char str[MAX];
    char sen[MAX];
    //printf("Type a character: ");
    scanf("%c", &ch);
    //printf("Type a string: ");
    scanf("%s\n", &str);
    //printf("Type a sentence: ");
    gets(sen);
    printf("%c\n", ch);
    printf("%s\n", str);
    puts(sen);
}
