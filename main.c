/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\b");
    return 0;
}
*/
/*#include<stdio.h>
int a=20;//global variable
int main(){
    int b=30;//local variable
    {
        int a=40;//local variables here local vairable preceeds over the gobal variables
        printf("a = %d\n",a);
    }
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b;
    float c;
    printf("Input the values of a, b and float value c : ");
    scanf("%d%d%f",&a,&b,&c);
    printf("a = %d\nb = %d\nc = %f\n",a,b,c);
return 0;
}
*/
//sizeof operator
/*#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    long double e;
    printf("Size of integer is %d\n",sizeof(a));
    printf("Size of float is %d\n",sizeof(b));
    printf("Size of character is %d\n",sizeof(c));
    printf("Size of double is %d\n",sizeof(d));
    printf("Size of long double is %d\n",sizeof(e));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition of a and b is %d\n",c);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c=(float)a/b;
    printf("Divison of a and b is %f\n",c);
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Input the values of a and b : ");
    scanf("%f%f",&a,&b);
    c=fmod(a,b);
    printf("Remainder of a and b is %f\n",c);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int z = 10/2 + 5%4 + (6*2 - 2*2);
    printf("Z = %d\n",z);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    printf("a > b = %d\n",(a>b));
    printf("a >= b = %d\n",(a>=b));
    printf("\'a\' == \'a\' = %d\n",('a'== 97));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    float a=0.2,b=0.5;
    if(a==0.2f)printf("Both are equal\n");
    else printf("Both are not equal\n");
    if(b==0.5f)printf("Both are equal\n");
    else printf("Both are not equal\n");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=20,b=10,c=5,d=7;
    printf("20>10 && 5<7 = %d\n",(a>b&&c<d));
    printf("20<10 || 5<7 = %d\n",(a<b||c<d));
    printf("%d\n",(a>b&&(c=c+5)>7));
    printf("c = %d\n",c);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=20,b=10,c;
    c=(a<b?a:b);
    printf("C = %d\n",c);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=40,b=60,c=20,d;
    d = a>b?(a>c?a:c):(b>c?b:c);
    (a%2==0)?printf("Even\n"):printf("Odd\n");
    printf("Largest number = %d\n",d);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=20,b=16;
    printf("a & b = %d\n",(a&b));
    printf("a | b = %d\n",(a|b));
    printf("a ^ b = %d\n",(a^b));
    printf("a >> 2 = %d\n",(a>>2));
    printf("31 >> 3 = %d\n",(31>>3));
    printf("~5 = %d\n",(~5));
    printf("~-5 = %d\n",(~-5));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=20,b=9;
    a&&b?printf("True"):printf("False");
    a&b?printf("True"):printf("False");
    a&1?printf("odd"):printf("even");
    b&1?printf("odd"):printf("even");
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=20,b=16;
    printf("Before Swapping a = %d and b = %d\n",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swapping a = %d and b = %d\n",a,b);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("a++ = %d\n",a++);
    printf("++a = %d\n",++a);
    printf("b-- = %d\n",b--);
    printf("--b = %d\n",--b);
    c = a++ * 10;
    printf("c = %d\na = %d\n",c,a);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=20;
    a+=5;//here a becomes 25
    printf("a = %d\n",a);
    a/=5;//here 25 is divided by 5 so a becomes 5
    printf("a = %d\n",a);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=(2,3,4);
    int i=5;
    int b=(i++,i++,i++);
    printf("a = %d\n",a);
    printf("b = %d\ni = %d\n",b,i);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=20,b=10;
    a+=b+=5;
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=20,b=10,c=5,d;
    d=a>b+c;
    printf("d = %d\n",d);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=10,j;
    j=sizeof(++i);
    printf("i = %d\nj = %d\n",i,j);
    printf("%d\n",sizeof('\0'));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a=printf("Hello World");
    int b,c;
    b=scanf("%d",&c);
    printf("a = %d\nb = %d\n c =%d\n",a,b,c);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int ba,y,m,d;
    printf("Input the babies age in number of days : ");
    scanf("%d",&ba);
    y = (ba/365);
    m = (ba%365)/30;
    d = (ba%365)%30;
    printf("Babies age is %d years %d months and %d days\n",y,m,d);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    float f,c;
    printf("Input the celcius : ");
    scanf("%f",&c);
    f = (c * 1.8)+32;
    printf("%.2fF = %.2f%cC\n",f,c,248);
    return 0;
}
*/
/*#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area;
    printf("Input the radius of the circle : ");
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("Area of the circle = %.2f\n",area);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d",&num);
    if(num>=0){
            printf("Positive number");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int age;
    printf("Input the age of the person : ");
    scanf("%d",&age);
    if(age>=18)printf("Eligible to vote\n");
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d",&num);
    if(num%2==0){
            printf("Even\n");
    }else{
            printf("Odd\n");
    }
    return 0;
}
*/
//Write a program to get character as input and convert lower case to upper case and upper case to lower case
/*#include<stdio.h>
int main()
{
    char lch1='a',lch2='z';
    char uch1='A',uch2='Z';
    char dch1='0',dch2='9';
    printf("ASCII Value for a = %d and z = %d\n",lch1,lch2);
    printf("ASCII value for A = %d and Z = %d\n",uch1,uch2);
    printf("ASCII value for 0 = %d and 9 = %d\n",dch1,dch2);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){ch = ch - 32;}
    else{ch = ch + 32;}
    printf("Converted character is %c\n",ch);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){printf("Vowels");}
    else{printf("Not a vowel");}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){printf("Lower case");}
    else if(ch>='A'&&ch<='Z'){printf("Upper case");}
    else if(ch>='0'&&ch<='9'){printf("Digit");}
    else{printf("Special character");}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char gen;
    int age;
    printf("Input the age of the employee : ");
    scanf("%d",&age);
    fflush(stdin);
    printf("Input the gender of the employee : ");
    scanf("%c",&gen);
    if((gen=='m'||gen=='M')&&age>=30){printf("He needs insurance");}
    else if((gen=='f'||gen=='F')&&age>=25){printf("She needs insurance");}
    else {printf("No need insurance");}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int sideA,sideB,sideC;
    printf("Input the three sides of the triangle : ");
    scanf("%d%d%d",&sideA,&sideB,&sideC);
    if(sideA==sideB&&sideA==sideC){printf("Equilateral");}
    else if(sideA==sideB||sideA==sideC||sideB==sideC){printf("Isoceles");}
    else {printf("Scalene");}
    return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("Input the values of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    d = b * b - 4 * a * c;
    if(d==0){
        printf("Roots are real and equal\n");
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("Roots are x1 = %.2f and x2 = %.2f\n",x1,x2);
    }else if(d>0){
        printf("Roots are real and different\n");
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are x1 = %.2f and x2 = %.2f\n",x1,x2);
    }else{
        printf("Roots are imaginary\n");
    }
    return 0;
}*/
//Electricity bill calcualtion
/*#include<stdio.h>
int main()
{
    int units;
    float charges;
    printf("Input the units consumed : ");
    scanf("%d",&units);
    if(units<=200){charges = 0.5 *units;}
    else if(units>200&&units<400){charges = 100 + 0.68 * (units-200);}
    else if(units>400&&units<600){charges = 230 + 0.85 * (units-400);}
    else {charges = 380 + (units - 600);}
    printf("Charges are %.2f for %d units consumed\n",charges,units);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is largest\n",a);
        }else{
          printf("%d is largest\n",c);
        }
    }else{
        if(b>c){
            printf("%d is largest\n",b);
        }else{
        printf("%d is largest\n",c);
        }
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int pin_num;
    long int amount;
    printf("Input the pin number : ");
    scanf("%d",&pin_num);
    if(pin_num>=1111&&pin_num<=9999){
        printf("Aurhtorized Entry\n");
        printf("Enter the amount : ");
        scanf("%ld",&amount);
        if(amount%100==0){
            printf("%ld withdrawn\n",amount);
        }else{
            printf("Unable to dispense cash......\n");
        }
    }else{
        printf("UnAuthorized Entry\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Input a character\n");
    ch=getchar();
    if(islower(ch)){printf("Lower case");}
    if(isupper(ch)){printf("Upper case");}
    if(isdigit(ch)){printf("Digit");}
    return 0;
}*/
/*#include<stdio.h>
#include<ctype.h>
int main()
{
   char ch;
   printf("Input a character\n");
   ch=getchar();
   if(islower(ch)){ch=toupper(ch);}
   else ch=tolower(ch);
   printf("Converted character is %c\n",ch);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int day;
    printf("Input a day between(1-7)\n");
    scanf("%d",&day);
    switch(day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Input only numbers between 1-7\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    printf("Input a number");
    scanf("%d",&num);
    switch(num-2){
        case 1:
            printf("ONE ");
            break;
        case 3:
            printf("TWO ");
            break;
        default:
            printf("Input numbers between 1-4\n");
            break;
        case 2:
            printf("THREE ");
            break;
        case 5-1:
            printf("FOUR ");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    ch=getchar();
    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowels");
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Digit");
        break;
    default:
        printf("consonant");
    }
    return 0;
}
*/
/*#include<stdio.h>
#define MAX 3
int main()
{
    int num;
    printf("Input a number(1-4) : ");
    scanf("%d",&num);
    switch(num){
        printf("Inside switch case");//for this we will get code has no effect
        case 1:
            printf("ONE ");
            break;
        case 2:
            printf("TWO");
            break;
        case MAX:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
    }
    return 0;
}*/
/*#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Input a character\n");
    ch=getchar();
    if(isalpha(ch)){
        switch(tolower(ch)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowels");
        }
    }
    else if(isdigit(ch)){printf("Digit");}
    else printf("Special character");
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int choice=0;
    int a,b,c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    printf("\n\t1. Press 1 for addition");
    printf("\n\t2. Press 2 for subtraction");
    printf("\n\t3. Press 3 for multiplication");
    printf("\n\t4. Press 4 for division");
    printf("\n\t5. Press 5 for exit");
    printf("\nSelect your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            c=a+b;
            printf("Addition of two numbers is %d\n",c);
            break;
        case 2:
            c=a-b;
            printf("Subtraction of two numbers is %d\n",c);
            break;
        case 3:
            c=a*b;
            printf("Multiplication of two numbers is %d\n",c);
            break;
        case 4:
            c=a/b;
            printf("Divison of two numbers is %d\n",c);
            break;
        case 5:
            exit(0);
        }
    return 0;
}
*/
//Printing the natural numbers from 1 tp 10
/*#include<stdio.h>
int main()
{
    int num=1;
    while(num<=10){
        printf("%d\t",num);
        num++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int num=1;
    do{
        printf("%d\t",num);
        num++;
    }while(num<=10);
    return 0;
}

#include<stdio.h>
int main()
{
    int num=1;
    for(;num<=10;num++){
        printf("%d\t",num);
    }
    return 0;
}
*/
//Finding the factorial of a number
/*#include<stdio.h>
int main()
{
    int num;
    long int fact=1l;
    printf("Input a number : ");
    scanf("%d",&num);
    while(num>=1){
        fact *= num;
        num--;
    }
    printf("Factorial of the number is %ld\n",fact);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    long int fact=1l;
    printf("Input a number : ");
    scanf("%d",&num);
    do{
        fact *= num;
        num--;
    }while(num>=1);
    printf("Factorial of the number is %ld\n",fact);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    long int fact=1l;
    printf("Input a number : ");
    scanf("%d",&num);
    for(;num>=1;num--){
        fact*=num;
    }
    printf("Factorial of number is %ld\n",fact);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    long int num;
    int ld,fd;
    printf("Input any digit number : ");
    scanf("%ld",&num);
    ld=num%10;
    while(num>=10){
        num/=10;
    }
    fd=num;
    printf("First digit = %d last digit = %d\n",fd,ld);
    return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    long int num,onum,rem,anum=0;
    int count=0;
    printf("Input any digit number : ");
    scanf("%ld",&num);
    onum=num;
    while(num!=0){
            count++;
            num/=10;
    }
    printf("Number of digits of the number is %d\n",count);
    num=onum;
    while(num!=0){
        rem = num%10;
        anum += pow(rem,count);
        num/=10;
    }
    if(anum==onum){printf("Armstrong number");}
    else{printf("Not an armstrong number");}
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    long int num,rnum=0,onum;
    int rem;
    printf("Input any digit number : ");
    scanf("%ld",&num);
    onum=num;
    while(num!=0){
        rem = num%10;
        rnum = rnum * 10 + rem;
        num/=10;
    }
    printf("Reverse of the number is %ld\n",rnum);
    if(rnum==onum){printf("Palindrome");}
    else{printf("Not a palindrome");}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    long int num,rnum=0,onum;
    int count=0;
    printf("Input any digit number : ");
    scanf("%ld",&num);
    onum=num;
    while(num!=0){
        count++;
        num/=10;
    }
    num=onum;
    while(num!=0){
        rnum = rnum * 10 +(num%10);
        num/=10;
    }
    while(rnum!=0){
        switch(rnum%10){
        case 0:
            printf(" ZERO");
            break;
        case 1:
            printf(" ONE");
            break;
        case 2:
            printf(" TWO");
            break;
        case 3:
            printf(" THREE");
            break;
        case 4:
            printf(" FOUR");
            break;
        case 5:
            printf(" FIVE");
            break;
        case 6:
            printf(" SIX");
            break;
        case 7:
            printf(" SEVEN");
            break;
        case 8:
            printf(" EIGHT");
            break;
        case 9:
            printf(" NINE");
        }
        switch(count){
        case 4:
            printf(" Thousand");
            break;
        case 3:
            printf(" Hundred");
            break;
        case 5:
        case 2:
            printf("TY");
            break;
        case 1:
            printf(" ");
            break;
        }
        rnum/=10;
        count--;
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char choice;
    int a,b,c;
    float d;
    do{
        printf("Input the values of a and b : ");
        scanf("%d%d",&a,&b);
        fflush(stdin);
        printf("\n\t1.Press + for addtion");
        printf("\n\t2.Press - for subtraction");
        printf("\n\t3.Press * for multiplication");
        printf("\n\t4.Press / for divison");
        printf("\n\t5.Press @ for exit");
        printf("\nInput the choice : ");
        scanf("%c",&choice);
        switch(choice){
            case '+':
                c=a+b;
                printf("Addition of a and b is %d\n",c);
                break;
            case '-':
                c=a-b;
                printf("Subtraction of a and b is %d\n",c);
                break;
            case '*':
                c=a*b;
                printf("Multiplication of a and b is %d\n",c);
                break;
            case '/':
                d=(float)a/b;
                printf("Divison of a and b is %.2f\n",d);
                break;
            case '@':
                exit(0);
        }
    }while(choice!='@');
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=10;i<=10||j>=1;i++,j--){
        printf("%d\t%d\n",i,j);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char ch;
    for(ch='a';ch<='z';ch++){
        printf("%c\t",ch);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num,i;
    printf("Input a number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,(num*i));
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num,i;
    printf("Input a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){printf("%d\t",i);}
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Input a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){count++;}
    }
    if(count==2){printf("Prime Number");}
    else {printf("Not a Prime Number");}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    printf("Input the two numbers : ");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1&&i<=num2;i++){
        if((num1%i==0)&&(num2%i==0)){gcd=i;}
    }
    printf("Greatest common divisor of %d and %d is %d\n",num1,num2,gcd);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int t1=1,t2=1,nt,num,i;
    printf("Input a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d\t",t1);
        nt = t1 + t2;
        t1=t2;
        t2=nt;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int rows=6,i,j;
    for(i=rows;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int rows=5,i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int space,i,rows=5,k=0;
    for(i=1;i<=rows;i++,k=0){
       for(space=1;space<=rows-i;space++){
                    printf(" ");
       }
       while(k!=2*i-1){
        printf("*");
        k++;
       }
       printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i,j,rows=5;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr[8],i;
    printf("Input the 8 elements of the array : ");
    for(i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    printf("---------DISPLAYING THE ARRAY ELEMENTS------------\n");
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
//Finding the sum and average of elements of an array
/*#include<stdio.h>
int main()
{
    int arr[6],i,sum=0;
    float avg;
    printf("Input the 6 elements of the array : ");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++){
        sum+=arr[i];
    }
    avg = (float)sum/6;
    printf("Sum = %d\n avergae = %f\n",sum,avg);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is %d\n",size);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int noe,sum=0,i,ele;
    float avg;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    for(i=0;i<noe;i++){
        scanf("%d",&ele);
        if(ele<0)goto display;
        sum+=ele;
    }
display: avg = (float)sum/i;
printf("Sum = %d\nAverage = %f\n",sum,avg);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=30;i++){
        if(i%2==0)printf("%d\t",i);
        else continue;
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i=1;
    for(;;){
        if(i==20)break;
        if(i>=10&&i<=15){i++;continue;}
        printf("%d\t",i);
        i++;
    }
    return 0;
}*/
//In c language when we intialize array to less than its size rest of the elements will be
//intialized to zero
/*#include<stdio.h>
int main()
{
    int arr[8]={10,20};
    int i;
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
//Finding the largest and smallest element in an array
/*#include<stdio.h>
int main()
{
    int arr[100],noe,i,le,se,count=0;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    printf("Input the %d elements of the array : ",noe);
    for(i=0;i<noe;i++){
        scanf("%d",&arr[i]);
    }
    le=arr[0];
    se=arr[0];
    for(i=0;i<noe;i++){
        if(arr[i]>le){le=arr[i];}
        if(arr[i]<se){se=arr[i];}
    }
    printf("Largest element = %d\nSmallest Element =%d\n",le,se);
    printf("-------DISPLAYING THE ARRAY----------------\n");
    for(i=0;i<noe;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr[100],earr[100],oarr[100],noe,i,counte=0,counto=0;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    printf("Input the %d elements of the array : ",noe);
    for(i=0;i<noe;i++){scanf("%d",&arr[i]);}
    for(i=0;i<noe;i++){
        if(arr[i]%2==0){
            earr[counte]=arr[i];
            counte++;
        }else{
            oarr[counto]=arr[i];
            counto++;
        }
    }
    printf("\n----------DISPLAYING EVEN NUMBERS OF THE ARRAY--------------\n");
    for(i=0;i<counte;i++){printf("%d\t",earr[i]);}
    printf("----------DISPLAYING ODD NUMBERS OF THE ARRAY----------------\n");
    for(i=0;i<counto;i++){printf("%d\t",oarr[i]);}
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr[100],noe,pos,i;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    printf("Input the %d elements of the array : ");
    for(i=0;i<noe;i++){scanf("%d",&arr[i]);}
    printf("Input the position where to insert the element : ");
    scanf("%d",&pos);
    for(i=pos-1;i<noe;i++){
        arr[i]=arr[i+1];
    }
    printf("\n-----------RESULTANT ARRAY--------------\n");
    for(i=0;i<noe-1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int arr[6]={12,13,72,86,42,54};
    int i,j,temp,flag=0;
    for(i=0;i<5;i++){
            printf("%d passes\n",i);
        for(j=0;j<5;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==1){flag=0;}
        else break;
    }
     printf("\n------SORTED ARRAY------------\n");
    for(i=0;i<6;i++){printf("%d\t",arr[i]);}
    return 0;
}
*/
//linear search
/*#include<stdio.h>
int main()
{
    int arr[8]={67,46,98,23,12,54,37,18};
    int ele,i;
    printf("Enter the element to be searched : ");
    scanf("%d",&ele);
    for(i=0;i<8;i++){
        if(ele==arr[i]){printf("Element found at position %d\n",(i+1));break;}
    }
    if(i==8){printf("Element not found");}
    return 0;
}
*/
/*#include<stdio.h>
#define CITY 2
#define WEEK 7
int main()
{
    int data[CITY][WEEK];
    int i,j;
    for(i=0;i<CITY;i++){
            printf("Input the city %d weekly temperature\n",(i+1));
        for(j=0;j<WEEK;j++){
            scanf("%d",&data[i][j]);
        }
    }
    printf("---------DISPLAYING CITIES WEEKLY TEMPERATURE---------------\n");
    for(i=0;i<CITY;i++){
            printf("CITY : %d : ",(i+1));
        for(j=0;j<WEEK;j++){
            printf("%d\t",data[i][j]);
        }
    printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr1[3][3]={
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };
       int rarr[3][3];
       int i,j;
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            rarr[i][j]=arr1[j][i];
        }
       }
       printf("----------RESULTANT ARRAY-------------\n");
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",rarr[i][j]);
        }
        printf("\n");
       }
       return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int arr[2][3][4]={
                        { {1,2,3,4},{5,6,7,8},{9,10,11,12} },
                        { {13,14,15,16},{17,18,19,20},{21,22,23,24} }
                    };
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
*/
//strings
/*#include<stdio.h>
int main()
{
    char str1[8]="Welcome";
    char str2[8]={'W','e','l','c','o','m','e','\0'};
    printf("%s\n",str1);
    printf("%s\n",str2);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char str[30];
    printf("Input a string: ");
    scanf("%[^\n]s",str);
    printf("String : %s\n",str);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char str[30];
    printf("Input a string : ");
    gets(str);
    printf("%s",str);
    puts(str);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char str[30];
    printf("Input a string : ");
    fgets(str,30,stdin);
    fputs(str,stdout);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char str[30],ch;
    int i=0;
    printf("Input a string  : ");
    while((ch=getchar())!='\n'){
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("String : %s\n",str);
    return 0;
}
*/
//How to find the length of the string
/*#include<stdio.h>
int main()
{
    char str[30];
    int len=0;
    printf("Input a String : ");
    scanf("%[^\n]",str);
    while(str[len]!='\0'){len++;}
    printf("Length of the string is %d\n",len);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    int i;
    printf("Input a String : ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++){str2[i]=str1[i];}
    str2[i]='\0';
    puts(str2);
    return 0;
}
*/
//how to contactenate two strings
/*#include<stdio.h>
int main()
{
    char str1[60],str2[30];
    int i=0,j;
    printf("Input a string : ");
    gets(str1);
    printf("Input another string : ");
    gets(str2);
    while(str1[i]!='\0'){i++;}
    for(i,j=0;str2[j]!='\0';i++,j++){str1[i]=str2[j];}
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}
*/
//How to reverse a string
/*#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    int i,end,len=0;
    printf("Input a string : ");
    gets(str1);
    while(str1[len]!='\0'){len++;}
    end=len-1;
    for(i=0;i<len;i++,end--){
        str2[i]=str1[end];
    }
    str2[i]='\0';
    printf("Reverse of string is %s\n",str2);
    for(i=0;i<len;i++){
        if(str1[i]!=str2[i]){printf("Not a palindrome");break;}
    }
    if(i==len){printf("Palindrome");}
    return 0;
}
*/
//How to check the frequency of occurence of a character in a string
/*#include<stdio.h>
int main()
{
    char str[40],ch;
    int i=0,freq=0;
    printf("Input a string : ");
    gets(str);
    printf("Input a character to find its frequency of occurence: ");
    ch=getchar();
    while(str[i]!='\0'){
        if(str[i]==ch){++freq;}
        i++;
    }
    printf("Frequency of occurence of %c is %d\n",ch,freq);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char str[50];
    int i,v=0,c=0,d=0,s=0;
    printf("Input a string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){++v;}
        if(str[i]>='a'&&str[i]<='z'){++c;}
        if(str[i]>='0'&&str[i]<='9'){++d;}
        if(str[i]==' '){++s;}
    }
    printf("Number of vowels is %d, consonants is %d, digits is %d and spaces is %d\n ",v,c,d,s);
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="we are learning c tutorials";
    char str1[30];
    char str2[30];
    int len=strlen(str);
    printf("Length of the string is %d\n",len);
    strcpy(str1,str);
    strcpy(str2,"Naresh Technologies");
    printf("String 1 is %s\nString 2 is %s\n",str1,str2);
    return 0;
}
*/
//how to check a string is palidrome or not using built in functions or library functions
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    printf("Input the string 1 : ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)==0){printf("It is a palidrome");}
    else{printf("Not a palindrome");}
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5]="arun";
    char str2[5]="arun";
    printf("%d\n",strcmp(str1,str2));
    return 0;
}
*/
//function without return value and without arguments
/*#include<stdio.h>
void add();//function declaration or function prototype
int main()
{
    add();//call by value
    return 0;
}
void add(){
    int a,b,c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition of two numbers is %d\n",c);
}

//function with return value and with arguments
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Addition of two numbers is %d\n",c);
    return 0;
}
int add(int a,int b){
return a+b;
}
//function with return value and without arguments
#include<stdio.h>
int add();
int main()
{
    int c;
    c=add();
    printf("Addition of two numbers is %d\n",c);
    return 0;
}
int add(){
int a,b;
printf("Input the values of a and b : ");
scanf("%d%d",&a,&b);
return a+b;
}

//function without return value and with arguments
#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y){
printf("Addition of two numbers is %d\n",(x+y));
}
*/
/*#include<stdio.h>
int main()
{
    int a=10;
    int *ip;
    ip=&a;
    printf("Value of a is %d\n",a);
    printf("Value of a is %d\n",*ip);
    printf("Value of a is %d\n",*(&a));
    printf("Address of a is %p\n",&a);
    printf("Address of a is %p\n",ip);
    return 0;
}
*/
/*#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Input the values of a and b :");
    scanf("%d%d",&a,&b);
    printf("Before swapping a = %d and b = %d\n",a,b);
    swap(&a,&b);//call by refernce
    printf("After swapping a = %d and b = %d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
*/
#include<stdio.h>
#include<math.h>
int armstrongNumber(int num);
int main()
{
    int flag,i;
    for(i=10;i<=10000;i++){
        flag = armstrongNumber(i);
        if(flag){printf("%d\t",i);}
        else{continue;}
    }
    return 0;
}
int armstrongNumber(int num){
int count=0,onum,rem,anum=0;
onum=num;
while(num!=0){
        ++count;
        num/=10;
}
num=onum;
while(num!=0){
        rem = num %10;
        anum = anum + pow(rem,count);
        num/=10;
}
if(anum==onum){return 1;}
else{return 0;}
}

