#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "db_functions.h"
#include "print_functions.h"


int main(int argc, char *argv[]){
  if (argc < 2){
    puts("Usage: db [FILE]");
    return -1;
  }

  //välkomnande
  print_welcome();

  // Read the input file
  readInputfile(argv[1]);
  // Main loop
  int choice = -1;
  while(choice != 0){
    print_menu();
    scanf("%d", &choice);
    while(getchar() != '\n'); // Clear stdin
 
    switch(choice){
    case 1:
      // Query
      search_database();
      break;
    case 2:
      // Update

      break;
    case 3:
      // Insert
      insertEntry();
      break;
    case 4:
      // Delete
      deleteEntry();
      break;
    case 5:
      // Print database
      printDatabase();
      break;
    case 0:
      // Exit
      puts("Good bye!");
      break;
    default:
      // Please try again
      puts("Could not parse choice! Please try again");
    }
    puts("");
  }
  return 0;
}
