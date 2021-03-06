#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "ray.h"

class Object;

struct Hit {
  const Object *object;
  double dist;
  vec3 normal;
};

class Object {
public:
  Object(){};
  virtual ~Object(){};
  virtual Hit Intersection(const Ray &ray) const = 0;
  vec3 color;
};

#endif
