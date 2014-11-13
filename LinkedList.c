#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 	
#define ENGLISHA "Welcome to the infinite string storage program"
#define ENGLISHB "Please input a single word"

#define SWAHILIA "Karibu usio mpango kamba ya kuhifadhi"
#define SWAHILIB "Tafadhali pembejeo neno moja"

struct node{
	char x[50];
	struct node *next;
	};

int main(){
	/* INITIALIZE ROOT */
	struct node *root;
	struct node *conductor;
	root=(struct node *) malloc(sizeof(struct node));
	root->next=0;
	root->x;
	conductor=root;
	int i;

	char end[]="***END***";
	char input[50];

/* IF WE WANT THE PROGRAM IN SWAHILI, WE CAN REPLACE 'ENGLISH' WITH 'SWAHILI' */
	printf("%s\n", ENGLISHA);
	
	while(1){
	printf("%s:\n", ENGLISHB);
	scanf("%s", input);
	
	if(strcmp(input, end) == 0){
/* PRINT LINKED LIST */
	conductor=root;
	if (conductor!=0){
    		while (conductor->next!=0) {
        		printf("%s\n", conductor->x);
        		conductor = conductor->next;
   			}
    		printf( "%s\n", conductor->x );
		}		
		return 0;
		}
	
/* STORE INPUT IN LINKED LIST*/
	conductor->next=malloc(sizeof(struct node));
	conductor=conductor->next;

	if(conductor==0){
		printf("Error: Out of memory");
		return 0;
		}
    /* INITIALIZE THE NEW NODE */
	conductor->next = 0;
	
	for(i=0; i<sizeof(input);i++){
		conductor->x[i] = input[i];    		
	}
	/* FREE UP INPUT FOR NEXT INPUT & CLEAR STDIN */
	memset(&input[0], 0, sizeof(input));
	fseek(stdin,0,SEEK_END);

/* DEBUGGING */
/* printf("INPUT:%s\n", conductor->x); */
	}
}