//Wrtie  a program to print prime numbers between 1 to 100
/*#include<stdio.h>
int primeNumber(int num);
int main()
{
    int flag,i;
    for(i=2;i<=100;i++){
        flag = primeNumber(i);
        if(flag){printf("%d\t",i);}
        else{continue;}
    }
    return 0;
}
int primeNumber(int num){
int i,count=0;
for(i=1;i<=num;i++){
    if(num%i==0){++count;}
    else continue;
}
if(count==2){return 1;}
else return 0;
}
*/
//passsing one element of array and displaying it
/*#include<stdio.h>
void display(int);
int main()
{
    int arr[6]={11,12,13,14,15,16};
    int i;
    for(i=0;i<6;i++){
        display(arr[i]);
    }
    return 0;
}
void display(int num){
printf("%d\t",num);
}
//we pass whole array as argument
#include<stdio.h>
void display(int []);
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    display(arr);
    return 0;
}
void display(int arr[]){
int i;
for(i=0;i<8;i++){
    printf("%d\t",arr[i]);
}
}
//here we pass two dimensional array as argument where one dimensions size must be compulsarily provided
/*#include<stdio.h>
void display(int [][3]);
int main(){
    int arr[3][3]={
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                    };
        display(arr);
        return 0;
}
void display(int arr[][3]){
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
}*/

