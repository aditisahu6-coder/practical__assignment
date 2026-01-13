#include<stdio.h>
int main()
{
    int c=100,res;
    res=c++;
    printf("c++ --> %d \n",res);
    res=c--;
     printf("c-- --> %d \n",res);
    res=++c;
    printf("++c  -->%d \n",res);
    res=--c;
    printf("--c -->%d \n",res);
    return 0;
}
