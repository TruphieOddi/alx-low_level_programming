#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns string length
 * @s: string to be evaluated
 *
 * Return: string length
 *
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}

/**
 * *_strcpy - copies string to dest including (\0)
 * @src: copied string
 * @dest: where to copy src
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int lll, k;

	lll = 0;

	while (src[lll] != '\0')
	{
		lll++;
	}

	for (k = 0; k < lll; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}

/**
 * new_dog - this function creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: Sucess - pointer to new dog, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int lll1, lll2;

	lll1 = _strlen(name);
	lll2 = _strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (lll1 + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (lll2 + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
