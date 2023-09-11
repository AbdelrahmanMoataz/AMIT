#include <stdio.h>
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0); // Fix problem in eclipse emulator
	setvbuf(stderr, NULL, _IONBF, 0);
	int flag = 0;
	int OP1,OP2,RESULT;
	char OP;
	printf("Enter first operand: ");
	scanf("%d",&OP1);
	printf("Enter operator:  ");
	scanf( " %c",&OP); // Leading whitespace makes scanf of char ignore incoming white spaces (i.e newline from previous input buffer)
	printf("Enter second operand: ");
	scanf("%d",&OP2);
	RESULT = 0;
	switch(OP)
	{
	case '+':
		RESULT = OP1 + OP2;
		break;

	case '-':
		RESULT = OP1 - OP2;
		break;

	case '*':
		RESULT = OP1 * OP2;
		break;

	case '/':
		RESULT = OP1 / OP2;
		break;

	default:
		flag = 1;
		printf("Invalid operator entered\n");
		break;
	}
	flag == 0 ? printf("Result = %d\n",RESULT): printf("No result");
	return 0;
}
