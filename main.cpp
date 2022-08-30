

#include "func.hpp"
#define test_strcat

int main () {

    #if defined test_strlen

        char teststr[] = "abcde";
        printf("%zd", strlen(teststr));

    #endif

    #if defined test_strcpy

        char from[] = "abcde";
        char to[6];
        printf("%s", strcpy(from, to));

    #endif

    #if defined test_strchr

        char chr   = 'c';
        char str[] = "abcde";
        printf("%c", *strchr (str, chr));

    #endif

    #if defined test_strcat

        char str[]    = "abcde";
        char addstr[] = "dcba";
        printf("%s", strcat (str, addstr));

    #endif

     #if defined test_strcmp

        char str1[] = "abcde";
        char str2[] = "abcde";
        printf("%zd", strcmp (str1, str2));

    #endif

    return 0;
    
}


