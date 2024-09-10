#include <stdio.h>
#include <string.h>

int main() {
  int number;
  char text[20];

  printf("Enter your age: ");
  scanf("%d", &number);
  printf("Enter your gender (man/woman): ");
  scanf("%s", text);

  if (number < 18 && strcmp(text, "woman") == 0) {
    printf("Girl\n");
  } else if (number >= 18 && strcmp(text, "woman") == 0) {
    printf("Woman\n");
  }

  return 0;
}

