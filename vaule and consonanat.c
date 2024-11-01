#include<stdio.h>
int main()
{
    char x;

    printf("Enter a Alphabet:");
    scanf("%c",&x);

    switch(x){

case 'a':
    printf("%c is a vowle",x);
    break;
    case 'e':
    printf("%c is a vowle",x);
    break;
    case 'i':
    printf("%c is a vowle",x);
    break;
    case 'o':
    printf("%c is a vowle",x);
    break;
    case 'u':
    printf("%c is a vowle",x);
    break;

case 'A':
    printf("%c is a vowle",x);
    break;
    case 'E':
    printf("%c is a vowle",x);
    break;
    case 'I':
    printf("%c is a vowle",x);
    break;
    case 'O':
    printf("%c is a vowle",x);
    break;
    case 'U':
    printf("%c is a vowle",x);
    break;
    default:
        printf("%c is a consonant",x);
    }
    return 0;

}
