#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -> lenth of string
 * @str: string measured
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy -> copies string pointed to by src
 * @dest: buffer storage
 * @src: source string
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index];  index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog -> create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
