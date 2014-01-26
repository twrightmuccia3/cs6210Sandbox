/*
 ============================================================================
 Name        : Sabotage.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Sabotage exercise
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char **argv) {
	int fd;
	ssize_t len;
	char *filename;
	int key, srch_key, new_value;
	
	if(argc < 4){
		fprintf(stderr, "usage: sabotage filename key value\n");
		exit(EXIT_FAILURE);
	}
	
	filename = argv[1];
	srch_key = strtol(argv[2], NULL, 10);
	new_value = strtol(argv[3], NULL, 10);
	
	/*
	 * Open filename, which consists on <key, value> pairs,
	 * both ints written out in binary. Change the value associated
	 * with srch_key to new_value.
	 * 
	 * YOUR CODE HERE...
	 */
	
	
	
}
