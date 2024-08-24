/* Public domain. */

#include <unistd.h>
#include <grp.h>
#include "hasshsgr.h"
#include "prot.h"

#ifdef HASSHORTSETGROUPS
int prot_gid(gid_t gid)
{
  if (setgroups(1,&gid) == -1) return -1;
#else
int prot_gid(int gid)
{
  short x[2];
  x[0] = gid; x[1] = 73; /* catch errors */
  if (setgroups(1,x) == -1) return -1;
#endif
  return setgid(gid); /* _should_ be redundant, but on some systems it isn't */
}

int prot_uid(int uid)
{
  return setuid(uid);
}
