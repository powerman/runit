/* Public domain. */

#ifndef ALLOC_H
#define ALLOC_H

extern /*@null@*//*@out@*/char *alloc(unsigned int n);
extern void alloc_free(void *);
extern int alloc_re(char **x, unsigned int m, unsigned int n);

#endif
