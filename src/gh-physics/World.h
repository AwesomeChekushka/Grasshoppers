#ifndef GRASSHOPPERS_SRC_GH_PHYSICS_WORLD_H_
#define GRASSHOPPERS_SRC_GH_PHYSICS_WORLD_H_

#include <vector>
#include "RigidBody.h"
#include "Collider.h"

class World {
  // Шаг времени внутри мира
  float dt_;
  // Точность вычислений внутри мира
  float eps_;
  // Физические тела, находящиеся в мире
  std::vector<RigidBody> bodies_;
  // Пары столкнувшихся тел
  std::vector<Collider> colliders_;
 public:
  explicit World(float dt, float eps);
  ~World();
  void Step();

};

#endif //GRASSHOPPERS_SRC_GH_PHYSICS_WORLD_H_
