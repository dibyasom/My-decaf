#include<stdio.h>

// Find, Class, SubnetMask, Network ID.

char classOf(unsigned int b1){
    b1 >>= 24;
    if(b1<0)
        return 'X';
    else if(b1<128)
        return 'A';
    else if(b1<192)
        return 'B';
    else if(b1<224)
        return 'C';
    else if(b1<240)
        return 'D';
    else if(b1<256)
        return 'E';
    else
        return 'X';
}

void insights(unsigned int IP, char class){
    
    unsigned int setByte = 0xFF;
    unsigned int s1=0, s2=0, s3=0, s4=0;
    unsigned int n1=0, n2=0, n3=0, n4=0;
    switch(class){
        case 'A':
            s1 = setByte;
            n1 = (IP >> 24) & setByte;
            break;
        case 'B':
            s1 = setByte;
            n1 = (IP >> 24) & setByte;
            s2 = setByte;
            n2 = (IP >> 16) & setByte;
            break;
        case 'C':
            printf("Here\n");
            s1 = setByte;
            n1 = (IP >> 24) & setByte;
            s2 = setByte;
            n2 = (IP >> 16) & setByte;
            s3 = setByte;
            n3 = (IP >> 8) & setByte;
            break;
        case 'D':
            printf("\nIpv4 ClASS-D\n");
            printf("No Subnet Mask.\n");
            return;
        case 'E':
            printf("\nIpv4 ClASS-E\n");
            printf("No Subnet Mask.\n");
            return;
        default:
            printf("Classless/Invalid :(\n");
            return;
    }
    printf("\nIPv4 ClASS-%c\n", class);
    printf("SUBNET MASK: %u.%u.%u.%u\n", s1, s2, s3, s4);
    printf("NETWORK ID: %u.%u.%u.%u\n", n1, n2, n3, n4);
}

int main(void){
    
    unsigned int temp=0, IP=0; char garbage;
    printf("Drop the IP addr in the format <xxx.xxx.xxx.xxx>\n");
    for(int i=0; i<4; i++){
        scanf("%d", &temp);
        IP <<= 8;
        IP |= temp;
        scanf("%c", &garbage);
    }

    char class = classOf(IP);
    insights(IP, class);
}