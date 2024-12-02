/*
    Problem Statement: Move a stack of disks from one rod to another, while following these rules:
    1. Only one disk can be moved at a time 
    2. A larger disk cannot be placed on top of a smaller disk 
    3. Only the top disk can be moved 
*/

#include<stdio.h>

void towerOfHanoi(int n, char src, char aux, char dest){
    if(n==1){
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }
    towerOfHanoi(n-1, src, dest, aux);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    towerOfHanoi(n-1, aux, src, dest);
}

int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}