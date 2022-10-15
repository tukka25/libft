
//#include "libft.h"
#include "../libft.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t static mystrlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i++])
        ;
    return (i);

}

void test_isprint(int c){
     
    printf("PC  isprint(%d)     <%d>\n",c,  isprint(c));
    printf("my  ft_isprint(%d) <%d>\n", c, ft_isprint(c));
    printf("-----------------\n");
    }
void test_isascii(int c){
     
    printf("PC  isascii(%d)     <%d>\n",c,  isascii(c));
    printf("my  ft_isascii(%d) <%d>\n", c, ft_isascii(c));
    printf("-----------------\n");
    }

void test_isalnum(int c){
     
    printf("PC  isalnum(%d)     <%d>\n",c,  isalnum(c));
    printf("my  ft_isalnum(%d) <%d>\n", c, ft_isalnum(c));
    printf("-----------------\n");
    }
void test_isdigit(int c){
     
    printf("PC  isdigi(%d)     <%d>\n",c,  isdigit(c));
    printf("my  ft_isdigit(%d) <%d>\n", c, ft_isdigit(c));
    printf("-----------------\n");
    }

void test_isalpha(int c){
     
    printf("PC isalpha(%d) <%d>\n",c,  isalpha(c));
    printf("my isalpha(%d) <%d>\n", c,isalpha(c));
}

void test_strlen(const char *s )
{
    printf("PC  strlen()   <%lu>\n",  strlen(s));
    printf("my  ft_strlen()     <%zu>\n", ft_strlen(s));
    printf("\n-----------------\n");
    }
