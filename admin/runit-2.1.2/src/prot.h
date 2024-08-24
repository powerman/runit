/* Public domain. */

#ifndef PROT_H
#define PROT_H

#include "prot.h"

#ifdef HASSHORTSETGROUPS
extern int prot_gid(gid_t);
#else
extern int prot_gid(int);
#endif
extern int prot_uid(int);

#endif
