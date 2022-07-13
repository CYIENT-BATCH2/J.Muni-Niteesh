/*1)include the header file
2)read the character from the user
3)write the condition to check whether it is vowel or consonant
4)print the output*/
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
