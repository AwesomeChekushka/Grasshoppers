#ifndef GRASSHOPPERS_SRC_GH_PHYSICS_RIGIDBODY_H_
#define GRASSHOPPERS_SRC_GH_PHYSICS_RIGIDBODY_H_

#include "BoundingBox.h"
struct RigidBody {
  BoundingBox box;
  float inverse_mass;
};

#endif //GRASSHOPPERS_SRC_GH_PHYSICS_RIGIDBODY_H_
