#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int priority, pid;
  if(argc < 3){
    printf(2,"Usage: pid priority\n");
    exit(0);
  }
  pid = atoi(argv[1]);
  priority = atoi(argv[2]);
  if (priority < 0 || priority > 20){
    printf(2,"Invalid priority (0-20)!\n");
    exit(0);
  }
  chpr(pid, priority);
  exit(0);
}