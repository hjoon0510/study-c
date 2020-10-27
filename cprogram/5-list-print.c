/* security check */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void){
	struct user{
		int number;
		char name[20];
		char tel[16];
	};

	struct user* data[5];
	// input and display 5 students.
	int total = 5;
	for (int i = 0; i < total; i++){
		data[i] = (struct user*) malloc(sizeof (struct user));

		scanf("%d", &data[i]->number);
		scanf("%s", data[i]->name);
		scanf("%s", data[i]->tel);

		printf("\n");
		printf("Result:\n");
		printf("number: %d\n", data[i]->number);
		printf("name: %s\n", data[i]->name);
		printf("tel : %s\n", data[i]->tel);

		free(data[i]);

	}


	return 0;
}
