#include<stdio.h>
void main()
{
        int a=0x84;
        a= (a>>4)&(0x0F) | (a<<4)&(0xF0);
        printf("%x\n",a);
}
