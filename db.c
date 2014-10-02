#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <init.h>
#include <actions.h>

typedef struct node{
  char *key;
  char *value;
  struct node *next;
} *Node;

void readline(char *dest, int n, FILE *source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len-1] == '\n')
    dest[len-1] = '\0';
}

int getOpt(){
	puts("Please choose an operation");
    puts("1. Query a key");
    puts("2. Update an entry");
    puts("3. New entry");
    puts("4. Remove entry");
    puts("5. Print database");
    puts("0. Exit database");
	puts("? ");
	int choice = -1;
    scanf("%d", &choice);
	return choice;
}

void queryKey(){
// Query
      printf("Enter key: ");
      readline(buffer, 128, stdin);
      puts("Searching database...\n");
      found = 0;
      cursor = list;
      while(!found && cursor != NULL){
        if(strcmp(buffer, cursor->key) == 0){
          puts("Found entry:");
          printf("key: %s\nvalue: %s\n", cursor->key, cursor->value);
          found = 1;
        }else{
          cursor = cursor->next;
        }
      }
      if(!found){
        printf("Could not find an entry matching key \"%s\"!\n", buffer);
      }
	}




int main(int argc, char *argv[]){
	init()
    
  // Main loop
  
  while (1)
	int chosen = getOpt();
	doSmt(chosen);
	
  

    while(getchar() != '\n'); // Clear stdin
    int found;
    Node cursor;
    switch(choice){
   
}