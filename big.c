#include <stdio.h>

int main(void)
{
    char str;
    while((str=getchar())!='\n')
    {
        if( str>='a' && str<='z' )
        {
            str-=('a'-'A');
        }
        else if( str>='A' && str<='Z')
        {
            str+=('a'-'A');
        }
    putchar(str);
    }   
    return 0;
}

