#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  givename(first);
}

struct foo{char *name; int x;};
struct foo first;
struct foo p;

p = &first;

int givename(struct foo a){
  printf("Struct value: %s[%d}",p->name,p->x);
  return 0;
}
