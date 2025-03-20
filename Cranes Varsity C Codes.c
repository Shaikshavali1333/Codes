					C





************************Sizeof()******************************************


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




***************************Swaping Numbers using temp Variable********************




// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c=a;
     a=b;
     b=c;
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    return 0;
}



*************************************ASCII Value of Char*********************************



#include <stdio.h>

int main() {
    char ch;
    printf("Enter the char: ");
    scanf("%c",&ch);
    printf("%d",ch);

    return 0;
}




**********************************Number To ASCII Values ****************************


#include <stdio.h>

int main() {
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    printf("The value of %d is %c \n",a,a);

    return 0;
}




******************************Pre and Post Increment ************************************



#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",a);//10
    printf("%d\n",++a);//11
    printf("%d\n",a++);//11
    printf("%d\n",a++);//12
    printf("%d\n",++a);//14
    printf("%d\n",a++);//14
    printf("%d\n",a);//15
    return 0;
   
}



***************************************************Pre and Post dicrement*******************




#include<stdio.h>
int main()
{
    int a=20;
    printf("%d\n",a);//20
    printf("%d\n",--a);//19
    printf("%d\n",a--);//19
    printf("%d\n",a--);//18
    printf("%d\n",--a);//16
    printf("%d\n",a--);//16
    printf("%d\n",a);//15
    return 0;
   
}



**********************************Relational Operators ******************************


#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("enter the values for a and b\n");
    scanf("%d %d",&a,&b);
    printf("Greater = %d \n",a>b);
    printf("Lesser  = %d\n",a<b);
    printf("GE      = %d \n",a>=b);
    printf("LE      = %d \n",a<=b);
    printf("Equal   = %d \n",(a==b));
    printf("Not Equal= %d \n",(a!=b));
    return 0;
   
}


*********************************Mathematical Operators********************************


#include<stdio.h>
#include<math.h>
int main()
{
    float a=0.0,b=0.0;
    printf("enter the values for a and b\n");
    scanf("%f %f",&a,&b);
    printf("sum = %f \n",a+b);
    printf("diff = %f\n",a-b);
    printf("prod = %f \n",a*b);
    printf("quo = %f \n",a/b);
    printf("rem = %f \n",fmod(a,b));
    return 0;
   
}


**************************Even or Odd ********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=0;
    scanf("%d",&a);
    if (a%2==0){
        printf("Even\n");
    }
    printf("Odd");

    return 0;
}



********************************************A number is negave or positive or Zero*********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
    printf("Zero");
}
    return 0;
}


**************************Greater than of Three Numbers *******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("a is greater");
    }
    else if(b>c){
        printf("b is greater");
    }
    else if(c>a){
        printf("c is greater");
    }

    return 0;
}



*************************** Equaileteral Triangle ********************



#include <stdio.h>

int main() {

	int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a ){
        printf("Equilatoral");
    }
    else if(a==b || b==c || c==a){
        printf("issosceles");
    }
    else{
    printf("scalene");
}
    return 0;
}



***************************Perfect Square ***************************



// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int f;
    f=sqrt(a);
    if(f*f==a){
        printf("SS");
        
    }
    else{
        printf("NS");
    }
    
    //printf("Try programiz.pro");

    return 0;
}



****************************Area of Triangle ***************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float r;
    float pi=3.14;
    scanf("%f",&r);
    float p=(pi*r*r);
    printf("%f",p);

    return 0;
}



****************************Simple Caluculator Using Switch Case **************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);
    
    switch (b)
    {
        case '+':printf("%d",a+c);
        break;
        case '-':printf("%d",a-c);
        break;
        case '*':printf("%d",a*c);
        break;
        case '/':printf("%d",a/c);
        break;
        default:printf("Error");
    }
    

    return 0;
}




******************************Vowel or Consonents  Using Switch Case ***********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("Vo");
        break;
        default:printf("Co");
        
    }
    
    

    return 0;
}



*****************************Upper or Lower Using Switch Case *****************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a;
   // __fpurge(stdio);
    scanf("%c",&a);
    switch(a)
    {
    case 'a' ... 'z':printf("Lower");
        break;
    case 'A' ... 'Z':printf("Upper");
        break;
    }

    return 0;
}



*****************************one or Two or Three digits of a number Using Switch Case *********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
   // __fpurge(stdio);
    scanf("%d",&a);
    switch(a)
    {
    case 0 ... 9:printf("S");
        break;
    case 10 ... 99:printf("D");
        break;
    case 100 ... 999:printf("T");
        break;
    default :printf("More than three digits found");
        break;
    }

    return 0;
}



***************************Call by value********************





// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
   // printf("%d %d",x,y);
    swap(x,y);
    // Write C code here
    

    return 0;
}




***********************Call by Refference*********************


#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    printf("Swapped values: %d %d\n", *x, *y);  
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);   
   // printf("Original values: %d %d\n", x, y);   
    swap(&x, &y);  

    return 0;
}



***************String Length ***********************


#include <stdio.h>

int main() {
    // Write C code here
    char c[6]="shaik";
    int i;
    //scanf("%s",&c);
    for(i=0;c[i]!='\0';i++);
    printf("%d",i);

    return 0;
}


************************n prime numbers******************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int m,c,i,j;
    for(i=1;i<=a;i++){
        m=i;
        c=0;
        for(j=2;j<m;j++){
            if(m%j==0){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%d\n",m);
    }
    }
    
   // printf("Try programiz.pro");

    return 0;
}



*************************sum of the natural numbers **************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    /*int a;
    scanf("%d",&a);
    int b=0;
    for(int i=0;i<=a;i++){
        b+=i;
    }
    printf("%d\n",b);*/
    
    /*int a,j=0;
    scanf("%d",&a);
    int b=0;
    while(j<=a){
        b+=j;
        j++;
    }
    printf("%d",b);*/
    
    int a,b=0,i=0;
    scanf("%d",&a);
    do{
        b+=i;
        i++;
    }
    while(i<=a);
    printf("%d",b);
    

    return 0;
}



********************Factorial of number *************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   /* int a;
    scanf("%d",&a);
    int fac=1;
    for (int i=1;i<=a;i++){
        fac*=i;
    }
    printf("%d",fac);*/
    
    
   /* int a,i=1;
    scanf("%d",&a);
    int fac=1;
    while(i<=a){
        fac*=i;
        i++;
    }
    printf("%d",fac);*/
    
    int a;
    scanf("%d",&a);
    int fac=1,i=1;
    do{
        fac*=i;
        i++;
    }
    while(i<=a);
    printf("%d",fac);

    return 0;
}



******************************Table printing ********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   /* int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
    }*/
    
    
    /*int a,i=1;
    scanf("%d",&a);
    while(i<=10){
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
        i++;
    }*/
    
    int a,i=1,b;
    scanf("%d",&a);
    do{
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
        i++;
    }
    while(i<=10);

    return 0;
}



*****************************GCD of a number ************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=0,b=0,gcd=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
          gcd=i;
        }
    }
    printf("%d\n",gcd);
    

    return 0;
}


*******************Right angle star printing ************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
// Write C code her|
    int a;
    scanf("%d",&a);
    for (int i=0;i<=a-1;i++){
        for(int j=0;j<=i;j++){
        printf("* ");
        }
        printf("\n");
    }
   

    return 0;
}



***********************Fliped right angle traiangle star **************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
// Write C code her|
    int a;
    scanf("%d",&a);
    for (int i=a-1;i>=0;i--){
        for(int j=0;j<=i;j++){
        printf("* ");
        }
        printf("\n");
    }
   

    return 0;
}



**************************prim numbr or not****************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int f=0;
    for(int i=2;i<(a/2);i++){
        if(a%i==0){
            f=1;
            printf("np");
            break;
        }
    }
    if(f==0)
        printf("p");

    return 0;
}



************************** odd equilateral Triangle printing(pyramid) *********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = 1; i <=a ; i++) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}



***************************************Even pyramid star printing **************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=1;i<=a;i++){
        for(j=a;j>=i;j--){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
   

    return 0;
}





************************inverted equilateral Traingle*******************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = a; i >=1 ; i--) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}

***********************************Inverted Even Pyramid star ******************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=a;i>=1;i--){
        for(j=i;j<=a;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    //printf("Try programiz.pro");

    return 0;
}




********************Odd Diamond (Rumbus) Traingle********************************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = 1; i <=a ; i++) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	
	}
	for (int i = a-1; i >=1 ; i--) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}





***********************Even Diamond (Rambus )star*************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=1;i<=a;i++){
        for(j=a;j>=i;j--){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=a-1;i>=1;i--){
        for(j=i;j<=a;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}





**************************Armstrong Number***************************



// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    //153=1^3+5^+3^3==153
    int a,r,p,s=0;
    scanf("%d",&a);
    int t=a;
    int c=0;
    while(a!=0){
        a/=10;
        c++;
    }
    while(t!=0){
         r=t%10;//3,1,5
         p=pow(r,c);//3^3,1^3,5^3
         s+=p;//27+1+125
         t/=10;//15,5,0
    }
    printf("%d",s);

    return 0;
}

 
**************************Fabanocii Series********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //0,1,1,2,3,5,8,13,21,34.......
    int a,b,c,d;
    scanf("%d",&a);
    b=0;
    c=1;
    d=b+c;
    printf("%d,%d,",b,c);
    for(int i=0;i<=a;i++){
        printf("%d,",d);
        b=c;
        c=d;
        d=b+c;
    }
    
    return 0;
}




***************************reverse a nmber using functions***********


// Online C compiler to run C program online
#include <stdio.h>
int reverse(int num);
int main() {
    // Write C code here
    int num=0;
    scanf("%d",&num);
    int res=reverse(num);
    printf("%d",res);
    //printf("Try programiz.pro");

    return 0;
}
int reverse(int num){
    int rem,rev=0;
    while(num!=0){
        rem=num%10;//32
        rev=rev*10+rem;//3
        num/=10;//12
    }
    return rev;
}



