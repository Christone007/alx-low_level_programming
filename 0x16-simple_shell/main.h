#ifndef MAIN_H
#define MAIN_H
/*TODO: INSERT ALL FUNCTION PROTOTYPES FROM THE DIFFERENT FILES*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

/*Print the directories of PATH env variable*/
void print_path_dir();

typedef struct list_s{
	char *dir;
	struct list_s *next;
} list_t;


/*Helper Functions*/
int check_match(const char *name, char *env);
list_t *append_to_list(list_t *head, char *str);
list_t *build_linked_list(char **arr);

/*Environment Functions*/
int get_match_index(const char *name);
char *_getenv(const char *name);
void _printenv(void);
int _setenv(const char *name, const char *value, int overwrite);

/*Array Functions*/
int array_size(char **arr);

/*String Functions*/
char *_strcpy(char *str);
unsigned int str_len(const char *str);
int count_char(char *str, char c);
char *build_str(char *str, unsigned int start_pt, unsigned int end_pt);
char **split_str(char *str, char delim);
	
char *str_concat_char(const char *str1, char c, const char *str2);

#endif /*MAIN_H*/
