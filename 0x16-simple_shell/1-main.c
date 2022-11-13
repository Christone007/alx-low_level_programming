#include "main.h"

int main(void)
{
	int i = 0;
	/*print_path_dir();*/

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	printf("INITIAL ENVIRONMENT\n\n");

	printf("Getting LANG %s\n", _getenv("LANG"));

	printf("Setting LANG to M.UTF-9 but do not overwrite if exists\n");
	_setenv("LANG", "M.UTF-9", 0);


	printf("Getting LANG %s\n", _getenv("LANG"));
	printf("%s\n", _getenv("LANG"));


	printf("Setting LANG to M.UTF-9 but with ability to overwrite if exists\n");
	_setenv("LANG", "M.UTF-9", 1);

	
	printf("Getting LANG %s\n", _getenv("LANG"));
	printf("%s\n", _getenv("LANG"));

	printf("setting new variable LUNG to 'I have 2 of them'\n");
	_setenv("LUNG", "I have 2 of them", 0);


	printf("Getting LUNG %s\n", _getenv("LUNG"));
	printf("%s\n", _getenv("LUNG"));



	i = 0;
	printf("FINAL ENVIRONMENT\n\n");
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}

	printf("\n UNSET THE LANG and LUNG ENVIRONMENT VARIABLE\n");
	_unsetenv("LANG");
	_unsetenv("LUNG");

	
	printf("FINAL ENVIRONMENT\n\n");
	_printenv();

	return (0);
}