void test_memset(char *b,char * temp, int c, size_t len)
{
    //b = malloc(sizeof(char) * 100);
    printf("PC  memset()  before<%s> \n",b  );
    memset(b, c, len);
   printf("PC  memset()  before<%s> \n",  temp);
    printf("#######################\n");
    
     printf("PC  memset() after   <%s> \n",  b);
    ft_memset(temp, c, len);
    printf("PC  ft_memset() after <%s>\n",  temp);
     printf("\n-----------------\n");
    if (!strcmp(b, temp))
		printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_bzero(char *b,char * temp,size_t len)
{
    printf("PC  bzero()  before<%s> \n",b  );
    bzero(b, len);
   printf("PC  ft_bzero()  before<%s> \n",  temp);
    printf("#######################\n");
    
     printf("PC  bzero()  after<%s>   sanity<%s>\n",  b, &b[len + 1]);
    ft_bzero(temp, len);
    printf("PC  ft_bzero()  after<%s> sanity<%s>\n",  temp, &temp[len + 1]);
    // printf("\n\n");
    if (!strcmp(b, temp))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
    }

void test_memcpy(
    void * dst,    
    const void * src,
    void * dst2,
    const void * src2,
     size_t n)
{

    printf("src is <%s>\n \n", src);
    memcpy(dst, src, n);
   printf("PC  result memcpy() <%s> \n",  dst);
    printf("#######################\n");
    
    ft_memcpy(dst2, src2, n);
    printf("my  result ft_memcpy() <%s> \n", dst2);
    // printf("\n\n");
    if (!strcmp(dst, dst2))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}
void test_memmove(
    void * dst,    
    const void * src,
    void * dst2,
    const void * src2,
     size_t n){

    printf("\nsrc is <%s> ", src);
    printf("dst is <%s>\n\n", dst);
    memmove(dst, src, n);
   printf("PC result memmove() <%s> \n",  dst);
    //printf("\n");
    
    ft_memmove(dst2, src2, n);
    printf("my res ft_memmove() <%s> \n", dst2);
     printf("\n\n");
    if (!strcmp(dst, dst2))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}


void test_strlcpy(
    char *dst,    
    char *src,
    char *dst2,
    char *src2)
    {
        size_t check1 ;
        size_t check2 ;
        size_t n1 = mystrlen(dst);
        size_t n2 = mystrlen(dst2);
        
    printf("\nsrc is <%s> ", src);
    printf("dst is <%s>\n\n", dst);
    check1 = strlcpy(dst, src, n1);
   printf("PC result strlcpy() <%s> and it returns %zu \n",  dst, check1);
    //printf("\n");
    
    check2 = ft_strlcpy(dst2, src2, n2);
    printf("my res ft_strlcpy() <%s> and it returns %zu \n", dst2, check2);
     printf("\n\n");
    if (!strcmp(dst, dst2) && check1 == check2)
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_strlcat(
    char *dst,    
    char *src,
    char *dst2,
    char *src2, size_t len
    )
    {
        size_t check1;
        size_t check2;
        size_t n1 = len;
        size_t n2 = len;
        
    printf("\nsrc is <%s> ", src);
    printf("dst is <%s>\n\n", dst);
    check1 = strlcat(dst, src, n1);
   printf("PC result strlcat() dest is <%s> and it returns %zu \n",  dst, check1);
    //printf("\n");
    printf("before calling strlcat in test\n");
    check2 = ft_strlcat(dst2, src2, n2);
	printf("after calling strlcat in the test\n");
    printf("my res ft_strlcat() dest is <%s> and it returns %zu \n", dst2, check2);
     printf("\n\n");
    if (!strcmp(dst, dst2) && check1 == check2)
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_toupper(int c)
{
    
    printf("<%c> after pc to tupperis now <%c>\n",c, toupper(c));
    printf("<%c> after my to tupperis now <%c>\n",c,  ft_toupper(c));

    if (toupper(c) == ft_toupper(c))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}
void test_tolower(int c)
{
    
    printf("<%c> after pc to toloweris now <%c>\n",c, tolower(c));
    printf("<%c> after my to toloweris now <%c>\n",c,  ft_tolower(c));

    if (tolower(c) == ft_tolower(c))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_strchr(char *s, int c)
{
    printf("Searching for <%c> in <%s>\n", c, s);
    printf("the pc result is <%s>\n", strchr(s,c));
    printf("the my result is <%s>\n", ft_strchr(s,c));
    if (!strcmp(strchr(s,c) , ft_strchr(s,c)))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_strrchr(char *s, int c)
{
    printf("Searching for <%c> in <%s>\n", c, s);
    printf("the pc result is <%s>\n", strrchr(s,c));
    printf("the my result is <%s>\n", ft_strrchr(s,c));
    if (!strcmp(strrchr(s,c) , ft_strrchr(s,c)))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}
void test_memchr(char *s, int c,  size_t n)
{
    printf("Searching for <%c> in <%s>\n", c, s);
    printf("the pc result is <%s>\n", memchr(s,c, n));
    printf("the my result is <%s>\n", ft_memchr(s,c, n));
    if (!strcmp(memchr(s, c, n) , ft_memchr(s,c, n)))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}

void test_strncmp(char *s1, char *s2, size_t n)
{
    printf("\ncomparing %lu chars from <%s> to <%s>\n", n, s1, s2);
    printf(" pc strncmp result is <%d>\n", strncmp(s1 , s2, n));
    printf(" my ft_strncmp result is <%d>\n", ft_strncmp(s1 , s2, n));
    if (ft_strncmp(s1 , s2, n) ==  strncmp(s1 , s2, n))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n\n");       
}

void test_memcmp(char *s1, char *s2)
{
    int n = ft_strlen(s1);
    printf("\ncomparing %d chars from <%s> to <%s>\n", n, s1, s2);
    printf(" pc memcmp result is <%d>\n", memcmp(s1 , s2, n));
    printf(" my ft_memcmp result is <%d>\n", ft_memcmp(s1 , s2, n));
    if (ft_memcmp(s1 , s2, n) ==  memcmp(s1 , s2, n))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n\n");       
}

void test_strnstr(char *s1, char *s2, size_t n)
{
    printf("\ncomparing %lu chars from <%s> to <%s>\n", n, s1, s2);
    printf(" pc strnstr result is <%s>\n", strnstr(s1 , s2, n));
    printf(" my ft_strnstr result is <%s>\n", ft_strnstr(s1 , s2, n));
    if (!strcmp(ft_strnstr(s1 , s2, n), strnstr(s1 , s2, n)))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n\n");       
}
void test_atoi(char *c)
{
    printf("converting <%s> to int\n", c);
    printf("the pc result is <%d>\n", atoi(c));
    printf("my result is <%d>\n", ft_atoi(c));
    if (atoi(c)== ft_atoi(c))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n");
}
void test_calloc(size_t count, size_t size)
{
    void * pc = calloc(count, size);
    void *my = ft_calloc(count, size);
 
    printf("calloc() take count of size_bites and return array void* filled with 0\n");
    printf("for count = %lu, and size = %lu\n", count, size);
    size_t  i = 0;
    printf("\n ------------------------- \n");
    printf("|index|pc calloc | my calloc|\n");
    printf("|-----|----------|----------|\n");
    while(i < count)
    {
        printf("|  %lu  |    %d     |     %d    |\n",i, *((int*)pc +i), *((int*)my +i));
        i++;
        if(*((int*)pc +i) != *((int*)my +i))
        {
            printf("~~~~~> FAILED :(\n\n\n");
            break;
        }
    }
    printf(" -------------------------- \n\n");
}

void test_strdup(char *s1)
{
    printf("pc strdup <%s>\n", strdup(s1));
    printf("my strdup <%s>\n", ft_strdup(s1));
    if (!strcmp(ft_strdup(s1), strdup(s1)))
        printf("-----> Passed :)\n");
    else
        printf("~~~~~> FAILED :(\n\n");       
       
}

void test_substr(char *s, int start,  size_t len)
{
    printf("the substring of <%s> at start %d with len %lu is :\n", s, start, len);
    printf("<%s>\n", ft_substr(s, start, len));
	 if (!strcmp(ft_substr(s, start, len), "es"))
	 	printf("test succeeded second item<%c>\n", ft_substr(s, start, len)[1]);
	else if (!strcmp(ft_substr(s, start, len), "r"))
		printf("success\n");
	else
		printf("Failure\n");
}
void test_strjoin(char const *s1, char const *s2)
{
    printf("before joinging :\n<%s> <%s>\n", s1, s2);
    printf("after joining :\n<%s>\n", ft_strjoin(s1, s2));
}

void test_strtrim(char const *s1, char const *s2)
{
    printf("before trimming :\n<%s> \ntrim with<%s>\n", s1, s2);
    printf("after trimming :\n<%s>\n", ft_strtrim(s1, s2));
}

void test_split(char *s, int c)
{
    int i = 0; 

    printf("\n\nsplitter <%c>\tstring\t<%s> \n",c,  s);
    printf("\nAfter splitting:\n");
    char **arr;
	if (!s)
		return ;
    arr = ft_split(s, c);
    
    if (arr[0] == NULL)
       printf("It's a null array <%s>\n", arr[0]);
    while (arr[i] != NULL)
    {
        printf("<%s> and it's len is <%lu>\n", arr[i], strlen(arr[i]));
		free(arr[i]);	
        i++;
    }
    printf("\nSanity check last arr item <%s>\n", &arr[i][0]);
	free(arr[i]);
    free(arr);
}

void test_itoa(int c)
{
    //char result[10] = ft_itoa(c);
    printf("pc result <%d>\nmy result <%s>\n", c,ft_itoa(c));
}

void test_strmapi(char const *s, char (*f)(unsigned int, char))
{

    char *l = ft_strmapi(s, f); 
    printf("orginal string <%s>\n", s);

    printf("after strmapi  <%s>\n",l);
}

char addint(unsigned int a, char b)
{
    return (b + a - a + 1);
}

void test_striter(char *s, void (*f)(unsigned int, char*))
{

    printf("the string before striteri <%s>\n", s);
    ft_striteri(s, f);
    printf("the string after striteri <%s>\n", s); 
}

void iter_addint(unsigned int a, char *b)
{
    *b = *b + a - a + 1;
    //return b;
}
void test_putchar_fd(char c)
{
    char    databuffer[1000];
    int fd = open("hi", O_RDWR);
    printf("reading what is inside the file.....\n");
    ft_putchar_fd(c, fd);
    FILE * filePointer;
    filePointer = fopen("hi", "r");

    fgets ( databuffer, 50, filePointer );
    printf("your lonely char is :<%s>\n", databuffer);
}
void test_putstr_fd(char *c)
{
    char    databuffer[1000];
    int fd = open("hi", O_RDWR);
    printf("reading what is inside the file.....\n");
    ft_putstr_fd(c, fd);
    FILE * filePointer;
    filePointer = fopen("hi", "r");

    fgets ( databuffer, 50, filePointer );
    printf("your lonely char is :<%s>\n", databuffer);
}

void test_ft_putendl_fd(char *c)
{
    char    databuffer[1000];
    int fd = open("hi", O_RDWR);
    printf("reading what is inside the file.....\n");
    ft_putendl_fd(c, fd);
    FILE * filePointer;
    filePointer = fopen("hi", "rw");

    fgets ( databuffer, 200, filePointer );
    printf("your lonely char is :<%s>\n", databuffer);
    
}

void test_putnbr_fd(int c)
{
    char    databuffer[1000];
    int fd = open("hi", O_RDWR);
    printf("reading what is inside the file.....\n");
    ft_putnbr_fd(c, fd);
    FILE * filePointer;
    filePointer = fopen("hi", "rw");

    fgets ( databuffer, 200, filePointer );
    printf("your lonely char is :<%s>\n", databuffer);
    
}

// void test_lstnew(char *str)
// {
// 	t_list *node = ft_lstnew(str);
// 	printf("The node content is <%s>\n", node ->content);
// }

// void test_lstaddfront(char *str)
// {
	
	
// 	t_list *new_node = ft_lstnew(ft_strdup(str));
// 	t_list **lst;
// 	char *s = "old_node";
// 	t_list *first = ft_lstnew(ft_strdup(s));
	
// 	//*lst= first;
// 	 printf("first node now is: <%s>\n", first->content);
// 	ft_lstadd_front(&first, new_node);
// 	printf("first node now is: <%s>\n", first->content);
// }

// void	test_lstsize(int n)
// {
// 	char *s = "HI";
// 	t_list	*node1 = ft_lstnew(ft_strdup(s));
// 	t_list	*node2 = ft_lstnew(ft_strdup(s));
// 	t_list	*node3 = ft_lstnew(ft_strdup(s));

// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("testing the lst siez:\n");
// 	printf("lst of size 3 == %d\n", ft_lstsize(node1));
// 	free(node2);
// 	free(node1);
// 	free(node3);
// }

// void test_lstlast()
// {
// 	char *s = "last node";
// 	//t_list	*node1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *node1 = ((void*)0);
// 	t_list	*node2 = ft_lstnew(ft_strdup("hi"));
// 	//t_list	*node3 = ft_lstnew(ft_strdup(s));

// 	//node1->next = node2;
// 	//node2->next = node3;
// 	printf("last node is %s\n", (char *)ft_lstlast(node1));
// 	free(node2);
// }

// void test_lstaddback()
// {
// 	char *s = "last node";
// 	//t_list *node1 = ((void *)0); 
// 	// t_list a;
// 	// a.content = "hi";
// 	// a.next = NULL;
// 	// node1->next = &a;
// 	t_list *head = NULL;
// 	t_list	*node1 = ft_lstnew(ft_strdup("first node"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("second node"));
// 	t_list	*node3 = ft_lstnew("third node");
// 	// node1->next = node2;
// 	// node2->next = node3;
// 	//printf("last node before lst_addback <%s>\n", ft_lstlast(node1)->content);
// 	// t_list *b = &a;
// 	//printf("%s\n", node1->next->content);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	// printf("last node after lst_addback <%s>\n", a.next->content);
// 	printf("last node after lst_addback <%s>\n", head->content);
// 	printf("last node after lst_addback <%s>\n", head->next->content);
// 	printf("last node after lst_addback <%s>\n", head->next->next->content);
// 	//free(node1);
// }
// void del(void *ptr)
// {
// 	if(ptr)
// 		free(ptr);
// }
// void test_lstdelone()
// {
// 	char *s = "last node";
// 	t_list	*node1 = ft_lstnew(ft_strdup("node 1"));
// 	//t_list *node1 = ((void*)0);
// 	t_list	*node2 = ft_lstnew(ft_strdup("node 2"));
// 	t_list	*node3 = ft_lstnew(ft_strdup(s));

// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("lst1 before deletion %s\n", node1->content);
// 	ft_lstdelone(node1, del);
// 	printf("last node is %s\n", (char *)ft_lstlast(node1));
// 	free(node2);
// }

// void test_lstclear()
// {
// 		char *s = "last node";
// 	t_list	*node1 = ft_lstnew(ft_strdup("node 1"));
// 	//t_list *node1 = ((void*)0);
// 	t_list	*node2 = ft_lstnew(ft_strdup("node 2"));
// 	t_list	*node3 = ft_lstnew(ft_strdup(s));
	
// }

// void *f(void *s)
// {
// 	char *t = "success";
// 	//s = ft_strjoin(s, t);
// 	printf("I do nothing function f\n");
// 	return (s);
// }
// void	test_lstmap()
// {
// 	char *s = "node 3";
// 	t_list	*node1 = ft_lstnew(ft_strdup("node 1"));
// 	//t_list *node1 = ((void*)0);
// 	t_list	*node2 = ft_lstnew(ft_strdup("node 2"));
// 	t_list	*node3 = ft_lstnew(ft_strdup(s));
// 	t_list *new = NULL;

// 	node1->next = node2;
// 	node2->next = node3;
// 	new = ft_lstmap(node1,f, del);
// 	printf("after lstmap <%s>\n", node1->content);
// 	printf("after lstmap <%s>\n", node2->content);
// 	printf("after lstmap <%s>\n", node3->content);	
// }

int main()
{
	// test_lstaddback();
	test_split("         ", ' ');
	// test_lstdelone();
//	test_lstaddback();
	//test_lstlast();
	//test_lstsize(3);
	//test_lstnew("testing the lst new");
	//test_lstaddfront("new item");
// test_strtrim("abcdba", "acb");
//test_strtrim("   xxxtripouille", " x");
// test_strjoin("42", "");
// test_substr("tripouille", 1, 1);
// test_substr("test", 1, 2);
// 	char src2[30]; memset(src2, 0, 30);
//char * src = (char *)"    123 45 67               89     10";
//    src2[0] = 'B';
//test_itoa(-2147483648);
// test_split(" Tripouille ", ' '); 
// 	char dest[30]; memset(dest, 0, 30);
	// char * src1 = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
//     size_t len =  3;

// char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
	//memset(dest, 'B', 4);
	//memset(dest, '1', 10);
	// check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); showLeaks();
	//  memset(dest, 0, 30); 
	//  memset(dest, '1', 10);
	// // /* 9 */ check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); showLeaks();
	// memset(dest, 0, 30); memset(dest, '1', 10);
	//test_strlcat(srcr, src1, dest, src,  3); //bus error here
	//printf("is the bus in the test\n");
	
	// test_strlcat(srcr, src1,dest, src,  5);
	//  memset(dest, 0, 30); 
	//  memset(dest, '1', 10);
	//  test_strlcat(dest, src,srcr, src1,  5);
	// memset(dest, 0, 30); memset(dest, '1', 10);
	// test_strlcat(srcr, src1,dest, src,  5);
	// test_strlcat(dest, src,srcr, src1,  5);
	// memset(dest, 0, 30); memset(dest, '1', 10);
	// test_strlcat(srcr, src1,dest, src,  5);
	// test_strlcat(dest, src,srcr, src1,  5);
	// test_memmove(s0, s0 + 2, s,sCpy,7);
	// // /* 1 */ check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); showLeaks(); //Post 0
	// // /* 2 */ check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); showLeaks(); //0 move
	// /* 3 */ check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); showLeaks(); //forward
	// /* 4 */ check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse
	// //char c = ' ';
    
     //char dst[100] = "000000000000000000000000";
     //char dst2[100] = "000000000000000000000000";
	//test_strjoin(src, src2);
	//test_strdup(src);
	//test_split(src, c);
	//test_strchr(src, c);
	//test_strchr(src, 'w');
	//test_memset(dst, dst2, 'a', 15 * sizeof(char));
	//test_memcmp(src, src2);
   
    //test_isprint(128);
	//test_itoa(2147483647);
	//test_memchr(src, 'o', len);
	//test_bzero(src, src2, len);
   //test_putnbr_fd(-32000);
    
    //test_ft_putendl_fd(src);
    
    //test_putstr_fd(src);
    //test_putchar_fd('d');
    //test_strmapi(src, addint);
   // test_striter(src, iter_addint);
    
    //test_itoa(0);
    
    //test_split(src, c);
    
    //test_strtrim(src, src2);
    
    
    //test_substr(src, 3, len  +10);
   
    //test_strdup(src2);
    
   // test_calloc(len , sizeof(long));
    // len++;
    // c++;
   // test_atoi("      + -300");
    
    //test_strnstr(src, src2, len+ 5);
    //test_strrchr(src, 'l');
    //test_toupper('A');
   // test_strlcat( src,dst,   src2 ,dst2);
   // test_strlcpy(dst, src , dst2 , src2); 
    //test_memmove(src + 2, src , src2 + 2, src2, len - 1); 
  //test_memcpy(temp2, temp, b, len);
    //for (int i = 126; i < 130 ; i++)
        //test_strlen("Hello");
}






