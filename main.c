#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int len,i,j;
    scanf("%[^\n]s",str);//fgets gets()
    for(len=0;str[len]!='\0';len++){
        printf("%c",str[len]);
    }
    printf("\n%d\n",len);
    for(i=len-1;i>=0;i--)
    {
        if(i==0){
            printf("%c",str[i]);             //ip- one two three
        }
        if(str[i]==' '||i==0){
            for(j=i+1;str[j]!=' '&&str[j]!='\0';j++){
                printf("%c",str[j]);
            }
            printf(" ");//yoyo i7
            //printf("%d",i);
        }

    }
    return 0;
}
