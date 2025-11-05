/*
    99 bottles of beer - A cult classic among NOOBS
    Copyright (C) 2025  Indigo Carmine (CeriseSky)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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

