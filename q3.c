#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    //definning count for hmw many repeated
    int count;
    //set count initial value = 0
    count = 0 ;

    string a = get_string("insert setring : ");
    char c = get_char("insert charecter to be count how many repeated : ");
    for (int i = 0, n = strlen(a); i < n ; i++)
    {
        if (a[i] == c)
        {
            count++;
        }
    }
    printf("%c repeated %i times\n", c, count);
}