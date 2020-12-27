# Reversing-sentence
//To reverse a sentence in C


#include <stdio.h>

int main() {
	char str[100];
	scanf("%[^\n]s",str);
	int len,i,j;
	for(len=0;str[len];len++);
	printf("%d",len);
	for(i=len;i>=0;i--){
	    if(i==0){
	        printf("%c",str[i]);
	    }
	    if(str[i]==' '||i==0){
	        for(j=i+1;str[j]!='\0'&&str[j]!=' ';j++){
	            printf("%c",str[j]);
	        }printf(" ");
	    }
	}
	return 0;
}