**************************Armstrong number using functions***********************




// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int armstrong(int num);
int main() {
    // Write C code here
    int num=0;
    scanf("%d",&num);
    int res=armstrong(num);
    printf("%d",res);

    return 0;
}
int armstrong(int num){
    int c=0,t=num;
    while(num!=0){
        num/=10;
        c++;
    }
    int rem,p,s=0;
    while(t!=0){
        rem=t%10;
        p=pow(rem,c);
        s+=p;
        t/=10;
    }
    return s;
}




**************************Function check*********************************



// Online C compiler to run C program online
#include <stdio.h>
void func();
void func1();
int main() {
    
    func();
    //func1();
    return 0;
}
void func(){
    printf("hellow\n");
    //func1();   //we can give before defination it can give error(compaile), so, ewe can give it after defination.
    void func1(){
        printf("hello2\n");
    }
    func1();
}



**********************************Fuction definition call by value *********************


// Online C compiler to run C program online
#include <stdio.h>
void func();
int main() {
   int a=10;
    printf("%d\n",a);
    func(a);
    printf("%d\n",a);
    //func(a);

    return 0;
}
void func(int a){
    a=a*2;
    printf("%d\n",a);
}



**********************************function call by reference**************************



// Online C compiler to run C program online
#include <stdio.h>
void func();
int main() {
   int a=10;
    printf("%d\n",a);
    func(&a);
    printf("%d\n",a);
    //func(a);

    return 0;
}
void func(int *a){
    *a=*a*2;
    printf("%d\n",*a);
}



******************************Customer care*********************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,c;
    do{
    printf("enter a number");
    scanf("%d",&a);
    if(a>0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
    printf("enter the anothe number for press 1 or exict press 0\n");
    scanf("%d",&c);
    }
    while(c!=0);
        return 0;
    

    return 0;
}





**********************************sample macro******************


// Online C compiler to run C program online
#include <stdio.h>
#define size 10
#define size 20
int main() {
    // Write C code here
    printf("%d",size);

    return 0;
}



********************Swap numbers using macro***********************



// Online C compiler to run C program online
#include <stdio.h>
#define swap(a,b) a=a+b;b=a-b;a=a-b
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);

    return 0;
}


*******************************area of circle using macro********************


// Online C compiler to run C program online
#include <stdio.h>
#define pi 3.14

int main() {
    // Write C code here
    float r;
    
    scanf("%f",&r);
    float area=pi*r*r;
    
    printf("%.2f",area);

    return 0;
}




***********************************Largest among two using macro*************************



// Online C compiler to run C program online
#include <stdio.h>
#define lar(a,b) (a>b)?a:b
int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lar(a,b));

    return 0;
}


**********************Lowe or Upper case using macro********************


// Online C compiler to run C program online
#include <stdio.h>
#define  char(ch) (ch>='A'&&ch<='Z'?printf("upper"):printf("lower"))
int main() {
    char c;
    scanf("%c",&c);
    char(c);
    
    return 0;
}



***********************************min and max of two numbers using macro ***************************


// Online C compiler to run C program online
#include <stdio.h>
#define min(a,b) (a<b)?printf("min a\nmax b"):printf("a max\nmin b")
//#define max(a,b) (a>b)?printf("min a\n"):printf("max b\n")
int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    min(a,b);
    //max(a,b);
    //printf("Try programiz.pro");

    return 0;
}

******************************even or odd using macro *****************************************


// Online C compiler to run C program online
#include <stdio.h>
#define b (a%2==0)?printf("even"):printf("odd")
int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    b;
    

    return 0;
}


**************************square and of number using macro ************************************************


// Online C compiler to run C program online
#include <stdio.h>
#define c a*a
#define d c*a

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    
    printf("%d %d",c,d);

    return 0;
}



**************************multi line macro *******************************



// Online C compiler to run C program online
#include <stdio.h>
#define e(a) \
            if(a%2==0) \
                printf("even"); \
             else \
                printf(" odd");
int main() {
    int a;
    scanf("%d",&a);
    e(a);
    return 0;
}



********************************Binary to decimal convert********************************************************


// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    long long int a;
    scanf("%lld",&a);
    int i=0,rem,dec=0;
    while(a!=0){
        rem=a%10;//1,1,1,1
        dec=dec+rem*pow(2,i);//1,3,7,15
        a/=10;//0
        i++;
    }
    printf("%lld",dec);

    return 0;
}



*********************************************LCM of two numbers********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=2,b=4;
    int gcd;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;
    printf("%d",lcm);

    return 0;
}




*********************************************Decimal to Binary convert***********************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b[10],i;
    scanf("%d",&a);
    for(i=0;a>0;i++){
        b[i]=a%2;//1,0,1
        a/=2;//2,1,0
    }
    for(i=i-1;i>=0;i--)    
{    
    printf("%d",b[i]);
}
    return 0;
}


**********************************sum of array******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);

    return 0;
}


**********************************largest element in array****************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
        
    }
    printf("%d\n",large);
    
    return 0;
}


******************************smallest element in array****************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(i=0;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
        
    }
    printf("%d\n",small);
    
    return 0;
}



**************************copy an array*************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,j,sum=0,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        a[j]=arr[i];
         printf("%d ",a[j]);
    }
   

    return 0;
}


*********************************


// Online C compiler to run C program online
#include <stdio.h>
void read(int arr[],int n);
void disp(int arr[],int n);
void large(int arr[],int n);
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n];
    read(arr,n);
    disp(arr,n);
    large(arr,n);
    
    return 0;
}
void read(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
    }
}
void large(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
         
    }
    printf("%d",sum);
}


    *********************************liner search in an array***********************


#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("Enter the size: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the Elements: ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,found=1,c=0;
    printf("Enter the key: ");
    scanf("%d",&key);
    for(int i=0;i<a;i++)
    {
        if(arr[i]==key)
        {
            found=0;
            c=i+1;
        }
        
    }
    if(found==0)
    {
        printf("%d",c);
    }
    else
    {
        printf("Number is not found");
    }

    return 0;
}

**********************************function codes**********************


// Online C compiler to run C program online
#include <stdio.h>
void read(int arr[],int n);
void disp(int arr[],int n);
void large(int arr[],int n);
void small(int arr[],int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter arr: ");
    read(arr,n);
    //disp(arr,n);
    large(arr,n);
    small(arr,n);


    return 0;
}
void read(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Array of Elements : %d",arr[i]);
    }
}

void large(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    printf("Larger Element in an Array : %d\n",large);
    
}
void small(int arr[],int n){
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    printf("Smaller Element in an Array : %d\n",small);
    
}


******************************Second Larger and Smaller Element in an Array************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int arr[n];
    int a,i,j;
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    printf("Second Largest in Array: %d\n",arr[n-2]);
    printf("Second Smallest in Array: %d\n",arr[1]);

    return 0;
}



***************************Reverse an Array*************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}

*********************************Remove duplicate Elements in an Array************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                    
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}


*****************************Binary Search in n Array******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, low, high, mid, n, key;
    printf("Enter Size of Array: ");
        scanf("%d",&n);
    printf("Enter Array Elements:", n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter the Key: ");
        scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
while(low<=high){
    if(a[mid]<key){
        low=mid+1;
    }
    else if(a[mid]==key){
        printf("%d",mid);
        return 0;
    }
    else{
        high =mid-1;
    }
        mid=(low+high)/2;
    
}
if(low > high)
printf("Not found! %d isn't present in the list: ", key);


    return 0;
}



*****************************Selection / insertions sort*************************************************


#include <stdio.h>

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int a[n], i, j, t, min;
    
    printf("Enter the Array Elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (i != min) {
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    
    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}




*************************************************Bubble sort***********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

    return 0;
}


*************************************************Matrix Input and Output**************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}



*******************************************************Transpos Matrix ******************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        printf("%d ",c[j][i]);
        }
        printf("\n");
    }
    return 0;
}


***********************************************Identical Matrix**********************************************


1	0	0

0	1	0

0	0	1



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    int identity=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j && c[i][j]!=1){
                identity=0;
            }
            else if(i!=j && c[i][j]!=0){
                identity=0;
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    if(identity==1){
        printf("Identity Matrix...!");
    }
    else{
        printf("Not Identity Matrix...!");
    }
    return 0;
}


******************************Sparse Matrix or not ************************************

0 0 1
1 0 2
0 0 0    //0 are greater than matrix elements




// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n1,n2,i,j,c=0;
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            if((a[i][j])==0)
            {
                c++;
            }
        }
    }
    if(c>((n1*n2)/2))
    {
        printf("sparse");
    }
    else
    {
        printf("not sparse");
    }
    
    //printf("Try programiz.pro");

    return 0;
}


*************************************String taking user input and print***************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    //scanf("%d",&n);
    char a[100];
    fgets(a,20,stdin);//gets(a);//scanf("%[^\n]s",a);
    printf("%s",a);

    return 0;
}



***********************************With out printing null value in string*******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[10]={'a','b','c','d','\0'};
    printf("%s\n",a);

    return 0;
}



********************************Sizeof() in String********************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[]={'a','b','c','d','\0'};
    printf("%d\n",sizeof(a));

    return 0;
}

*************************************************************************merge two arrays*************************************************

#include <stdio.h>
#include <string.h>

void mg(char a[], char b[], int r, char m[]) {
    int i, j = 0;

    for (i = 0; i < strlen(a); i++) {
        m[j] = a[i];
        j++;
    }

    for (i = 0; i < strlen(b); i++) {
        m[j] = b[i];
        j++;
    }

    for (i = 0; i < r; i++) {
        printf("%c", m[i]);
    }
}

int main() {
    char a[100], b[100];
    
    scanf(" %[^\n]s", a);
    scanf(" %[^\n]s", b);
    
    int l = strlen(a);
    int l1 = strlen(b);
    int r = l + l1; 
    
    char m[r + 1]; 
    
    mg(a, b, r, m);
    
    return 0;
}



