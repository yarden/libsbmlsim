#include <time.h>
#include "libsbmlsim/libsbmlsim.h"

int get_end_cycle(double sim_time, double dt) {
  int r = sim_time / dt;
  return r;
}

void set_seed(void){
  srand((unsigned)time(NULL));
}

char* dupstr(const char *str)
{
  char *copy = NULL;
  if (str) {
    copy = malloc(strlen(str)+1);
    if (copy)
      strcpy(copy, str);
  }
  return copy;
}
