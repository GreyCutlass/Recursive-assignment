#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapCharacters(char *firstCharacter, char *secondCharacter) 
{ 
    char temp = *firstCharacter; 
    *firstCharacter = *secondCharacter; 
    *secondCharacter = temp; 
}

void wordPermutate(char *inputString, int lowerBound, int upperBound) 
{
   if (lowerBound == (upperBound-1)) 
    printf("%s\n", inputString);
   else {
     for (int currentIndex = lowerBound; currentIndex < upperBound; currentIndex++) {
       swapCharacters(&inputString[lowerBound], &inputString[currentIndex]);
       wordPermutate(inputString, lowerBound+1, upperBound);
       swapCharacters(&inputString[lowerBound], &inputString[currentIndex]);
     }
  }
}

int main()
{
    char * val;
    printf("Put in the input string: ");
    scanf(" %[^\n]", val);
    wordPermutate(val, 0, strlen(val));



}