#ifndef GRASSHOPPERS_SRC_GH_PHYSICS_BOUNDINGBOX_H_
#define GRASSHOPPERS_SRC_GH_PHYSICS_BOUNDINGBOX_H_

#include "Vector2f.h"

struct BoundingBox {
 public:
  Vector2f p_1;
  Vector2f p_2;
  bool intersects(BoundingBox other);
};

#endif //GRASSHOPPERS_SRC_GH_PHYSICS_BOUNDINGBOX_H_
