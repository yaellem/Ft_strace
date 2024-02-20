#include "../includes/strace_errors.h"

int    usage(void)
{
    fprintf(stderr, "ft_strace: must have PROG [ARGS]\n");
    fprintf(stderr, "./ft_strace <PROG> [optionnal arguments]\n");
    fprintf(stderr, "Try './strecae -h' for more information.");
    return EXIT_FAILURE;
}

int     errors_handler(int errcode)
{
    (void)errcode;
    return EXIT_FAILURE;
}