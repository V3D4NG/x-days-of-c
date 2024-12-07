#include<stdio.h>
int main(){
    char str[100], temp;
    int i, j;
    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    for(j=0; str[j]!='\0'; j++);
    j--;

    for(i = 0; i<j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);

    return 0;
}