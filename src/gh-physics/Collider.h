
#ifndef GRASSHOPPERS_SRC_GH_PHYSICS_COLLIDER_H_
#define GRASSHOPPERS_SRC_GH_PHYSICS_COLLIDER_H_

#include "RigidBody.h"
class Collider {
 private:
  RigidBody& body_1_;
  RigidBody& body_2_;
 public:
  Collider(RigidBody& body_1, RigidBody& body_2);

};

#endif //GRASSHOPPERS_SRC_GH_PHYSICS_COLLIDER_H_
