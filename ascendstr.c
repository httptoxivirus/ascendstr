#include<stdio.h>
#include<string.h>
void ascend(char str[]) {
    char temp;
    for(int i=0; i<(strlen(str)-1); i++) {
    char lwr = 'a';
    for(int j=i+1; j<strlen(str); j++) {
        if(str[j] < str[i]) {
        lwr = str[j];
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    }
}
}

int main() {
    char str[50];
    printf("Enter the string : \n");
    gets(str);
    ascend(str);
    printf("%s",str);
    return 0;
}
