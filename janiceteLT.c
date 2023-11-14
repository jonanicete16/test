// Jonathan ANicete
//
//
#include <stdio.h>

int main(void) {

	int input;

	printf("Enter a number to be squared: ");
	scanf("%d", &input);

	int squared = input * input;
	printf("\nThe number you entered is %d, when squared it is %d\n. Would I rather be feared or loved? Easy. Both. I want people to be afraid of how much they love me\n", input, squared);
	return 0;

}
