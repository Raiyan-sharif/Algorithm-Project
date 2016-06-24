#include <iostream>
#include <stdio.h>


using namespace std;

int cnt=0;

void twh(int n,char s,char i,char d)
{
    if(n>0)
    {
        cnt++;
        twh(n-1,s,d,i);
        printf("%d move from %c to %c\n",n,s,d);
        twh(n-1,i,s,d);
    }
}

int main()
{

    twh(3,'A','B','C');
    printf("Total Move: %d\n",cnt);
    return 0;
}