/*#include<stdio.h>
void upper_string(char []);
void lower_string(char []);
int main()
{
    char str[50];
    printf("Input a string : ");
    gets(str);
    upper_string(str);
    printf("String in upper case is %s\n",str);
    lower_string(str);
    printf("String in lower case is %s\n",str);
    return 0;
}
void upper_string(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){str[i] = str[i]-32;}
        i++;
    }
}
void lower_string(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){str[i]=str[i]+32;}
        i++;
    }
}
*/
/*#include<stdio.h>
float calculateAverage(float []);
int main()
{
    float data[6]={10.0,20.0,30.0,40.0,50.0,60.0};
    float avg;
    avg = calculateAverage(data);
    printf("Average of elments of the array is %.2f\n",avg);
    return 0;
}
float calculateAverage(float data[]){
int i;
float sum=0;
for(i=0;i<6;i++){
    sum+=data[i];
}
return sum/6;
}
*/
/*#include<stdio.h>
#include<math.h>
float calculateSD(int []);
int main()
{
    int data[6]={10,13,15,9,7,5};
    printf("Standard Deviation = %.2f\n",calculateSD(data));
    return 0;
}
float calculateSD(int data[]){
float mean,sd=0;
int sum=0,i;
for(i=0;i<6;i++){
    sum+=data[i];
}
mean=(float)sum/6;
for(i=0;i<6;i++){
    sd += pow(data[i]-mean,2);
}
return sqrt(sd/6);
}
*/
/*#include<stdio.h>
int subString(char [],char [],int,int);
int main()
{
    char str[50],sstr[50];
    int from,to;
    printf("Input a string : ");
    gets(str);
    printf("Input the from index : ");
    scanf("%d",&from);
    printf("Input the to index : ");
    scanf("%d",&to);
    if(subString(str,sstr,from,to)){
    printf("Substring is %s\n",sstr);
    }
    return 0;
}
int subString(char str1[],char str2[],int from,int to){
int i=0,j;
while(str1[i]!='\0'){i++;}
if(from<0||from>i){printf("Unable to find the substring");return 0;}
if(to>i){printf("Unable to find the substring");return 0;}
for(i=from,j=0;i<=to;i++,j++){
    str2[j]=str1[i];
}
str2[j]='\0';
return 1;
}
*/
/*#include<stdio.h>
void mathOper(int,int,int *,int *);
int main()
{
    int a,b,sum,diff;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    mathOper(a,b,&sum,&diff);
    printf("Sum of two numbers is %d\n",sum);
    printf("Difference of two numbers is %d\n",diff);
    return 0;
}
void mathOper(int a,int b,int *sum,int *diff){
*sum = a+b;
*diff = a-b;
}
*/
/*#include<stdio.h>
int main()
{
    void print();
    printf("Before calling print function\n");
    print();
    printf("After calling print function\n");
    return 0;
}
void print()
{
    printf("Inside user defined print function\n");
}
*/
//Recursive function a function calling itself again and again
/*#include<stdio.h>
long int factorial(int);//function prototype no need to specify variable name but type is compulsory
int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %ld\n",num,factorial(num));
    return 0;
}
long int factorial(int num){
if(num>=1){return num * factorial(num-1);}
else return 1;
}
*/
/*#include<stdio.h>
int main()
{
    static int i=0,num,sum=0;
    printf("Input a number : ");
    scanf("%d",&num);
    sum+=num;
    if(i<=5){++i;main();}
    printf("Sum of numbers is %d\n",sum);
    return 0;
}

#include<stdio.h>
void increment();
int main()
{
    int i;
    for(i=0;i<5;i++){
        increment();
    }
    return 0;
}
void increment(){
static int j=0;
printf("%d\t",j);
++j;
}
*/
/*#include<stdio.h>
extern int a;
int main()
{
    printf("a = %d\n",a);
    return 0;
}
int a = 20;

#include<stdio.h>
int a = 20;
int main()
{
    int a = 10;
    {
        extern int a;
        printf("a = %d\n",a);
    }
    printf("a = %d\n",a);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    register int a = 20;
    printf("a = %d\n",a);
    return 0;
}
*/
/*#include<stdio.h>
int difference(int,int);
int large(int,int);
int main()
{
    int a,b,c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c = difference(a,b);
    printf("Subtraction of a and b is %d\n",c);
    return 0;
}
int difference(int x,int y){
if(large(x,y)){return x-y;}
else return y-x;
}
int large(int x,int y){
if(x>y)return 1;
else return 0;
}
*/
/*#include<stdio.h>
struct Point{
int x,y;
};
int main()
{
    struct Point p1={100,250};//intialization is in order
    printf("The points are x = %d and y = %d\n",p1.x,p1.y);
    return 0;
}
*/
/*#include<stdio.h>
typedef struct Student{
char name[30];
int id;
float per;
}stud;
stud getStudentRec();
void display(stud);
int main()
{
    stud s1[2];
    int i;
    for(i=0;i<2;i++){
        s1[i]=getStudentRec();
    }
    for(i=0;i<2;i++){
        display(s1[i]);
    }
    return 0;
}
stud getStudentRec(){
    stud s1;
    printf("Input the student name,id and percentage : ");
    scanf("%s%d%f",s1.name,&s1.id,&s1.per);
    return s1;
}
void display(stud s1){
     printf("Name of the student : %s\n",s1.name);
     printf("ID                  : %d\n",s1.id);
     printf("Percentage          : %f\n",s1.per);
}
*/
/*#include<stdio.h>
typedef struct Numbers{
int a,b;
}num;
void addStructures(num,num,num *);
int main(){
    num n1,n2,n3;
    printf("Input the values of structure 1 : ");
    scanf("%d%d",&n1.a,&n1.b);
    printf("Input the values of structure 2 : ");
    scanf("%d%d",&n2.a,&n2.b);
    addStructures(n1,n2,&n3);
    printf("After addtion a = %d and b = %d\n",n3.a,n3.b);
    return 0;
}
void addStructures(num n1,num n2,num *n3){
n3->a = n1.a + n2.a;
n3->b = n1.b + n2.b;
}
*/
/*#include<stdio.h>
struct college_detail{
    char college_name[40];
    int college_id;
};
struct Student{
char name[30];
int id;
float per;
struct college_detail cd;
};
int main()
{
    struct Student s1 = {"Ravi",234,67.78,"Naresh",1124};
    printf("Name of the student :   %s\n",s1.name);
    printf("Id of the student   :   %d\n",s1.id);
    printf("College Name        :   %s\n",s1.cd.college_name);
    printf("College Id          :   %d\n",s1.cd.college_id);
    printf("Percentage          :   %f\n",s1.per);
    return 0;
}
*/
//sum of elements of array without using for loop
/*#include<stdio.h>
int sumOfArray(int []);
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int sum=sumOfArray(arr);
    printf("Sum of elements of the array is %d\n",sum);
    return 0;
}
int sumOfArray(int arr[]){
    int i=0,sum=0;
Loop:    sum += arr[i++];
    if(i<6)goto Loop;
    return sum;
}*/
//how to convert float into string
/*#include<stdio.h>
#define MAX 50
int main()
{
    float f;
    char str[MAX];
    printf("Input a float value : ");
    scanf("%f",&f);
    gcvt(f,6,str);
    printf("Float value is %s\n",str);
    return 0;
}
*/
/*#include<stdio.h>
union Student{
char name[30];
int id;
float per;
};
int main()
{
    union Student stud;
    printf("Input the name of the student : ");
    scanf("%s",stud.name);
    printf("Name    :    %s\n",stud.name);
    printf("Input the id of the student : ");
    scanf("%d",&stud.id);
    printf("Id    :    %d\n",stud.id);
    printf("Input the percentage of the student : ");
    scanf("%f",&stud.per);
    printf("Percentage    :    %f\n",stud.per);
    printf("Size of union is %d\n",sizeof(stud));
    return 0;
}
*/
/*#include<stdio.h>
enum week{monday=1,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
    enum week day;
    day = thursday;
    printf("Day is %d day of the week\n",day);
    printf("Input a day: ");
    scanf("%d",&day);
    switch(day){
            case 1:
            printf("Monday ");
            break;
               case 2:
            printf("Tuesday ");
            break;
               case 3:
            printf("Wednesday ");
            break;
               case 4:
            printf("Thursday ");
            break;
               case 5:
            printf("Friday ");
            break;
               case 6:
            printf("Saturday ");
            break;
               case 7:
            printf("Sunday ");
            break;
    }
    return 0;
}
*/
/*#include<stdio.h>
enum year{jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};
int main()
{
    enum year y;
    for(y=jan;y<=dec;y++){printf("%d\n",y);}
    return 0;
}
*/
/*#include<stdio.h>
enum state{fail,pass,distinction};
enum result{fail,pass,distinction};
int main()
{
    return 0;
}
*/
/*#include<stdio.h>
enum state{working=1,failed,notworking};
enum state currentState;//global declaration
enum state func();//function declaration or funtion prototype
int main()
{
    printf("Input the current state : ");
    scanf("%d",&currentState);
    (func()==working)?printf("Working"):printf("Not working");
    return 0;
}
enum state func()
{
    return currentState;
};
*/
/*#include<stdio.h>
int main()
{
    int a = 10;
    float f = 20.05;
    char ch = 'r';
    double d = 40.56;
    int *ip;
    float *fp;
    char *chp;
    double *dp;
    ip = &a;
    fp = &f;
    chp = &ch;
    dp = &d;
    printf("Size of integer pointer is %d\n",sizeof(ip));
    printf("Size of float pointer is %d\n",sizeof(fp));
    printf("Size of character pointer is %d\n",sizeof(chp));
    printf("Size of double pointer is %d\n",sizeof(dp));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a = 10;
    int *ip;
    {
        ip = &a;
        printf("Value of a is %d\n",*ip);
    }
    printf("Value of a is %d\n",*ip);
}
*/
/*#include<stdio.h>
int main()
{
    int a = 10;
    float f = 20.56;
    double d = 40.67;
    char ch = 't';
    void *vp;//this is what is generic pointer
    vp = &a;
    printf("Value of a is %d\n",*(int *)vp);
    vp = &f;
    printf("Value of float variable f is %f\n",*(float *)vp);
    vp = &d;
    printf("Value of double variable d is %lf\n",*(double *)vp);
    vp = &ch;
    printf("Value of character variable ch is %c\n",*(char *)vp);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a = 10;
    int *ip,**ipp;
    ip = &a;
    ipp = &ip;
    printf("Value of a is %d\n",a);
    printf("Value of a is %d\n",*ip);
    printf("Value of a is %d\n",**ipp);
    printf("Address of a is %p\n",&a);
    printf("Address of a is %p\n",ip);
    printf("Address of a is %p\n",*ipp);
    return 0;
}
*/
/*#include<stdio.h>
void salaryHike(int *,int);
int main()
{
    int sal,bonus;
    printf("Input the salary and bonus of the employee : ");
    scanf("%d%d",&sal,&bonus);
    salaryHike(&sal,bonus);
    printf("Incremented salary is %d\n",sal);
    return 0;
}
void salaryHike(int *sal,int bonus){
*sal += bonus;//sal = sal + bonus
}
*/
/*#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60};
    int *ip;
    ip=arr;
    while(ip<=&arr[5]){
        printf("%d\t",*ip);
        ip++;
    }
    printf("\n");
    ip=&arr[5];
    while(ip>=&arr[0]){
        printf("%d\t",*ip);
        ip--;
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char *str1 = "Welcome to c Tutorials";
    char *str2;
    int length;
    str2=str1;
    while(*str1!='\0'){
        printf("%c",*str1);
        str1++;
    }
    length = str1 - str2;
    printf("\nSize of the string is %d\n",length);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    double arr[]={10,20,30,40,50,60};
    int noe;
    double *ip1,*ip2;
    ip1 = arr;
    ip2 = arr;
    while(ip1<=&arr[5]){
            printf("%lf\t",*ip1);
            ip1++;
    }
    noe = ip1-ip2;
    printf("\nNumber of elements of the array is %d\n",noe);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int data[6],i;
    printf("Input the elements of the array : ");
    for(i=0;i<6;i++){
        scanf("%d",data+i);
    }
    printf("--------DISPLAYING ARRAY ELEMENTS------------\n");
    for(i=0;i<6;i++){
        printf("%d\t",*(data+i));
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int data[3][4],i,j;
    printf("Input the array elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",(*(data+i)+j));
        }
    }
    printf("---------DISPLAYING ARRAY ELEMENTS-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",*(*(data+i)+j));
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
int sum(int,int);
int (*fp)(int,int);
int main()
{
    int a,b;
    fp=sum;//function pointer
    a = sum(10,20);
    b = fp(110,120);
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
int sum(int a,int b){
return a+b;
}
*/
//function returning a pointer variable
/*#include<stdio.h>
int* func(int *,int *);
int main()
{
    int a,b,*c;
    printf("Input the values of a and b : ");
    scanf("%d%d",&a,&b);
    c = func(&a,&b);
    printf("Value of addition is %d\n",*c);
    return 0;
}
int* func(int *x,int *y){
    int *c = *x + *y;
    return &c;
}
*/
//Array of function pointer
/*#include<stdio.h>
int sum(int,int);
int diff(int,int);
int mul(int,int);
int div(int,int);
int (*fp[4])(int,int);
int main()
{
    int choice,a,b;
    fp[0]=sum;
    fp[1]=diff;
    fp[2]=mul;
    fp[3]=div;
    do{
        printf("\n\t0.Sum\t1.Difference\t2.Multiplication\t3.Divison\n");
        printf("\n\tSelect your choice : ");
        scanf("%d",&choice);
        printf("Input the values of a and b :");
        scanf("%d%d",&a,&b);
        printf("Ouput = %d\n",fp[choice](a,b));
    }while(choice>=0&&choice<=3);
    return 0;
}
int sum(int a,int b){
return a+b;
}
int diff(int a,int b){
return a-b;
}
int mul(int a,int b){
return a*b;
}
int div(int a,int b){
return a/b;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *data;
    int noe,i,sum=0;
    float avg;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    data=(int *)malloc(noe*sizeof(int));//int arr[noe]
    printf("Input the %d elements of the array : ",noe);
    for(i=0;i<noe;i++){
        scanf("%d",data+i);
    }
    for(i=0;i<noe;i++){
        sum+=*(data+i);
    }
    avg = sum/noe;
    printf("Sum = %d\nAverage = %f\n",sum,avg);
    return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *data;
    int noe,i,lar,small;
    printf("Input the number of elements of the array : ");
    scanf("%d",&noe);
    data=(int *)calloc(noe,sizeof(int));//int data[noe]
    if(data==NULL){
        printf("Unable to allocate memory\n");
        exit(0);
    }
    printf("Input the %d elements of the array\n",noe);
    for(i=0;i<noe;i++){
        scanf("%d",data+i);
    }
    lar=*(data+0);
    small=*(data+0);
    for(i=0;i<noe;i++){
        if(*(data+i)>lar){lar=*(data+i);}
        if(*(data+i)<small){small=*(data+i);}
    }
    printf("Largest Element = %d\nSmallest Element = %d\n",lar,small);
    for(i=0;i<noe;i++){
        printf("%d\t",*(data+i));
    }
    return 0;
}
*/
//Strcutured data
/*#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
char name[30];
int id;
float per;
}stud;
int main()
{
    int nor,i;
    stud *s1;
    printf("Input the number of records of the student : ");
    scanf("%d",&nor);
    s1=(stud *)calloc(nor,sizeof(stud));
    if(s1==NULL){
        printf("Unable to allocate memory\n");
        exit(0);
    }
    printf("Input the %d records of the student\n",nor);
    for(i=0;i<nor;i++){
        printf("Enter students name,id,percentage\n");
        scanf("%s%d%f",(s1+i)->name,&(s1+i)->id,&(s1+i)->per);
    }
    for(i=0;i<nor;i++){
        printf("---------STUDENT %d RECORD-------------\n",(i+1));
        printf("Name          :        %s\n",(s1+i)->name);
        printf("ID            :        %d\n",(s1+i)->id);
        printf("Percentage    :        %f\n",(s1+i)->per);
    }
    return 0;
}
*/
//how to use realloc()
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ip1,*ip2,i;
    ip1=(int *)malloc(2*sizeof(int));//arr[2]
    *(ip1+0)=10;
    *(ip1+1)=20;
    ip2=(int *)realloc(ip1,5*sizeof(int));
    *(ip2+2)=30;
    *(ip2+3)=40;
    *(ip2+4)=50;
    for(i=0;i<5;i++){
        printf("%d\t",*(ip2+i));
    }
    for(i=0;i<5;i++){
        printf("%p\n",ip1+i);
    }
    free(ip2);
    return 0;
}
*/
//One linkedlist
/*#include<stdio.h>
#include<stdlib.h>
typedef struct LinkedList{
int data;
struct Node *next;
}llist;
void printList(llist *node);
int main()
{
    llist *head,*first,*second,*third;
    printf("Size of structure is %d\n",sizeof(llist));
    head=(llist *)malloc(sizeof(llist));
    first=(llist *)malloc(sizeof(llist));
    second=(llist *)malloc(sizeof(llist));
    third=(llist *)malloc(sizeof(llist));
    head->data=10;
    first->data=20;
    second->data=30;
    third->data=40;
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    printList(head);
    return 0;
}
void printList(llist *node){
while(node!=NULL){
    printf("%d\n",node->data);
    node = node->next;
}
}
*/
//Command line arguments
/*#include<stdio.h>
int main(int argc,char *argv[]){
printf("%s\n%s\n%s",argv[0],argv[1],argv[2]);
printf("\nNumber of arguments passes is %d\n",argc);
return 0;
}
*/
//sum of numbers which we pass as arguments to main
/*#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
int i,sum=0;
for(i=1;i<argc;i++){
    sum+=atoi(argv[i]);
}
printf("Sum = %d\n",sum);
return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
int num = atoi(argv[1]);
long int fact=1;
while(num>=1){
    fact *= num--;
}
printf("Factorial of number is %ld\n",fact);
return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
float sum=0;
int i;
for(i=1;i<argc;i++){
    sum+=atof(argv[i]);
}
printf("Sum of float numbers is %f\n",sum);
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    printf("Data = %s\n",__DATE__);
    printf("Time = %s\n",__TIME__);
    printf("File = %s\n",__FILE__);
    return 0;
}
*/
/*#include<stdio.h>
#define PI 3.14
#define circle(r) PI*r*r
int main()
{
    int r;
    float area;
    printf("Input the radius of the circle : ");
    scanf("%d",&r);
    area = circle(r);
    printf("Area of the circle = %.2f\n",area);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen(__FILE__,"r");
    do{
        ch=getc(fp);
        putchar(ch);
    }while(ch!=EOF);
    printf("%s\n",__FILE__);
    fclose(fp);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("C:\\file\\test.txt","w");
    while((ch=getchar())!=EOF){
        putc(ch,fp);
    }
    fclose(fp);
    fp = fopen("C:\\file\\test.txt","r");
    while((ch=getc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    char name[30],str[30];
    int id,id1;
    float salary,sal;
    printf("Input the name,id and salary of the employee : ");
    scanf("%s%d%f",name,&id,&salary);
    fp = fopen("C:\\file\\emp.txt","a");
    fprintf(fp,"%s\t%d\t%f",name,id,salary);
    fclose(fp);
    fp = fopen("C:\\file\\emp.txt","r");
    while(fscanf(fp,"%s%d%f",str,&id1,&sal)!=EOF){
    printf("Name       :       %s\n",str);
    printf("Id         :       %d\n",id1);
    printf("Salary     :       %f\n",sal);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    FILE *fp;
    int arr[]={10,11,12,13,14,15,16};
    int arr1[7],i;
    fp = fopen("C:\\file\\mybin.dat","wb");
    fwrite(&arr,sizeof(arr),1,fp);
    fclose(fp);
    fp = fopen("C:\\file\\mybin.dat","rb");
    fread(&arr1,sizeof(arr1),1,fp);
    for(i=0;i<7;i++){
        printf("%d\t",arr1[i]);
    }
    return 0;
}
*/
//How to find the size of the file
/*#include<stdio.h>
int main()
{
    FILE *fp;
    int size;
    fp = fopen("C:\\file\\test.txt","r");
    fseek(fp,0,SEEK_END);
    size = ftell(fp);
    printf("Size of the file is %d\n",size);
    fclose(fp);
    return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
typedef struct Employee{
char name[30];
int id;
float salary;
}emp;
void write();
void read();
void search();
    FILE *fp;
    emp e1,e2;
    int choice;
int main()
{
    do{
        printf("\n\t1.Write employee record ");
        printf("\n\t2.Read employee record  ");
        printf("\n\t3.Search an employee record ");
        printf("\n\t4.exit");
        printf("Select your choice : ");
        scanf("%d",&choice);
        switch(choice){
                case 1:
                    write();
                    break;
                case 2:
                    read();
                    break;
                case 3:
                    search();
                    break;
                case 4:
                    exit(0);
        }
    }while(choice!=4);
    return 0;
}
void write()
{
    fp = fopen("C:\\file\\employee.dat","ab");
    printf("Input the employee name,id and salary : ");
    scanf("%s%d%f",e1.name,&e1.id,&e1.salary);
    fwrite(&e1,sizeof(e1),1,fp);
    fclose(fp);
}
void read()
{
    fp = fopen("C:\\file\\employee.dat","rb");
    while((fread(&e2,sizeof(e2),1,fp))==1){
    printf("Name            :           %s\n",e2.name);
    printf("ID              :           %d\n",e2.id);
    printf("Salary          :           %f\n",e2.salary);
    }
}
void search()
{
    int sid;
fp = fopen("C:\\file\\employee.dat","rb");
printf("Enter the id of the employee to be searched : ");
scanf("%d",&sid);
while((fread(&e2,sizeof(e2),1,fp))==1){
        if(sid==e2.id){
             printf("Name            :           %s\n",e2.name);
             printf("ID              :           %d\n",e2.id);
             printf("Salary          :           %f\n",e2.salary);
        }
}
}
*/
/*#include<stdio.h>
#include<assert.h>
int main()
{
    int x;
    printf("Enter an integer value : ");
    scanf("%d",&x);
    assert(x>=0);
    printf("you entered : %d\n",x);
    return 0;
}*/
//assert is used to track down program bugs(which are distinct from compilaton error)
/*#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("The number of bits in a byte : %d\n",CHAR_BIT);
    printf("The minimum value of signed char is %d\n",SCHAR_MIN);
    printf("The maximum value of signed char is %d\n",SCHAR_MAX);
    printf("The maximum value of unsigned char is %d\n",UCHAR_MAX);
    printf("The minimum value of int is %d\n",INT_MIN);
    printf("The maximum value of int is %d\n",INT_MAX);
    printf("The minimum value of float is %.10e\n",FLT_MIN);
    printf("The maximum value of float is %.10e\n",FLT_MAX);
    return 0;
}*/
//variable number of arguments
/*#include<stdio.h>
#include<stdarg.h>
int min(int arg_count,...);
int main()
{
    printf("Minimum value is %d\n",min(5,12,67,6,5,4));
    printf("Minimum value is %d\n",min(3,4,7,8));
    return 0;
}
int min(int arg_count,...){
int i;
int min=1000,a;
va_list ap;
va_start(ap,arg_count);
for(i=0;i<arg_count;i++){
    if((a=va_arg(ap,int))<min){
        min=a;
    }
}
va_end(ap);
return min;
}
*/
/*#include<stdio.h>
#include<stdarg.h>
double avg(int count,...);
int main()
{
    printf("Average of 2,3,4,5 is %lf\n",avg(4,2,3,4,5));
    printf("Average of 5,10,15 is %lf\n",avg(3,5,10,15));
    return 0;
}
double avg(int count,...)
{
    va_list valist;
    double sum=0.0;
    int i;
    va_start(valist,count);
    for(i=0;i<count;i++){
        sum+=va_arg(valist,int);
    }
    va_end(valist);
    return sum/count;
}
*/
/*#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* newNode() allocates a new node with the given data and NULL left and
   right pointers. */
