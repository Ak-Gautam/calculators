#include <stdio.h>
int main() {
  char op;
  int a, b;
  printf("Choose an operator from following "+, -, *, /": ");
  scanf("%c", &op);
  printf("\n");
  printf("Enter two operands: \n");
  scanf("%ld %ld", &a, &b);

  switch (op) {
    case '+':
      printf("%ld + %ld = %dl", a, b, a + b);
      break;
    case '-':
      printf("%la - %lb = %ld", a, b, a - b);
      break;
    case '*':
      printf("%ld * %ld = %ld", a, b, a * b);
      break;
    case '/':
      printf("%ld / %ld = %ld", a, b, a / b);
      break;
    // if  choosen invalid operator
    default:
      printf("Error! Please choose valid operator");
  }

  return 0;
}