************************Strnlen String***********************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int b=strlen(a);
    printf("%d",b);

    return 0;
}


*******************************String length user **********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    printf("%d",c);
    return 0;
}


********************************strcpy String *******************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {    
    char sur[100],des[100];
    scanf("%[^\n]s",sur);
    strcpy(des,sur);
    printf("%s",des);

    return 0;
}


************************String Copy User******************************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char sur[100],des[100];
    scanf("%[^\n]s",sur);
    for(int i=0;sur[i]!='\0';i++){
        des[i]=sur[i];
        printf("%c",des[i]);
    }
    
    

    return 0;
}


**************************strcmp String********************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    // Write C code her
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
   // __fpurge(stdin);
    scanf(" %[^\n]s",str2);
    int res=strcmp(str1,str2);
    if(res==0)
        printf("Identical..");
    else
        printf("Not Identical...");

    return 0;
}


*****************************String Comparition*********************


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    int res=0;
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
             res=str1[i]-str2[i];
        }
        i++;
    }
    if(res==0)
        printf("identical");
    else
        printf("non");
    
}


********************************strcat String*************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    strcat(str1,str2);
    printf("%s",str1);

    return 0;
}


*****************************String palindrome or not****************************************



#include <stdio.h>

int main() {
    char str[100], rev[100];
    int len = 0, i, Pali = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", rev);
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            Pali = 0;
            break;
        }
    }
    if (Pali) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


************************Sizeof()******************************************


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




***************************Swaping Numbers using temp Variable********************




// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c=a;
     a=b;
     b=c;
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    return 0;
}



*************************************ASCII Value of Char*********************************



#include <stdio.h>

int main() {
    char ch;
    printf("Enter the char: ");
    scanf("%c",&ch);
    printf("%d",ch);

    return 0;
}




**********************************Number To ASCII Values ****************************


#include <stdio.h>

int main() {
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    printf("The value of %d is %c \n",a,a);

    return 0;
}




******************************Pre and Post Increment ************************************



#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",a);//10
    printf("%d\n",++a);//11
    printf("%d\n",a++);//11
    printf("%d\n",a++);//12
    printf("%d\n",++a);//14
    printf("%d\n",a++);//14
    printf("%d\n",a);//15
    return 0;
   
}



***************************************************Pre and Post dicrement*******************




#include<stdio.h>
int main()
{
    int a=20;
    printf("%d\n",a);//20
    printf("%d\n",--a);//19
    printf("%d\n",a--);//19
    printf("%d\n",a--);//18
    printf("%d\n",--a);//16
    printf("%d\n",a--);//16
    printf("%d\n",a);//15
    return 0;
   
}



**********************************Relational Operators ******************************


#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("enter the values for a and b\n");
    scanf("%d %d",&a,&b);
    printf("Greater = %d \n",a>b);
    printf("Lesser  = %d\n",a<b);
    printf("GE      = %d \n",a>=b);
    printf("LE      = %d \n",a<=b);
    printf("Equal   = %d \n",(a==b));
    printf("Not Equal= %d \n",(a!=b));
    return 0;
   
}


*********************************Mathematical Operators********************************


#include<stdio.h>
#include<math.h>
int main()
{
    float a=0.0,b=0.0;
    printf("enter the values for a and b\n");
    scanf("%f %f",&a,&b);
    printf("sum = %f \n",a+b);
    printf("diff = %f\n",a-b);
    printf("prod = %f \n",a*b);
    printf("quo = %f \n",a/b);
    printf("rem = %f \n",fmod(a,b));
    return 0;
   
}


**************************Even or Odd ********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=0;
    scanf("%d",&a);
    if (a%2==0){
        printf("Even\n");
    }
    printf("Odd");

    return 0;
}



********************************************A number is negave or positive or Zero*********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
    printf("Zero");
}
    return 0;
}


**************************Greater than of Three Numbers *******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("a is greater");
    }
    else if(b>c){
        printf("b is greater");
    }
    else if(c>a){
        printf("c is greater");
    }

    return 0;
}



*************************** Equaileteral Triangle ********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a ){
        printf("Equilatoral");
    }
    else if(a==b || b==c || c==a){
        printf("issosceles");
    }
    else{
    printf("scalene");
}
    return 0;
}



***************************Perfect Square ***************************



// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int f;
    f=sqrt(a);
    if(f*f==a){
        printf("SS");
        
    }
    else{
        printf("NS");
    }
    
    //printf("Try programiz.pro");

    return 0;
}



****************************Area of Triangle ***************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float r;
    float pi=3.14;
    scanf("%f",&r);
    float p=(pi*r*r);
    printf("%f",p);

    return 0;
}



****************************Simple Caluculator Using Switch Case **************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);
    
    switch (b)
    {
        case '+':printf("%d",a+c);
        break;
        case '-':printf("%d",a-c);
        break;
        case '*':printf("%d",a*c);
        break;
        case '/':printf("%d",a/c);
        break;
        default:printf("Error");
    }
    

    return 0;
}




******************************Vowel or Consonents  Using Switch Case ***********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("Vo");
        break;
        default:printf("Co");
        
    }
    
    

    return 0;
}



*****************************Upper or Lower Using Switch Case *****************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a;
   // __fpurge(stdio);
    scanf("%c",&a);
    switch(a)
    {
    case 'a' ... 'z':printf("Lower");
        break;
    case 'A' ... 'Z':printf("Upper");
        break;
    }

    return 0;
}



*****************************one or Two or Three digits of a number Using Switch Case *********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
   // __fpurge(stdio);
    scanf("%d",&a);
    switch(a)
    {
    case 0 ... 9:printf("S");
        break;
    case 10 ... 99:printf("D");
        break;
    case 100 ... 999:printf("T");
        break;
    default :printf("More than three digits found");
        break;
    }

    return 0;
}



***************************Call by value********************





// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
   // printf("%d %d",x,y);
    swap(x,y);
    // Write C code here
    

    return 0;
}




***********************Call by Refference*********************


#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    printf("Swapped values: %d %d\n", *x, *y);  
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);   
   // printf("Original values: %d %d\n", x, y);   
    swap(&x, &y);  

    return 0;
}



***************String Length ***********************


#include <stdio.h>

int main() {
    // Write C code here
    char c[6]="shaik";
    int i;
    //scanf("%s",&c);
    for(i=0;c[i]!='\0';i++);
    printf("%d",i);

    return 0;
}


************************n prime numbers******************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int m,c,i,j;
    for(i=1;i<=a;i++){
        m=i;
        c=0;
        for(j=2;j<m;j++){
            if(m%j==0){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%d\n",m);
    }
    }
    
   // printf("Try programiz.pro");

    return 0;
}



*************************sum of the natural numbers **************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    /*int a;
    scanf("%d",&a);
    int b=0;
    for(int i=0;i<=a;i++){
        b+=i;
    }
    printf("%d\n",b);*/
    
    /*int a,j=0;
    scanf("%d",&a);
    int b=0;
    while(j<=a){
        b+=j;
        j++;
    }
    printf("%d",b);*/
    
    int a,b=0,i=0;
    scanf("%d",&a);
    do{
        b+=i;
        i++;
    }
    while(i<=a);
    printf("%d",b);
    

    return 0;
}



********************Factorial of number *************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   /* int a;
    scanf("%d",&a);
    int fac=1;
    for (int i=1;i<=a;i++){
        fac*=i;
    }
    printf("%d",fac);*/
    
    
   /* int a,i=1;
    scanf("%d",&a);
    int fac=1;
    while(i<=a){
        fac*=i;
        i++;
    }
    printf("%d",fac);*/
    
    int a;
    scanf("%d",&a);
    int fac=1,i=1;
    do{
        fac*=i;
        i++;
    }
    while(i<=a);
    printf("%d",fac);

    return 0;
}



******************************Table printing ********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   /* int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
    }*/
    
    
    /*int a,i=1;
    scanf("%d",&a);
    while(i<=10){
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
        i++;
    }*/
    
    int a,i=1,b;
    scanf("%d",&a);
    do{
        int b=a*i;
        printf("%d*%d=%d\n",a,i,b);
        i++;
    }
    while(i<=10);

    return 0;
}



*****************************GCD of a number ************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=0,b=0,gcd=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
          gcd=i;
        }
    }
    printf("%d\n",gcd);
    

    return 0;
}


*******************Right angle star printing ************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
// Write C code her|
    int a;
    scanf("%d",&a);
    for (int i=0;i<=a-1;i++){
        for(int j=0;j<=i;j++){
        printf("* ");
        }
        printf("\n");
    }
   

    return 0;
}



***********************Fliped right angle traiangle star **************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
// Write C code her|
    int a;
    scanf("%d",&a);
    for (int i=a-1;i>=0;i--){
        for(int j=0;j<=i;j++){
        printf("* ");
        }
        printf("\n");
    }
   

    return 0;
}



**************************prim numbr or not****************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int f=0;
    for(int i=2;i<(a/2);i++){
        if(a%i==0){
            f=1;
            printf("np");
            break;
        }
    }
    if(f==0)
        printf("p");

    return 0;
}



************************** odd equilateral Triangle printing(pyramid) *********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = 1; i <=a ; i++) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}



***************************************Even pyramid star printing **************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=1;i<=a;i++){
        for(j=a;j>=i;j--){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    //printf("Try programiz.pro");

    return 0;
}





************************inverted equilateral Traingle*******************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = a; i >=1 ; i--) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}

