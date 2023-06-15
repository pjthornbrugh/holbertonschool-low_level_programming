#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Pilar J Thornbrugh
 * Desc. Header file containing the prototypes of all fucntions
 *       used in the 0x008-C, recursion
 *
 */

#include <stdlib.h>
#include <stdio.h>

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
