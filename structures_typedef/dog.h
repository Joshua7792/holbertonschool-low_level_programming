/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Prototypes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}; typedef struct dog dog

/* prototypes use in this header file */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
