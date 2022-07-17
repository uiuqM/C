#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int size;
    //char string[100];
    char *string;
    
    string =(char*)malloc (100*sizeof(char));

    scanf("%s", string);
    size = sizeof(string)/sizeof(string[0]);

    printf("%s \n", string);
    printf("%d \n", size);
    return 0;
}