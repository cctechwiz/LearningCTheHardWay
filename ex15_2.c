#include <stdio.h>

int main(int argc, char *argv[])
{
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};

	int count = sizeof(ages) / sizeof(int);
	int *cur_age = ages;
	char **cur_name = names;

	for(cur_name = names, cur_age = ages;
			(cur_age - ages) < count; //this will subtract to 0, 1, 2, 3, 4 
			cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);

		printf("%p :cur_age\n", cur_age);
		printf("%p :age\n", ages);
		printf("cur_age - ages: %ld \n", cur_age - ages);

		printf("\n");
	}

	return 0;
}