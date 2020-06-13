#include "World.h"

void World::Step() {
  // get all
  auto bodies_cnt = static_cast<int>(bodies_.size());
  for (auto ind = 0; ind < bodies_cnt; ++ind){
    for (auto other = ind + 1; other < bodies_cnt; ++other){
      auto body_1 = bodies_[ind];
      auto body_2 = bodies_[other];

      if (body_1.box.intersects(body_2.box)){
        colliders_.emplace_back(Collider(body_1, body_2));
      }
    }
  }
}
World::World(float dt, float eps): dt_(dt), eps_(eps) {}
World::~World() = default;
