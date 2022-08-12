#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string a = get_string("insert setring :");
    char c = get_char("insert charecter to be remove :");
    for(int i = 0 , n = strlen(a); i < n ; i++)
    {
     if(a[i] == c)
     {
        printf(" ");
     }
     else
     {
        printf("%c",a[i]);
     }
    }
}