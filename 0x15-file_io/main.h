#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_98(int f0, char *buffer, char *argv);
void error_99(int f0, char *buffer, char *argv);
void error_100(int f0, char *buffer);
void error_file(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);

#endif
