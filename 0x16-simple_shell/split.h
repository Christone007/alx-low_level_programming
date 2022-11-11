#ifndef SPLIT_H
#define SPLIT_H

#include <stdio.h>
#include <stdlib.h>


int count_char(char *str, char c);
char *build_str(char *str, unsigned int start_pt, unsigned int end_pt);
char **split_str(char *str, char delim);

#endif /*SPLIT_H*/
