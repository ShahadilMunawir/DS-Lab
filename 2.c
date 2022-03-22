#include <stdio.h>
#include<string.h>

int main(){
    char text[100], pattern[50];
    int i = 0, j = 0, temp = 0, text_len = 0, pat_len = 0, flag = 0;
    printf("Enter String:");
    gets(text);
    printf("Enter Pattern string:");
    gets(pattern);
    text_len = strlen(text);
    pat_len = strlen(pattern);
    if(pat_len <= text_len){
        for(i = 0; i <= text_len - pat_len; i++){
            temp = i;
            for(j = 0; j < pat_len; j++){
                if(pattern[j] == text[temp]){
                    temp++;
                }
                else{
                    break;
                }
            }
            if(j == pat_len){
                printf("%s pattern found at %d\n", pattern, i + 1);
                flag = 1;
            }
        }
    }
    if(!flag){
        printf("%s is not found in %s", pattern, text);
    }
    return 0;
}