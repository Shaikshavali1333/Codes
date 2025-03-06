#include<stdio.h>
int main()
{
    char ch='k';
    printf("size of int = %u\n",sizeof(int));//4
    printf("size of char = %u\n",sizeof(char));//1
    printf("size of float = %u\n",sizeof(float));//4
    printf("size of double = %u\n",sizeof(double));//8
    printf("size of 'a' = %u\n",sizeof('a'));//4
    printf("size of 45 = %u\n",sizeof(45));//4
    printf("size of 4.56 = %u\n",sizeof(4.56f));//4
    printf("size of 56789.090 = %u\n",sizeof(56789.090));//8
    printf("size of char var = %u\n",sizeof(ch));//1
    printf("size of short = %u\n",sizeof(short));//2
    printf("size of long = %u\n",sizeof(long));//4 or 8
    printf("size of long double = %u\n",sizeof(long double));//12 or 16
    return 0;
   
}