***********************************Inverted Even Pyramid star ******************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=a;i>=1;i--){
        for(j=i;j<=a;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    //printf("Try programiz.pro");

    return 0;
}




********************Odd Diamond (Rumbus) Traingle********************************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;//5
    scanf("%d",&a);
	for (int i = 1; i <=a ; i++) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	
	}
	for (int i = a-1; i >=1 ; i--) {
		for (int j = 1; j <= a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
    return 0;
}





***********************Even Diamond (Rambus )star*************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=1;i<=a;i++){
        for(j=a;j>=i;j--){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=a-1;i>=1;i--){
        for(j=i;j<=a;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}





**************************Armstrong Number***************************



// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    //153=1^3+5^+3^3==153
    int a,r,p,s=0;
    scanf("%d",&a);
    int t=a;
    int c=0;
    while(a!=0){
        a/=10;
        c++;
    }
    while(t!=0){
         r=t%10;//3,1,5
         p=pow(r,c);//3^3,1^3,5^3
         s+=p;//27+1+125
         t/=10;//15,5,0
    }
    printf("%d",s);

    return 0;
}

 
**************************Fabanocii Series********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //0,1,1,2,3,5,8,13,21,34.......
    int a,b,c,d;
    scanf("%d",&a);
    b=0;
    c=1;
    //d=b+c;
    //printf("%d,%d,",b,c);
    for(int i=0;i<=a;i++){
        printf("%d,",d);
        b=c;
        c=d;
        d=b+c;
    }
    
   // printf("Try programiz.pro");

    return 0;
}




***************************reverse a nmber using functions***********


// Online C compiler to run C program online
#include <stdio.h>
int reverse(int num);
int main() {
    // Write C code here
    int num=0;
    scanf("%d",&num);
    int res=reverse(num);
    printf("%d",res);
    //printf("Try programiz.pro");

    return 0;
}
int reverse(int num){
    int rem,rev=0;
    while(num!=0){
        rem=num%10;//32
        rev=rev*10+rem;//3
        num/=10;//12
    }
    return rev;
}



**************************Armstrong number using functions***********************




// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int armstrong(int num);
int main() {
    // Write C code here
    int num=0;
    scanf("%d",&num);
    int res=armstrong(num);
    printf("%d",res);

    return 0;
}
int armstrong(int num){
    int c=0,t=num;
    while(num!=0){
        num/=10;
        c++;
    }
    int rem,p,s=0;
    while(t!=0){
        rem=t%10;
        p=pow(rem,c);
        s+=p;
        t/=10;
    }
    return s;
}




**************************Function check*********************************



// Online C compiler to run C program online
#include <stdio.h>
void func();
void func1();
int main() {
    
    func();
    //func1();
    return 0;
}
void func(){
    printf("hellow\n");
    //func1();   //we can give before defination it can give error(compaile), so, ewe can give it after defination.
    void func1(){
        printf("hello2\n");
    }
    func1();
}



**********************************Fuction definition call by value *********************


// Online C compiler to run C program online
#include <stdio.h>
void func();
int main() {
   int a=10;
    printf("%d\n",a);
    func(a);
    printf("%d\n",a);
    //func(a);

    return 0;
}
void func(int a){
    a=a*2;
    printf("%d\n",a);
}



**********************************function call by reference**************************



// Online C compiler to run C program online
#include <stdio.h>
void func();
int main() {
   int a=10;
    printf("%d\n",a);
    func(&a);
    printf("%d\n",a);
    //func(a);

    return 0;
}
void func(int *a){
    *a=*a*2;
    printf("%d\n",*a);
}



******************************Customer care*********************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,c;
    do{
    printf("enter a number");
    scanf("%d",&a);
    if(a>0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
    printf("enter the anothe number for press 1 or exict press 0\n");
    scanf("%d",&c);
    }
    while(c!=0);
        return 0;
    

    return 0;
}





**********************************sample macro******************


// Online C compiler to run C program online
#include <stdio.h>
#define size 10
#define size 20
int main() {
    // Write C code here
    printf("%d",size);

    return 0;
}



********************Swap numbers using macro***********************



// Online C compiler to run C program online
#include <stdio.h>
#define swap(a,b) a=a+b;b=a-b;a=a-b
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);

    return 0;
}


*******************************area of circle using macro********************


// Online C compiler to run C program online
#include <stdio.h>
#define pi 3.14

int main() {
    // Write C code here
    float r;
    
    scanf("%f",&r);
    float area=pi*r*r;
    
    printf("%.2f",area);

    return 0;
}




***********************************Largest among two using macro*************************



// Online C compiler to run C program online
#include <stdio.h>
#define lar(a,b) (a>b)?a:b
int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lar(a,b));

    return 0;
}


**********************Lowe or Upper case using macro********************


// Online C compiler to run C program online
#include <stdio.h>
#define  char(ch) (ch>='A'&&ch<='Z'?printf("upper"):printf("lower"))
int main() {
    char c;
    scanf("%c",&c);
    char(c);
    
    return 0;
}



***********************************min and max of two numbers using macro ***************************


// Online C compiler to run C program online
#include <stdio.h>
#define min(a,b) (a<b)?printf("min a\nmax b"):printf("a max\nmin b")
//#define max(a,b) (a>b)?printf("min a\n"):printf("max b\n")
int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    min(a,b);
    //max(a,b);
    //printf("Try programiz.pro");

    return 0;
}

******************************even or odd using macro *****************************************


// Online C compiler to run C program online
#include <stdio.h>
#define b (a%2==0)?printf("even"):printf("odd")
int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    b;
    

    return 0;
}


**************************square and of number using macro ************************************************


// Online C compiler to run C program online
#include <stdio.h>
#define c a*a
#define d c*a

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    
    printf("%d %d",c,d);

    return 0;
}



**************************multi line macro *******************************



// Online C compiler to run C program online
#include <stdio.h>
#define e(a) \
            if(a%2==0) \
                printf("even"); \
             else \
                printf(" odd");
int main() {
    int a;
    scanf("%d",&a);
    e(a);
    return 0;
}



********************************Binary to decimal convert********************************************************


// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    long long int a;
    scanf("%lld",&a);
    int i=0,rem,dec=0;
    while(a!=0){
        rem=a%10;//1,1,1,1
        dec=dec+rem*pow(2,i);//1,3,7,15
        a/=10;//0
        i++;
    }
    printf("%lld",dec);

    return 0;
}



*********************************************LCM of two numbers********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=0,b=0,gcd=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
          gcd=i;
        }
    }
    int lcm=(a*b)/gcd;
    printf("%d\n",lcm);
    

    return 0;
}





*********************************************Decimal to Binary convert***********************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b[10],i;
    scanf("%d",&a);
    for(i=0;a>0;i++){
        b[i]=a%2;//1,0,1
        a/=2;//2,1,0
    }
    for(i=i-1;i>=0;i--)    
{    
    printf("%d",b[i]);
}
    return 0;
}


**********************************sum of array******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);

    return 0;
}


**********************************largest element in array****************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
        
    }
    printf("%d\n",large);
    
    return 0;
}


******************************smallest element in array****************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(i=0;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
        
    }
    printf("%d\n",small);
    
    return 0;
}



**************************copy an array*************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n],i,j,sum=0,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        a[j]=arr[i];
         printf("%d ",a[j]);
    }
   

    return 0;
}


*********************************


// Online C compiler to run C program online
#include <stdio.h>
void read(int arr[],int n);
void disp(int arr[],int n);
void large(int arr[],int n);
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n];
    read(arr,n);
    disp(arr,n);
    large(arr,n);
    
    return 0;
}
void read(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
    }
}
void large(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
         
    }
    printf("%d",sum);
}


    *********************************liner search in an array***********************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    
    int a[n],key;
    scanf("%d",&key);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter key : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
       // printf("%d",a[i]);
        if (key==a[i]){
            printf("%d",i+1);
        }
        else
        {
        printf("Number is not found!.....");
        return 0;
    }
    }

    return 0;
}

**********************************function codes**********************


// Online C compiler to run C program online
#include <stdio.h>
void read(int arr[],int n);
void disp(int arr[],int n);
void large(int arr[],int n);
void small(int arr[],int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter arr: ");
    read(arr,n);
    //disp(arr,n);
    large(arr,n);
    small(arr,n);


    return 0;
}
void read(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Array of Elements : %d",arr[i]);
    }
}

void large(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    printf("Larger Element in an Array : %d\n",large);
    
}
void small(int arr[],int n){
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    printf("Smaller Element in an Array : %d\n",small);
    
}


******************************Second Larger and Smaller Element in an Array************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int arr[n];
    int a,i,j;
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    printf("Second Largest in Array: %d\n",arr[n-2]);
    printf("Second Smallest in Array: %d\n",arr[1]);

    return 0;
}



***************************Reverse an Array*************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}

*********************************Remove duplicate Elements in an Array************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                    
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}


*****************************Binary Search in n Array******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, low, high, mid, n, key;
    printf("Enter Size of Array: ");
        scanf("%d",&n);
    printf("Enter Array Elements:", n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter the Key: ");
        scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
while(low<=high){
    if(a[mid]<key){
        low=mid+1;
    }
    else if(a[mid]==key){
        printf("%d",mid);
        return 0;
    }
    else{
        high =mid-1;
    }
        mid=(low+high)/2;
    
}
if(low > high)
printf("Not found! %d isn't present in the list: ", key);


    return 0;
}



*****************************Seletion / insetion sort*************************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n],i,j,t,min;
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n-1;j++){
            if(a[j]<a[min])//2 5 7 1 0
            {
                min=j;
            }
           if(i!=min){
               t=a[i];
               a[i]=a[min];
               a[min]=t;
           }
        }
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

    return 0;
}



*************************************************Bubble sort***********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

    return 0;
}


*************************************************Matrix Input and Output**************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}



*******************************************************Transpos Matrix ******************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        printf("%d ",c[j][i]);
        }
        printf("\n");
    }
    return 0;
}


***********************************************Identical Matrix**********************************************


1	0	0

0	1	0

0	0	1



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&c[i][j]);
        }
    }
    int identity=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j && c[i][j]!=1){
                identity=0;
            }
            else if(i!=j && c[i][j]!=0){
                identity=0;
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    if(identity==1){
        printf("Identity Matrix...!");
    }
    else{
        printf("Not Identity Matrix...!");
    }
    return 0;
}


