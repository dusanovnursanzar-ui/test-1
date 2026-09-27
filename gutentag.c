#include <stdio.h>

int main(){
    char name[50];

    printf("Schreib deinen Namen auf, und zwar schnell: ");
    scanf("%s", name);
    printf("Guten Tag, %s\n", name);

    return 0;
}