#ifndef FOO_H
#define FOO_H

#include "../../src/cob.h"

struct AbstractFoo {
  struct AbstractClass parent;
  int (* foo) (void * self);
};

int Foo_foo(void * self);

#endif
