#include "header.h"

int main(int argc, char *argv[])
{
    if (argc > 3 || argc <= 1)
    {
		error();    
        return (0);
    }
	if (argc == 3)
	{
		printf("argv[1]: %s\n", argv[1]);			// O primeiro argumento será o novo dicionário de referência
		printf("argv[2]: %s\n", argv[2]);			// O segundo argumento é o valor que você precisa converter.
		import_dict(argv[1]);
	}
	if (argc == 2)
	{
		printf("argv[1]: %s\n", argv[1]);			// Se existir apenas um argumento, será o valor a converter;
		import_dict("numbers.dict");
		printf("%s\n", get_from_hashmap("10"));
    	printf("%s\n", get_from_hashmap("1000000000000000000000000000000000000"));
    	printf("%s\n", get_from_hashmap("2"));
	}
    return (0);
}