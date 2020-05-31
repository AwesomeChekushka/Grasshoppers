//
// Created by Chekushka on 31.05.2020.
//

#include <cmath>
#include "Vector2f.h"

float Vector2f::LengthSquared() const {
  auto x_squared = this->x * this->x;
  auto y_squared = this->y * this->y;

  return x_squared + y_squared;
}

float Vector2f::Length() const {
  return static_cast<float>(std::sqrt(this->LengthSquared()));
}