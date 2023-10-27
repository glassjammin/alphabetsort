/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char input[256]= {0};
  int lowercase[26]= {0};
  int uppercase[26]= {0};
  int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros
  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (1) {
    fgets(input, sizeof(input),
          stdin); // get the input from the user via keyboard

    // Check for an empty line to exit the loop
    if (strlen(input) == 1 && input[0] == '\n') {
      break;
    }
    // Your Code should be implemented here
    // Iterate through the characters in the input
    // Check if the character is a letter (A-Z or a-z)
    // Increment the corresponding count in the array
    for (int i = 0; i < strlen(input); i++) {
      char current = input[i];
      if (isalpha(current)) {
        if (islower(current)) {
          lowercase[current - 'a']++;
        } else {
          uppercase[current - 'A']++;
        }
      }
    }
  }

  printf("Character counts (A-z) and (a-z) : - \n");

  for (int i = 0; i < 26; i++) {
    printf("%c : %d times\n", 'a' + i, lowercase[i]);
  }
  printf("\n");
  for (int i = 0; i < 26; i++) {
    printf("%c : %d times\n", 'A' + i, uppercase[i]);
  }
  printf("newline for no github");

  return 0;
}