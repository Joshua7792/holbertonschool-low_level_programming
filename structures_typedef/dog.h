#ifndef DOG_T
#define DOG_T

/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* dog_t - typedef for structure */
typedef struct dog dog_t;

/* prototypes use in this header file */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
