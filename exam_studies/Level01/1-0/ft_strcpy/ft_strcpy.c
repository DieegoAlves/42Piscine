#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s2[i])
        {
                s1[i] = s2[i];
                i++;
        }
        s1[i] = s2[i]; //para colocar o '\0' avisando que a tring chegou ao final
        return (s1);
}

int main()
{
    char dest[50];
    char *src = "Diego Alves Ferreira";
    ft_strcpy(dest, src);
    printf("%s\n", dest);
}