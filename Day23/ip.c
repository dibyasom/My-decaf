#include <stdio.h>

int main (void){

    int b1, b2, b3, b4;
    printf("Type in the IP address as space separated values -> ");
    scanf("%d%d%d%d", &b1, &b2, &b3, &b4);
    char *ch ="123.456\0";
    printf("%s\n");
    char class;
    if(b1<0)
        class='X';
    else if(b1<128)
        class='A';
    else if(b1<192)
        class='B';
    else if(b1<224)
        class= 'C';
    else if(b1<240)
        class= 'D';
    else if(b1<256)
        class= 'E';
    else
        class= 'X';

    printf("IP Class-%c\n", class);

    return 0;
}