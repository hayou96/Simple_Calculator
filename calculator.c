#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int length;

	gets(str);
	length = strlen(str);
	
	printf("%d\n",length);
}
