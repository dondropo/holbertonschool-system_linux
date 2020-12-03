#ifndef _HEADER_H_
#define _HEADER_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*ls*/
int hls(char *arguments, char *files);

/*string tools*/

int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);

#endif
