#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Pilar Thornbrugh
 * Desc: main file containing the prototypes of all functions included in C- malloc, free.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
