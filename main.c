#include <stdio.h>
#include "header.h"

int main() {
	int num1, num2, result;
	char operator;

	// Enter
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Enter operator(+, -, *, /):");
	scanf(" %c", &operator);
	// Call fuction
	switch(operator){
		case '+':
			result = add(num1, num2);
			break;
		case '-':
			result = subtract(num1, num2);
			break;
		case '*':
			result = multiply(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
		default:
			printf("Error: Invalid operator\n");
			return 1;
	}
	// Result
	printf("Result: %d\n", result);

	return 0;
}
