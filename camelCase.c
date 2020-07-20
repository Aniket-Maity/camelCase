#include<stdio.h>
#include<string.h>

int main() {
    char strings[10000];
    scanf("%s",strings);
    int i;
    int result=1;
    if(strings[0]<='a'){
        printf("Input Error");
        return 0;
    }
    for(i=0;strings[i]!='\0';i++){
        if(strings[i]>='A' && strings[i]<='Z'){
            result++;
        }
    }
    printf("%d",result);
}