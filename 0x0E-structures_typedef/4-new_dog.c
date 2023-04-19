#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - funct that creates a new dog
 * @name: pointer to char array to be set as the dogs name
 * @age: float for the age of the dog
 * @owner: pointer to a char array used  as the owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_copy = malloc(sizeof(char) * (strlen(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(name_copy, name);

owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
if (owner_copy == NULL)
{
free(new_dog);
free(name_copy);
return (NULL);
}
strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}

