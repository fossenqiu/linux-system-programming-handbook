#ifndef TLPI_HDR_H
#define TLPI_HDR_H      /* Prevent accidental double inclusion */

#include <sys/types.h>  /* Type definitions used by many programs  */
#include <stdio.h>      /* Standard I/O founctions */
#include <stdlib.h>     /* Prototypes of commonly used library functions */

#include <unistd.h>     /* Prototypes for many system calls */
#include <errno.h>      /* Declares errno and defines error constants */
#include <string.h>     /* Commonly used string-handling functions */

#include "get_num.h"    /* Declares our founctions for handling numeric
                           arguments(getInt(), getLong()) */
#include "error_functions.h"  /* Declares our error-handling functions */

typdef enum {FALSE, TRUE} Boolean;

#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))

#endif
