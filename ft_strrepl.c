#include <stdio.h>

char *ft_strrepl(char *str, char c1, char c2)
{
    int i = 0;
    char str1[100];

    while (str[i])
    {
        if (str[i] == c1)
            str1[i] = c2;
        else
            str1[i] = str[i];
        i++;
    }
    str = str1;
    return (str);
}

int main()
{
    char *str = "Toto";
    char c1 = 'o';
    char c2 = 'a';
    printf("%s\n", ft_strrepl(str, c1, c2));
}