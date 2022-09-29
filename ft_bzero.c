


#include<stdio.h>

#include <string.h>

void *ft_bzero (void *str,size_t n)
{
    unsigned char *s = str;
    while (n > 0)
    {
        *s = 0;

        s++;
        n--;
       
    }
    return (str);
}
// int main()
//  {
//       char str[20] = "hello";
//       int i = 0;
//      //int ch = 't';

//     //int n = 10;
//     // printf("%s\n",ft_bzero(str,3));
//      ft_bzero(str, 4);
//     while (i < 5)
//     {
//         printf("%d\n", str[i]);
//         i++;
//         }
//     // printf("%s",bzero(str,3));

// }
