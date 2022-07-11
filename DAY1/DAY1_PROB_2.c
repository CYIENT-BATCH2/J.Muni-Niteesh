#include <stdio.h>
int main() {
char c;
     printf("enter the alphabit\n");
     scanf("%c",&c);
     if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
     {
        printf("given number is vowels \n"); 
     }
    else
    {
        printf("consonant \n");
    }
    return 0;
}
