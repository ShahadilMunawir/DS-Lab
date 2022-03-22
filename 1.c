#include<stdio.h>
#include<string.h>

int main(){
    char str[100], rev[100], * sptr = str, * rptr = rev;
    int i = -1;
    printf("Enter a string: ");
    gets(str);
    while( * sptr){
        sptr++;
        i++;
    }
    while(i >= 0){
        sptr--;
        * rptr = * sptr;
        rptr++;
        i--;
    }
    * rptr = '\0';
    printf("Reverse of the string is: %s ", rev);
    return 0;
}