#ifndef SHELL_H
#define SHELL_H

typedef struct {
    int argc;
    char ** argv;
} argList;

int parse_command(char *str, char *argv[]);

typedef void cmdfunc(int, char *[]);

cmdfunc *do_command(const char *str);

#endif
