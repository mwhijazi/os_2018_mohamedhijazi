#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char line[255];
	char *pattern;
	FILE *infile;
	pattern = argv[1];
	infile = fopen(argv[2],"r");

	
	
	if (infile == NULL){
		printf("Cannot open the file. \n");
		exit(0);
		
	}
	while(fgets(line, 255, infile)){
		int patternlen = strlen(pattern);
		
		int j = 0;
		for(j = 0; j <= (strlen(line)-patternlen); j++){
			int i = 0;
			int count2 = 0;
			for (i = 0; i < patternlen; i++){
				if (pattern[i] == line[j + i]){
					count2++;
				}
				if (count2 == patternlen){
					j =(strlen(line)-patternlen)+1;

				printf(line);		
				}
				
			}
			
			//printf ("%d",  count2);
		}
		
	}
	fclose(infile);
	return (0);
}
