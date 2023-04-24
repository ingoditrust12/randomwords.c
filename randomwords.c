#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// A C program that randomly prints words//

int main() {
   char letters[] = "abcdefghijklmnopqrstuvwxyz";
   int length = 8; // length of the random word
   int i;

   srand(time(NULL)); // seed the random number generator

   printf("Random word: ");
   for (i = 0; i < length; i++) {
      int index = rand() % 26; // generate a random index between 0 and 25
      printf("%c", letters[index]);
   }
   

   return 0;
}
