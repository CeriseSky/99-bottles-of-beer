// I have literally no idea why I felt compelled to make this

#include <stdio.h>

int main() {
  for(int i = 99; i > 0; i--) {
    const char *bottles = i != 1 ? "bottles" : "bottle";
    printf("%i %s of beer on the wall,\n"
           "%i %s of beer!\n"
           "Take one down and pass it around,\n", i, bottles, i, bottles);
    if(i - 1 == 0)
      printf("No more bottles of beer on the wall!\n");
    else
      printf("%i %s of beer on the wall\n",
          i - 1, i-1 != 1 ? "bottles" : "bottle");
    printf("\n");
  }
  printf("No more bottles of beer on the wall,\n"
         "No more bottles of beer!\n"
         "Go to the store and buy some more,\n"
         "99 bottles of beer on the wall!\n");
}

