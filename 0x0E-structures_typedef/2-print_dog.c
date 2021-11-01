#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: pointer of the dog
 */
void print_dog(struct dog *d)
{
	if(d == NULL) /**if statement: if the variable pointer '*d' is equal to 'NULL', excecute line 11*/
		return;

	if (d->name == NULL) /**if statement: if 'd->name' is equal to 'NULL', execute line 14*/
		printf("Name: (nil)\n"); /**print format: "Name:*/
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	if(d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