******************************Sparse Matrix or not ************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n1,n2,i,j,c=0;
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++){
            if((a[i][j])==0)
            {
                c++;
            }
        }
    }
    if(c>((n1*n2)/2))
    {
        printf("sparse");
    }
    else
    {
        printf("not sparse");
    }
    
    //printf("Try programiz.pro");

    return 0;
}


*************************************String taking user input and print***************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    //scanf("%d",&n);
    char a[100];
    fgets(a,20,stdin);//gets(a);//scanf("%[^\n]s",a);
    printf("%s",a);

    return 0;
}



***********************************With out printing null value in string*******************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[10]={'a','b','c','d','\0'};
    printf("%s\n",a);

    return 0;
}



********************************Sizeof() in String********************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[]={'a','b','c','d','\0'};
    printf("%d\n",sizeof(a));

    return 0;
}


************************Strnlen String***********************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int b=strlen(a);
    printf("%d",b);

    return 0;
}


*******************************String length user **********************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    printf("%d",c);
    return 0;
}


********************************strcpy String *******************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {    
    char sur[100],des[100];
    scanf("%[^\n]s",sur);
    strcpy(des,sur);
    printf("%s",des);

    return 0;
}


************************String Copy User******************************

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char sur[100],des[100];
    scanf("%[^\n]s",sur);
    for(int i=0;sur[i]!='\0';i++){
        des[i]=sur[i];
        printf("%c",des[i]);
    }
    
    

    return 0;
}


**************************strcmp String********************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    // Write C code her
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
   // __fpurge(stdin);
    scanf(" %[^\n]s",str2);
    int res=strcmp(str1,str2);
    if(res==0)
        printf("Identical..");
    else
        printf("Not Identical...");

    return 0;
}


*****************************String Comparition*********************


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    int res=0;
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
             res=str1[i]-str2[i];
        }
        i++;
    }
    if(res==0)
        printf("identical");
    else
        printf("non");
    
}


********************************strcat String*************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    strcat(str1,str2);
    printf("%s",str1);

    return 0;
}


*****************************String palindrome or not****************************************



#include <stdio.h>

int main() {
    char str[100], rev[100];
    int len = 0, i, Pali = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", rev);
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            Pali = 0;
            break;
        }
    }
    if (Pali) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}



************************************************Remove Duplicate Characters in String**************************************



#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k;
    char a[100];
    scanf(" %[^\n]s", a);
    int b = strlen(a);
    
    for (i = 0; i < b; i++) {
        for (j = i + 1; j < b; j++) {
            if (a[j] == a[i]) {
                for (k = j; k < b; k++) {
                    a[k] = a[k + 1];
                }
                b--; 
                j--; 
            }
        }
    }
    
    printf("%s", a);

    return 0;
}



**************************************Frequency of character in String*******************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a[100];
    scanf(" %[^\n]s", a);
    //int b = strlen(a);
    char fr[26]={0};
    int i=0;
    while (a[i] != '\0') {
        //fr[a[i] - 'a']++;
        fr[a[i] - 'A']++;
        i++;
    }
    //a[i]='\0';
    a[i]='\0';
    for(int i=0;i<26;i++){
        if(fr[i]!=0){
             //printf("%c - %d\n",i + 'a', fr[i]);
             printf("%c - %d\n",i + 'A', fr[i]);
        }
        a[i]='\0';
    }
    
    printf("%s",fr);

    return 0;
}




*************************************************Sort a String****************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int b,i,j;
    char a[100],t;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%s",a);

    return 0;
}



********************************************Character Upper to Lower ********************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char u;
    int a;
    scanf("%c",&u);
    a=32+u;// for lower 32-a;
    printf("%c",a);

    return 0;
}



*********************************************** String Anagram*******************************


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    char a[100];
    char b[100];
    scanf("%[^\n]s",a);
    scanf(" %[^\n]s",b);
    int a1,b1;
    a1=strlen(a);
    b1=strlen(b);
    if(a1!=b1){
        printf("not anargam\n");
    }
    else{
    
    int i,j,t;
    for(i=0;i<a1;i++){
        for(j=i+1;j<a1;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    //printf("%s\n",a);
    for(i=0;i<b1;i++){
        for(j=i+1;j<b1;j++){
                 if(b[i]<b[j]){
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    //printf("%s\n",b);
    int m=1;
    for(i=0;i<a1;i++){
        if(a[i]!=b[i]){
            m=0;
        }
    }
    if(m){
        printf("ananrgam\n");
    }
    else{
    printf("not anaga");
    }
    }

    return 0;
}



**********************************************************Frequency of Number**********************************



// Online C compiler to run C program online
#include <stdio.h>
void frequency(int arr[],int n,int fr[]);


int main() {
    int n,i;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int arr[n];
    int fr[100]={0};
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        fr[i]=-1;  //-1 or 1 same result..
    }
    frequency(arr,n,fr);
    return 0;
}



void frequency(int arr[],int n,int fr[])
{
    int i,j,ctr;
    
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=ctr;
        }
    }
    for(i=0;i<n;i++){
        if(fr[i]!=0)
        {
            printf("%d occers - %d\n",arr[i],fr[i]);
        }
    }
}



*********************************************Panagram or not ********************************



// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char s[100];
    scanf(" %[^\n]s",s);
    int i = 0, j = 0;
	while (s[i])
	{
		if (s[i] != ' ')
		{
          s[j++] = s[i];
		}
		i++;
	}
	s[j] = '\0';
	/*for(i=0;s[i]!='\0';i++)
	{
	printf("%c ",s[i]);
	//i++;
	}*/
	
    int len=strlen(s);
    
    
    int k;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i]>s[j])
            {
                s[i]=s[i]+s[j];
                s[j]=s[i]-s[j];
                s[i]=s[i]-s[j];
            }
        }
    }
    /*for(i=0;i<len;i++)
    {
       s1[i]=s[i];
    }*/
    
    
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i]==s[j])
            {
                for(k=j;k<len;k++)
                {
                    s[k]=s[k+1];
                }
                j--;
            len--;
            }
            
        }
    }
    /*for(i=0;i<len;i++)
    {
        printf("%c",s1[i]);
    }*/
    
    int pen=strlen(s);
    if(pen!=26)
    {
        printf("not panagram\n");
    }
    else
    {
        printf("panagram\n");
    }

    return 0;
}


******************************Basic pointer*******************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=10;
    int *ptr=&a;
    printf("a= %p\n",a);
    printf("&a= %p\n",&a);
    printf("*&a= %p\n",*&a);
    
    printf("ptr= %p\n",ptr);
    printf("*ptr= %p\n",*ptr);
    printf("&ptr= %p\n",&ptr);

    return 0;
}



***************************************Size of Pointer***************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=10;
    int *iptr=&a;
    char b='1';
    char *cptr=&b;
    float c=2.96;
    float *fptr=&c;
    double d=8.905;
    double *dptr=&d;
    printf("%lu %lu\n",sizeof(iptr),sizeof(*iptr));
    printf("%lu %lu\n",sizeof(cptr),sizeof(*cptr));
    printf("%lu %lu\n",sizeof(fptr),sizeof(*fptr));
    printf("%lu %lu\n",sizeof(dptr),sizeof(*dptr));

    return 0;
}


*********************************Increment of pointer*******************************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=10;
    int *iptr=&a;
    
    printf("%p\n",iptr);
    iptr=iptr+5;
    printf("%p\n",iptr);
    //iptr=iptr--;
   // printf("%u\n",iptr);
    //printf("%p\n",iptr);

    return 0;
}



*********************************pointers***************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={10,20,30,40,50};
    printf("%u\n",arr);
    printf("%u\n",&arr[0]);
    printf("%u\n",&arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",2[arr]);
    printf("%d\n",(arr+2));
    printf("%d\n",*(arr+2));
    printf("%d\n",*(2+arr));
    printf("%d\n",*arr+2);
    printf("%d\n",arr[-1]);
    int *ptr=arr;
    printf("%d\n",ptr[2]);
    printf("%d\n",2[ptr]);
    printf("%d\n",*(ptr+2));
    printf("%d\n",*(2+ptr));
    ptr =&arr[3];
    printf("%d\n",ptr[-1]);

    return 0;
}




******************************pinters**************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[]="cranes";
    char *ptr=str;
    printf("%c\n",++*ptr);
    printf("%s\n",str);
    printf("%c\n",*ptr++);
    
    printf("%s\n",ptr);
    printf("%s\n",str);
    *ptr++;

    return 0;
}


************************************************


#include <stdio.h>
int main()
{
            char str[]="India";
            char *ptr=str;
    printf("%d",sizeof(ptr));//8
    printf("%d",sizeof(str));//6
            printf("string is %s \n",ptr);//India
            printf("Address of str or ptr value = %p \n",ptr);//100
            printf("%c\n", *ptr++);//I
            printf("%p\n", ptr);//101
            printf("%s\n", ptr);//ndia
            printf("%c\n", ++*ptr);//o
            printf("Actual string = %s\n",str);//Iodia

            printf("%c\n" , *--ptr);//I
            printf("%c\n" , *++ptr);//o
            printf("%c\n" , *ptr++);//o
            printf("%c\n" , *ptr--);//d

}




---------------------------------------------------------------------



#include <stdio.h>
void fun(int *arr);
int main() {
    int arr[4]={10,20,30,40};
    printf("%d\n",sizeof(arr));
    fun(arr);
    printf("%d\n",sizeof(arr));
   // arr++;

    return 0;
}
void fun(int *arr)
{
    printf("%d\n",sizeof(arr));
    arr++;
}

------------------------------------------------------------------------------


