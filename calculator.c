#include <stdio.h>
#include <string.h>

int main(){
	int value1, value2;
	char oper;

	int answer1;
	float answer2;

	scanf("%d %c %d", &value1, &oper, &value2);

	switch(oper){
		case '+' :
			answer1 = value1 + value2;
			printf("%d\n",answer1);
			break;

		case '*' :
			answer1 = value1 * value2;
			printf("%d\n",answer1);
			break;
		
		case '/' :
			answer2 = (float)value1 / (float)value2;
			printf("%.2f\n",answer2);
			break;

		case '-' :
			answer1 = value1 - value2;
			printf("%d\n",answer1);
			break;

		default :
			printf("[Error]\n");
	}
}
