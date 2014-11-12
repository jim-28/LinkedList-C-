#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 	
#define ENGLISHA "Welcome to the infinite string storage program"
#define ENGLISHB "Please input a single word"

#define SWAHILIA "Karibu usio mpango kamba ya kuhifadhi"
#define SWAHILIB "Tafadhali pembejeo neno moja"

main(){
 	
	char end[]="***END***";
	char input[50];

/* IF WE WANT THE PROGRAM IN SWAHILI, WE'LL REPLACE 'ENGLISH' WITH 'SWAHILI' */
	printf("%s\n", ENGLISHA);
	while(1){
	printf("%s:\n", ENGLISHB);
	scanf(" %s", input);
	
	if(strcmp(input, end) == 0){
/* PRINT LINKED LIST */
		

		return 0;
		}
	
/* STORE INPUT IN LINKED LIST*/
	


    /* INITIALIZE THE NEW NODE */
    		
	printf("Input: %s\n", input);
	memset(&input[0], 0, sizeof(input));
	}
}