/*struct node* newNode(int data)
{
  // Allocate memory for new node
  struct node* node = (struct node*)malloc(sizeof(struct node));

  // Assign data to this node
  node->data = data;

  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}


int main()
{
  /*create root*/
  /*struct node *root = newNode(1);
  /* following is the tree after above statement

        1
      /   \
     NULL  NULL
  */


  /*root->left        = newNode(2);
  root->right       = newNode(3);
  /* 2 and 3 become left and right children of 1
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
  */


  /*root->left->left  = newNode(4);
  /* 4 becomes left child of 2
           1
       /       \
      2          3
    /   \       /  \
   4    NULL  NULL  NULL
  /  \
NULL NULL
*/
/*
  getchar();
  return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>


struct node
{
     int data;
     struct node* left;
     struct node* right;
};


struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5);

     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);

     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(root);

     getchar();
     return 0;
}


void printPostorder(struct node* node)
{
     if (node == NULL)
        return;

     // first recur on left subtree
     printPostorder(node->left);

     // then recur on right subtree
     printPostorder(node->right);

     // now deal with the node
     printf("%d ", node->data);
}


void printInorder(struct node* node)
{
     if (node == NULL)
          return;


     printInorder(node->left);


     printf("%d ", node->data);


     printInorder(node->right);
}


void printPreorder(struct node* node)
{
     if (node == NULL)
          return;


     printf("%d ", node->data);


     printPreorder(node->left);


     printPreorder(node->right);
}

*/
/*#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *left;
struct node *right;
}Node;
Node* createNode(int value){
Node *node;
node = (Node *)malloc(sizeof(Node));
node->data=value;
node->left=NULL;
node->right=NULL;
return node;
}
void printPostOrder(Node *node){
if(node==NULL)return;
printPostOrder(node->left);
printPostOrder(node->right);
printf("%d",node->data);
}
void printPreOrder(Node *node){
if(node==NULL)return;
printf("%d",node->data);
printPreOrder(node->left);
printPreOrder(node->right);
}
void printInOrder(Node *node){
if(node==NULL)return;
printInOrder(node->left);
printf("%d",node->data);
printInOrder(node->right);
}
int main()
{
    Node *root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);
    printf("Post Order traversal of tree\n");
    printPostOrder(root);
    printf("PreOrder traversal of tree\n");
    printPreOrder(root);
    printf("InOrder traversal of tree\n");
    printInOrder(root);
    return 0;
}
*/
