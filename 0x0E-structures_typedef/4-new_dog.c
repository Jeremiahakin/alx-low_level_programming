#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_len, owner_len;

name_len = strlen(name);
owner_len = strlen(owner);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	return (NULL);

name_copy = malloc((name_len + 1) * sizeof(char));
owner_copy = malloc((owner_len + 1) * sizeof(char));
if (name_copy == NULL || owner_copy == NULL)
{
free(new_dog);
free(name_copy);
return (NULL);
}

strcpy(name_copy, name);
strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
