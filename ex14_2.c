#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
void print_arguments(int argc, char *argv[]);
void print_letters(char arg[], int len);


void print_arguments(int argc, char *argv[]){
	int i, len;
	for(i = 0; i < argc; i++){
		len = (int)strlen(argv[i]);
		print_letters(argv[i], len);
	}
}


void print_letters(char arg[], int len){
	int i;
	char ch;
	for(i = 0; i <= len; ch = arg[i], i++){
		if(isalpha(ch) || isblank(ch)){
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}


int main(int argc, char *argv[]){
	print_arguments(argc, argv);
	return 0;
}