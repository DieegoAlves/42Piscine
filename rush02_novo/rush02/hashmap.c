#include "header.h"

typedef struct s_hashmap
{
    char *key;
    char *value;
    struct s_hashmap *next;
} t_hashmap;

t_hashmap *hashmap[HASHMAP_SIZE];

unsigned int hash(char *key)
{
	unsigned long hash = 5381;
    int c;

    while ((c = *key++)) {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }
    return hash % HASHMAP_SIZE;
}

void add_to_hashmap(char *key, char *value)
{
    unsigned int index = hash(key);
    t_hashmap *new = malloc(sizeof(t_hashmap));
	if (new == NULL)
    {
        return;
    }
    new->key = ft_strdup(key);
    new->value = ft_strdup(value);   
	new->next = hashmap[index];
    hashmap[index] = new;
}

void free_hashmap() 
{
    int	i;

	i = 0;
    while (i < HASHMAP_SIZE)
    {
        t_hashmap *new = hashmap[i];
        while (new)
        {
            t_hashmap *tmp = new;
            new = new->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
		i++;
    }
}

char *get_from_hashmap(char *key) 
{
    unsigned int index = hash(key);
    t_hashmap *new = hashmap[index];
    while (new) 
	{
        if (ft_strcmp(new->key, key) == 0)
            return new->value;
        new = new->next;
    }
    return (NULL);
}