// Online C compiler to run C program online
#include <stdio.h>
void fun(int *arr);
int main() {
    int arr[4]={10,20,30,40};
    fun(arr);
    printf("In main array: \n");
    for(int i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void fun(int *arr)
{
    int i,x;
    for(int i=0;i<4;i++)
    {
        x=(*arr)++;
        printf("%d\n",*arr);
        arr++;
    }
}

--------------------------------------------------------------------------------



// Online C compiler to run C program online
#include <stdio.h>

int main()
    {
        int arr[]={10,20,30,40,50};
        int *ptr=arr; //points to the element address
        int (*pptr)[3]=&arr;// points to the address of the particular row
        printf("%u\n",ptr);//100
        printf("%u\n",pptr);//100
        printf("%d\n",*ptr);//10
        printf("%u\n",*pptr);//100
        printf("%d\n",**pptr);//10
        printf("%u\n",*pptr+1);//104
    printf("%d\n",*(*pptr+1));//20
    printf("%u\n",*pptr+3);//112
    printf("%d\n",*(*pptr+3));//40
    printf("%d\n",**pptr+3);//13
       
    printf("%d\n",sizeof(ptr));//8
    printf("%d\n",sizeof(pptr));//8
    printf("%d\n",sizeof(*ptr));//4
    printf("%d\n",sizeof(*pptr));//12
    printf("%d\n",sizeof(arr));//20
    printf("%d\n",sizeof(**pptr));//4
       
        ptr++;
        printf("%u\n",ptr);//104
       
        pptr++;    
        printf("%u\n",pptr);//112

    return 0;
}


-------------------------------------------------------------------


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[]={10,20,30,40,50};
       // int *ptr=arr; //points to the element address
        int (*ptr)[3]=&arr;
        printf("%u\n",ptr[0]);
        printf("%u\n",ptr[0]+1);
         printf("%u\n",ptr[1]+1);
    

    return 0;
}


-----------------------------------------------------------------



#include <stdio.h>
void pm(int m[][4]);
void pm(int m[][4])
{
    printf("%u\n",m);//100
    printf("%u\n",m+1);//116
    printf("%u\n",*m);//100
    printf("%u\n",*m+1);//104
    printf("%u\n",**m+1);//13
    printf("%u\n",*(*m+1));//23
    printf("%u\n",**(m+1));//56
}
int main() {
    int m[][4]={{12,23,34,45},{56,67,78,89},{21,32,43,45}};
    pm(m);
    return 0;
}


---------------------------------------------------------



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=10,b=20,c=30,d=40;
        int *ptr[4]={&a,&b,&c,&d};
        printf("%p %d\n",ptr[0],*ptr[0]);
        printf("%p %d\n",ptr[1],*ptr[1]);
        printf("%p %d\n",ptr[2],*ptr[2]);
        printf("%p %d\n",ptr[3],*ptr[3]);

    return 0;
}



-------------------------------------------------------------------------------


// Online C compiler to run C program online
#include <stdio.h>
void fun(int arr[][3]);
int main() {
    // Write C code here
    int arr[][3]={1,2,3,4,5,6,7,8};
    printf("%d\n",sizeof(arr));//
    fun(arr);
    

    return 0;
}
void fun(int arr[][3])
{
    printf("%d\n",sizeof(arr));//
    printf("%d\n",sizeof(*arr));//
    printf("%d\n",sizeof(**arr));//
}


-------------------------------------------------------------------------


***********************************************************************Matrix with array of pointers*************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[][3]={1,2,3,4,5,6,7,8};
    int (*ptr)[3]=arr;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",(*(*(ptr+i)+j)));
        }
        printf("\n");
    }

    return 0;
}


************************************************************Structure sample code***********************************************


#include <stdio.h>
struct emp
{
    int id;
    float salary;
    char name[100];
}
com={033,13000.56,"shaik"};
struct emp com1={56,89.69,"vali"};
int main() {
    struct emp com2={65,9900.69,"shaiksha"};
    printf("%d\n%f\n%s\n",com.id,com.salary,com.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com1.id,com1.salary,com1.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com2.id,com2.salary,com2.name);
    return 0;
}


*********************************************************struct for loop*********************************


#include <stdio.h>
void fun();
struct emp
{
    int id;
    float salary;
    char name[100];
}
com={033,13000.56,"shaik"},com3={25,19900.69,"shaikshavali"};//global strcture
struct emp com1={56,89.69,"vali"};
int main() {
    struct emp com2={65,9900.69,"shaiksha"};  //local structure
    printf("%d\n%f\n%s\n",com.id,com.salary,com.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com1.id,com1.salary,com1.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com2.id,com2.salary,com2.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com3.id,com3.salary,com3.name);
    fun();
    return 0;
}

void fun()
{
    printf("******************************************\n");
    printf("%d\n%f\n%s\n",com.id,com.salary,com.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com1.id,com1.salary,com1.name);
    //printf("-----------------------------------------\n");
    //printf("%d\n%f\n%s\n",com2.id,com2.salary,com2.name);
    printf("-----------------------------------------\n");
    printf("%d\n%f\n%s\n",com3.id,com3.salary,com3.name);
}

************************************struct in array*******************************************************


#include <stdio.h>

struct emp
{
    int id;
    float salary;
    char name[100];
};
    
    
    
int main() {
    int a;
    printf("Enter the element size: ");
    scanf("%d",&a);
    struct emp arr[a];
    
    for(int i=0;i<a;i++){
        scanf("%d %f %s",&arr[i].id,&arr[i].salary,arr[i].name);
        printf("------------------------------------------\n");
    }
    
    
    for(int i=0;i<3;i++){
    printf("%d\n%f\n%s\n",arr[i].id,arr[i].salary,arr[i].name);
    printf("*************************************************\n");
    }
    return 0;
}


    



***************************************************Struct in pointer***************************


#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int id;
    float salary;
    char name[100];
};
    
    
    
int main() {
    int a;
    printf("Enter the element size: ");
    scanf("%d",&a);
    struct emp *arr = (struct emp*) malloc(a * sizeof(struct emp));
    
    for(int i=0;i<a;i++){
        scanf("%d %f %s",&arr[i].id,&arr[i].salary,arr[i].name);
        printf("------------------------------------------\n");
    }
    
    
    for(int i=0;i<3;i++){
    printf("%d\n%f\n%s\n",arr[i].id,arr[i].salary,arr[i].name);
    printf("*************************************************\n");
    }
    return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int id;
    float salary;
    char name[100];
};
    
    
    
int main() {
    int a;
    printf("Enter the element size: ");
    scanf("%d",&a);
    struct emp s,*ptr;
    ptr =&s;
    
    for(int i=0;i<a;i++){
        scanf("%d %f %s",&(&s)->id,&ptr->salary,&ptr->name);
        printf("------------------------------------------\n");
    }
    
    
    for(int i=0;i<a;i++){
    printf("%d\n%f\n%s\n",ptr->id,ptr->salary,ptr->name);
    printf("*************************************************\n");
    }
    return 0;
}


    */


    

******************************struct in pass by address*********************************************



//pass by address


#include <stdio.h>
struct st
{
    int id;
    float salary;
    int name;
};
void fun(struct st *s);
    
    
int main() {
    struct st s;
    printf("before calling \n%d\n%f\n%d\n",s.id,s.salary,s.name);
    fun(&s);
    printf("after calling \n%d\n%f\n%d\n",s.id,s.salary,s.name);
    
    return 0;
}
void fun(struct st *s)
{
    s->id=10;
    s->salary=99.99;
    s->name =5;
    printf("In function calling \n%d\n%f\n%d\n",s->id,s->salary,s->name);
}

    


*****************************************************struct in pass by value*******************************




//pass by value


#include <stdio.h>
struct st
{
    int id;
    float salary;
    int name;
};
void fun(struct st s);
    
    
int main() {
    struct st s;
    printf("before calling \n%d\n%f\n%d\n",s.id,s.salary,s.name);
    fun(s);
    printf("after calling \n%d\n%f\n%d\n",s.id,s.salary,s.name);
    
    return 0;
}
void fun(struct st s)
{
    s.id=10;
    s.salary=99.99;
    s.name =5;
    printf("In function calling \n%d\n%f\n%d\n",s.id,s.salary,s.name);
}

    

*********************************************************STRUCT copy*************************************************************


// Online C compiler to run C program online
#include <stdio.h>
struct st
{
    int a;
    char ch;
    float f;
}s={2,'w',5.2};
int main() {
    struct st s1;
    s1=s;
    printf("%d %c %f\n",s.a,s.ch,s.f);
    printf("%d %c %f\n",s1.a,s1.ch,s1.f);

    return 0;
}


*******************************************************struct sizeof()********************************************************



// Online C compiler to run C program online
#include <stdio.h>

struct st
{
    char v;
    char ch;
    short int k;
    int a;
    //float f;
   // double n;
    char d[30];
}s;
int main() {
    
    printf("%d\n",sizeof(s));
   // printf("%d",sizeof(struct st));

    return 0;
}




***********************************************************struct pragma/sizeof**********************************************


// Online C compiler to run C program onlin
#include <stdio.h>
#pragma pack(4)
struct st
{
    //char v;
    char ch;
    short int k;
    int a;
    //float f;
   // double n;
    char d[27];
}s;
int main() {
    
    printf("%d\n",sizeof(s));
   // printf("%d",sizeof(struct st));

    return 0;
}



*******************************************************struct atm card**************************************************

// Online C compiler to run C program onlin
#include <stdio.h>

union un
{
    char ch;
    float k;
    int a;
}u;
int main() {
    u.ch='d';
    printf("%c\n",u.ch);
    u.k=9.28;
    printf("%f\n",u.k);
    u.a=6;
    printf("%d\n",u.a);
    printf("%d\n",sizeof(u));
    
   

    return 0;
}

********************************************typedef*******************************************************************


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    typedef int num;
    num a,b;
    printf("%lu %lu\n",sizeof(a),sizeof(b));
    typedef char ch;
    ch a1,b1;
    printf("%lu %lu\n",sizeof(a1),sizeof(b1));
    typedef int* ptr;
    ptr a2,b2;
    printf("%lu %lu\n",sizeof(a2),sizeof(b2));
    typedef int arr[10];
    arr a3,b4;
    printf("%lu %lu\n",sizeof(a3),sizeof(b4));
    typedef double db;
    db a4,b3;
    printf("%lu %lu\n",sizeof(a4),sizeof(b3));
    

    return 0;
}


