#include<stdio.h>
#include<math.h>

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
    
    unsigned int subnetA = 0xFF << 24, subnetB = 0xFFFF << 16, subnetC = 0xFFFFFF << 8;
    unsigned int networkAddr = 0, subnet, netConfigs=0, hostConfigs= 0;
    int validSubnetExists = 1;
    
    switch(class){
        case 'A':
            networkAddr = IP & subnetA;
            subnet = subnetA;
            netConfigs = pow(2, 7)-2; 
            break;
        case 'B':
            networkAddr = IP & subnetB;
            subnet = subnetB;
            netConfigs = pow(2, 14)-2; 
            break;
        case 'C':
            networkAddr = IP & subnetC;
            subnet = subnetC;
            netConfigs = pow(2, 21)-2; 
            break;
        case 'D':
            validSubnetExists = 0;
            break;
        case 'E':
            validSubnetExists = 0;
            break;
        default:
            printf("Classless/Invalid IP :(\n");
            return;
    }
    printf("\nIPv4 ClASS-%c\n", class);
    if(validSubnetExists){
        int countSetBytes = 0, shift= 24;
        printf("Subnet Mask:  ");
        for(int i=0; i<4; i++){
            printf("%u", (subnet >> shift)&0xFF);
            if(i!=3)
                printf(".");
            shift-=8;
        }
        shift= 24;
        printf("\nNetwork Addr: ");
        for(int i=0; i<4; i++){
            printf("%u", (networkAddr >> shift)&0xFF);
            if((networkAddr >> shift)&0xFF)
                countSetBytes++;
            if(i!=3)
                printf(".");
            shift-=8;
        }
        printf("\nPossible Network Configurations: %u", netConfigs);
        printf("\nMaximum Supported Hosts: %d", (int)pow(2, 8*countSetBytes));
        printf("\n\nOkay Bye <3\n\n");
    }
    
}

int main(void){
    
    unsigned int temp=0, IP=0; char garbage;
    printf("\nDrop the IP addr in the format <xxx.xxx.xxx.xxx>\n");
    for(int i=0; i<4; i++){
        scanf("%d", &temp);
        IP <<= 8;
        IP |= temp;
        scanf("%c", &garbage);
    }

    char class = classOf(IP);
    insights(IP, class);
}