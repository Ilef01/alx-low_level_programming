#ifndef MAIN_H
#define MAIN_H

char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void more_numbers(void);
void print_most_numbers(void);
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);

#endif