*********************************************typedef struct***********************************************************


// Online C compiler to run C program online
#include <stdio.h>
struct st
{
    int a;
    char ch;
}s;
typedef struct st new;

int main() {
    new s1={12,'k'};
    printf("%lu\n",sizeof(new));
    printf("%d %c",s1.a,s1.ch);

    return 0;
}



***************************************************enum******************************************************************


// Online C compiler to run C program online
#include <stdio.h>
enum weekdays{sun,mon,tue,wed,thu,fri,sat};
int main() {
    
    printf("%d\n",sun);
    printf("%d\n",mon);
    printf("%d\n",tue);
    printf("%d\n",wed);
    printf("%d\n",thu);
    printf("%d\n",fri);
    printf("%d\n",sat);

    return 0;
}


********************************************************String replace ***************************************



#include <stdio.h>
#include <string.h>

void replaceString(char sentence[], char matchedStr[], char replaceStr[]){
    int i, j, k, found;

    for (i = 0; sentence[i] != '\0'; i++) {
        found = 1;

        for (j = 0, k = i; matchedStr[j] != '\0'; j++, k++) {
            if (sentence[k] != matchedStr[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            for (j = 0; replaceStr[j] != '\0'; j++, i++) {
                sentence[i] = replaceStr[j];
            }
        }
    }
    sentence[i] = '\0';
    printf("Replaced sentence: %s\n", sentence);
}

int main() {
    char sentence[100], matchedStr[50], replaceStr[50];

    printf("Enter the sentence: ");
        scanf(" %[^\n]s",sentence);

    printf("Enter the matched string: ");
    scanf(" %[^\n]s", matchedStr);

    printf("Enter the replacement string: ");
    scanf(" %[^\n]s", replaceStr);

    replaceString(sentence, matchedStr, replaceStr);

    

    return 0;
}


******************************************Mutiplay matrixs *************************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    printf("size of second matrix: \n");
    scanf("%d %d",&c,&d);
    int m1[a][b],m2[c][d],res[10][10];
    printf("enter the elements in first matrix: \n");
    
    
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the elements in second matrix: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    
    
    
    
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    
    
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            res[i][j]=0;
            for(int k=0;k<d;k++)
            {
                res[i][j]+=m1[i][k]*m2[k][j];
            }
        }
        printf("\n");
    }
    
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}


***********************************************STACK ******************************


// Online C compiler to run C program online
#include <stdio.h>
#define  s 5
int stack[s];
int tos=-1;
void push(int ele);
void pop(void);
void display(void);
void push(int ele)
{
    if(tos==s-1)
    {
        printf("Stack is Full\n");
        return;
    }
    tos++;
    stack[tos]=ele;
    
}
void pop(void)
{
    if(tos==-1)
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("\n popped elements is %d\n",stack[tos]);
    tos--;
}
void display(void)
{
    if(tos==-1)
    {
        printf("Stack is Empty\n");
    }
    for(int i=0;i<=tos;i++)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int main() 
{
    
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    push(40);
    display();
    pop();
    display();

    return 0;
}


******************************Queue*******************************************

#include <stdio.h>
#define s 5

int q[s];
int front = 0;
int rear = -1;

void push(int ele);
void pop(void);
void display(void);

void push(int ele) {
    if(rear == s - 1) {
        printf("Queue is Full\n");
        return;
    }
    rear++;
    q[rear] = ele;
}

void pop(void) {
    if(front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("\nPopped element is %d\n", q[front]);
    front++;
}

void display(void) {
    if(front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    for(int i = front; i <= rear; i++) {
        printf("q[%d] is %d\t",i,q[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    push(40);
    display();
    pop();
    display();

    return 0;
}


************************************Linked List***********************************


// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *next;//self referencial
};
typedef struct sll node;
node *first=NULL,*last =NULL;
void insert_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first == NULL)
    {
        new->data=ele;
        new->next=NULL;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=NULL;
        last->next=new;
        last=new;
    }
}
void display()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main() {
    insert_node(10);
    insert_node(20);
    insert_node(30);
    display();
    

    return 0;
}

*************************************************Linked List(Reverse,Sort,Search)*********************************

#include <stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *next;
};
typedef struct sll node;
node *first=NULL,*last=NULL;

void ins(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=NULL;
    if(first==NULL)
    {
        first=last=new;
    }
    else
    {
        last->next=new;
        last=new;
    }
}
void rev()
{
    node *prev=NULL;
    node *cur=first;
    node *next=NULL;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    first=prev;
    last = first;
    while (last != NULL && last->next != NULL) {
        last = last->next;
    }
}
void search()
{
    int key;
    printf("Enter the Value you want to Search: ");
    scanf("%d",&key);
    node *temp=first;
    int f=0;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("%d",f+1);
            return;
        }
        temp=temp->next;
        f++;
    }
    printf("%d - Element is not Found.....!",key);
}
void sort()
{
    node *temp=first;
    int sw;
    do
    {
        sw=0;
        temp=first;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->data > temp->next->data)
        {
            temp->data=temp->data ^ temp->next->data;
            temp->next->data=temp->data ^ temp->next->data;
            temp->data=temp->data ^ temp->next->data;
            sw=1;
        }
        temp=temp->next;
    }
    }
    while(sw);
}
void disp()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    ins(5);
    ins(10);
    ins(30);
    ins(20);
    disp();
    printf("\n");
    rev();
    disp();
    printf("\n");
    ins(90);
    ins(80);
    sort();
    disp();
    printf("\n");
    search();
    
    return 0;
}



************************************************Sum of subarray*******************************************



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n];
    int s=33,cs;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i,j;
    for(i=0;i<n;i++)
    {
        cs=arr[i];//1
        for(j=i+1;j<=n;j++)//2,3,
        {
            if(cs==s)//1==33,4==33,
            {
                printf("%d %d",i,j);
                return 1;
            }
            cs = cs + arr[j]; //4
        }
    }
    //printf("Try programiz.pro");

    return 0;
}



************************Single linked list*******************************




// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct sll
{
    int data;
    //struct sll *new;
    struct sll *next;
};
typedef struct sll node;
node *first=NULL,*last=NULL;
void creat_n(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first == NULL)
    {
        new->data=ele;
        new->next=NULL;
        first=last=new;
    }

    else
    {
        node *new=(node *)malloc(sizeof(node));
        new->data=ele;
        new->next=NULL;
        last->next=new;
        last=new;
    }
}
void insert_f(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    first=new;
}
void insert_l(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=NULL;
    last->next=new;
    last=new;
}
void insert_m(int ele)
{
    int key;
    printf("Enter where we want insert the element: ");
    scanf("%d",&key);
    
    node *temp=first,*temp1;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=temp;
    temp1->next=new;
}
void delete_f()
{
    node *temp=first;
    first=temp->next;
    free(temp);
}
void delete_l()
{
    node *temp=first,*temp1;
    while(temp!=last)
    {
        temp1=temp;
        temp=temp->next;
        
    }
    last=temp1;
    last->next=NULL;
    free(temp);
}
void delete_mid()
{
    int key;
    printf("Enter the deleted element: ");
    scanf("%d",&key);
    node *temp=first,*temp1;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}
void display()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main() {
    creat_n(5);
    creat_n(10);
    creat_n(15);
    creat_n(20);
    display();
    printf("-------------------Insert Front----------------\n");
    insert_f(30);
    display();
    printf("----------------Insert Last-------------------\n");
    insert_l(40);
    display();
    printf("-------------------Insert Mid-------------------\n");
    insert_m(60);
    display();
    printf("----------------Delete Front-------------------\n");
    delete_f();
    display();
    printf("-------------------Delete Last----------------\n");
    delete_l();
    display();
    printf("-------------------Delete Mid----------------\n");
    delete_mid();
    display();
    
    return 0;
}


************************************Doubly Linked List ************************************************


#include <stdio.h>
#include<stdlib.h>
struct dll
{
    int data;
    struct dll *prev;
    struct dll *next;//self referencial
};
typedef struct dll node;
node *first=NULL,*last =NULL;
void insert_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first == NULL)
    {
        new->data=ele;
        new->next=NULL;
        new->prev=NULL;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=NULL;
        last->next=new;
        new->prev=last;
        last=new;
    }
}
void insert_front(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    new->prev=NULL;
    first->prev=new;
    first=new;
}
void insert_last(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=NULL;
    last->next=new;
    new->prev=last;
    last=new;
}
void insert_mid(int ele)
{
    int key;
    printf("Enter the key Element: \n");
    scanf("%d",&key);
    node *temp=first;
    while(temp->data!=key)
    {
        temp=temp->next;
    }
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=temp;
    new->prev=temp->prev;
    temp->prev->next=new;
    temp->prev=new;
}
void del_front()
{
    node *temp=first;
    first=first->next;
    first->prev=NULL;
    free(temp);
}
void del_last()
{
    node *temp=first, *temp1;
    while(temp!=last)
    {
        temp1=temp;
        temp=temp->next;
    }
    last=temp1;
    last->next=NULL;
    free(temp);
}
void display()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main() {
    insert_node(10);
    insert_node(20);
    insert_node(30);
    display();
    printf("=============Insert_Front_node============\n");
    insert_front(40);
    display();
    printf("============Insert_Last_node==============\n");
    insert_last(50);
    display();
    printf("============Insert_Mid_node==============\n");
    insert_mid(25);
    display();
    printf("============Delete_Front_node==============\n");
    del_front();
    display();
    printf("============Delete_Last_node==============\n");
    del_last();
    display();
    
    
    

    return 0;
}



******************************SingleCircular Linked List***********************************************************


// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct scll
{
    int data;
    struct scll *next;//self referencial
};
typedef struct scll node;
node *first=NULL,*last =NULL;
void insert_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first == NULL)
    {
        new->data=ele;
        new->next=new;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=first;
        last->next=new;
        last=new;
    }
}
void insert_front_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    last->next=new;
    first=new;
}
void insert_last_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=first;
    last->next=new;
    last=new;
}
void insert_mid(int ele)
{
    int key;
    printf("Enter the key Element: \n");
    scanf("%d",&key);
    node *temp=first,*temp1;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->next;
    }
    node *new=(node *)malloc(sizeof(node));
    new->data=ele;
    new->next=temp;
    temp1->next=new;
    
}
void del_front()
{
    node *temp=first;
    first=first->next;
    last->next=first;
    free(temp);
}
void del_last()
{
    node *temp=first, *temp1;
    while(temp!=last)
    {
        temp1=temp;
        temp=temp->next;
    }
    last=temp1;
    temp1->next=first;
    free(temp);
}
void display()
{
    node *temp=first;
    do
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    while(temp!=first);
}
int main() {
    insert_node(10);
    insert_node(20);
    insert_node(30);
    display();
    printf("=========Insert Front node===========\n");
    insert_front_node(5);
    display();
    printf("=========Last Front node===========\n");
    insert_last_node(40);
    display();
    printf("=========Mid node===========\n");
    insert_mid(25);
    display();
    printf("=========Del Front node===========\n");
    del_front();
    display();
    printf("=========Del Last node===========\n");
    del_last();
    display();
    
    
    

    return 0;
}


*******************************************************DubllyCircular LinkedList*************************************************


#include <stdio.h>
#include<stdlib.h>
struct dcll
{
    int data;
    struct dcll *prev;
    struct dcll *next;//self referencial
};
typedef struct dcll node;
node *first=NULL,*last =NULL;
void insert_node(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first == NULL)
    {
        new->data=ele;
        new->next=new;
        new->prev=new;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=first;
        new->prev=last;
        last->next=new;
        first->prev=new;
        last=new;
    }
}

void display()
{
    node *temp=first;
    do
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    while(temp!=first);
}
int main() {
    insert_node(10);
    insert_node(20);
    insert_node(30);
    display();
    
    
    
    

    return 0;
}



*******************************************************************Linked List Reverse****************************************************



#include <stdio.h>
#include <stdlib.h>
struct dll {
    int data;
    struct dll *prev;
    struct dll *next;
};
typedef struct dll node;

node *first = NULL, *last = NULL;

void insert_node(int ele) {
    node *new = (node *)malloc(sizeof(node));   
    if (new == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new->data = ele;
    new->next = NULL;
    if (first == NULL) {
        new->prev = NULL;
        first = last = new;
    } else {
        last->next = new;
        new->prev = last;
        last = new;
    }
}

void display() 
{
    node *temp = first;
    printf("Doubly Linked List:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void reverse_list() 
{
    node *temp1 = first;
    node *temp=NULL;

    while (temp1 != NULL) 
    {
        temp = temp1->prev;
        temp1->prev = temp1->next;
        temp1->next = temp;
        temp1 = temp1->prev;
    }

    if (temp != NULL) 
    {
        last = first;
        first = temp->prev;
    }
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        insert_node(arr[i]);   
    }

    display();

    reverse_list();

    printf("Reversed Doubly Linked List:\n");
    display();

    return 0;
}





***************************************************************** Maric rotation 9degrees*************************************


// Online C compiler to run C program online
#include <stdio.h>
void r(int a, int b, int arr[a][b]);
void r(int a, int b, int arr[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=b-1;j>=0;j--)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    r(a,b,arr);

    return 0;
}



*******************************************************************N numbers recurtion**********************************************


// Online C compiler to run C program online
#include <stdio.h>
void print(int a);
void print(int a)
{
    if(a==0)
        return;
    printf("%d",a);
    print(a-1);
    //printf("%d",a);
    
    
}
int main() {
    int a;
    scanf("%d",&a);
    print(a);
    
    return 0;
}



*************************************Factorial recurtion*******************************************

// Online C compiler to run C program online
#include <stdio.h>
int fact(int n);
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
    
}
int main() {
    int n;
    scanf("%d",&n);
    int a=fact(n);
    printf("%d",a);

    return 0;
}




**************************************************************sum 0f n natura numbers recurtion **************************************************


// Online C compiler to run C program online
#include <stdio.h>
int  sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+sum(a-1);
    
}
int main() {
    int a;
    scanf("%d",&a);
    int res=sum(a);
    printf("%d",res);

    return 0;
}



*********************************************lengh of string using recurtion*********************************************************



// Online C compiler to run C program online
#include <stdio.h>
int len(char a[])
{
    int i=0;
    if(a[i]=='\0')
    {
        return 0;
    }
    return 1+len(a+1);
}
int main() {
    char a[100];
    scanf(" %[^\n]s",a);
    int s=len(a);
    printf("%d",s);

    return 0;
}



********************************************************************string copy usng recurtion *****************************************


#include <stdio.h>

void stringcopy(char a[], char b[], int i) {
    if (a[i] == '\0') {
        b[i] = '\0';  
        return;
    }
    
    b[i] = a[i];
    stringcopy(a, b, i + 1);
}

int main() {
    char a[100], b[100];
    
    printf("Enter a string: ");
    scanf("%s", a);
    
    stringcopy(a, b, 0);
    
    printf("Copied string: %s\n", b);

    return 0;
}




******************************************************Project******************************************



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for each vehicle
typedef struct Vehicle {
    char type[20];         // Type of the vehicle (e.g., Car, Truck, Bike)
    int toll;              // Toll amount for the vehicle
    struct Vehicle* next;  // Pointer to the next vehicle
} Vehicle;

// Function to create a new vehicle node
Vehicle* createVehicle(char* type, int toll) {
    Vehicle* newVehicle = (Vehicle*)malloc(sizeof(Vehicle));
    strcpy(newVehicle->type, type);
    newVehicle->toll = toll;
    newVehicle->next = NULL;
    return newVehicle;
}

// Function to add a vehicle to the linked list
void addVehicle(Vehicle** head, char* type, int toll) {
    Vehicle* newVehicle = createVehicle(type, toll);
    newVehicle->next = *head;
    *head = newVehicle;
}

// Function to calculate the total number of vehicles of each type
void countVehicleTypes(Vehicle* head, int* carCount, int* truckCount, int* bikeCount) {
    Vehicle* current = head;
    while (current != NULL) {
        if (strcmp(current->type, "Car") == 0) {
            (*carCount)++;
        } else if (strcmp(current->type, "Truck") == 0) {
            (*truckCount)++;
        } else if (strcmp(current->type, "Bike") == 0) {
            (*bikeCount)++;
        }
        current = current->next;
    }
}

// Function to calculate the total toll collected
int calculateTotalToll(Vehicle* head) {
    int totalToll = 0;
    Vehicle* current = head;
    while (current != NULL) {
        totalToll += current->toll;
        current = current->next;
    }
    return totalToll;
}

int main() {
    Vehicle* head = NULL;  // Initialize the linked list
    char type[20];
    int toll;
    char choice;
    
    // Counters for each type of vehicle and total vehicle count
    int carCount = 0, truckCount = 0, bikeCount = 0;
    int totalVehicleCount = 0;

    do {
        // Accept vehicle type and toll amount from the user
        printf("Enter vehicle type (Car, Truck, Bike): ");
        scanf("%s", type);

        printf("Enter toll amount for the vehicle: ");
        scanf("%d", &toll);

        // Add the vehicle to the list
        addVehicle(&head, type, toll);

        // Increment the total vehicle count
        totalVehicleCount++;

        // Ask the user if they want to add another vehicle
        printf("Do you want to add another vehicle? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Calculate the count of each type of vehicle
    countVehicleTypes(head, &carCount, &truckCount, &bikeCount);

    // Calculate and display the total toll collected
    int totalToll = calculateTotalToll(head);
    printf("\nTotal toll collected: %d\n", totalToll);

    // Display the count of each type of vehicle
    printf("Total number of cars: %d\n", carCount);
    printf("Total number of trucks: %d\n", truckCount);
    printf("Total number of bikes: %d\n", bikeCount);
    
    // Display the total number of vehicles
    printf("Total number of vehicles: %d\n", totalVehicleCount);

    // Free the allocated memory for the linked list
    Vehicle* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}




***********************************************************reverse the array using recurstion************************************



// Online C compiler to run C program online
#include <stdio.h>
void rev(int a[],int i)
{
    if(i>=5)
    {
        return ;
    }
    rev(a,i+1);
    printf("%d",a[i]);
}
int main() {
    int a[100]={1,2,3,4,5};
    rev(a,0);
    return 0;
}



*******************************************************************************Revered Liked List Usng Recursion ********************


// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct sll
{
    int data;
    struct sll *next;
};
typedef struct sll node;
node *first=NULL,*last=NULL;
void insert_ele(int ele)
{
    node *new=(node *)malloc(sizeof(node));
    if(first==NULL)
    {
        new->data=ele;
        new->next=NULL;
        first=last=new;
    }
    else
    {
        new->data=ele;
        new->next=NULL;
        last->next=new;
        last=new;
    }
}
node* Reverse_Recursive(node *cur, node *prev) 
{
    if (cur==NULL) 
    {
        return prev;
    }
    node *next=cur->next;
    cur->next=prev;
    return Reverse_Recursive(next, cur);
}

void Reverse_Linked_List() 
{
    last=first;
    first=Reverse_Recursive(first, NULL);
}
void disp()
{
    node *temp=first;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main() {
    insert_ele(5);
    insert_ele(10);
    insert_ele(20);
    insert_ele(30);
    disp();
    printf("\nReversed Linked List: \n");
    Reverse_Linked_List();
    disp();
    printf("\n");
    insert_ele(40);
    insert_ele(50);
    disp();
    
    return 0;
}



*********************************************************Reverse an Array (swap) ***************************************************



// Online C compiler to run C program online
#include <stdio.h>
void Reverse_an_array(int n,int *arr);
int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of an aray: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse_an_array(n,arr);

    return 0;
}
void Reverse_an_array(int n,int *arr)
{
    int temp;
    for(int i=0;i<=n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}



**************************************************************
