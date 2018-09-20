#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char line[255];
	FILE *infile;
	infile = fopen(argv[1],"r");
	
	if (infile == NULL){
		printf("Cannot open the file. \n");
		return(1);
		
	}
	while(fgets(line, 255, infile)){
		printf(line);
	}
	fclose(infile);
	return (0);
}
