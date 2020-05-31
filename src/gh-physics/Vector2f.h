#ifndef GRASSHOPPERS_SRC_GH_PHYSICS_VECTOR2F_H_
#define GRASSHOPPERS_SRC_GH_PHYSICS_VECTOR2F_H_

// Класс, который описывает двухкомпонентный вектор с полями типа float
struct Vector2f {
  // Абсцисса вектора
  float x;
  // Ордината вектора
  float y;
  // Вычисляет длину данного вектора
  [[nodiscard]] float Length() const;
  // Вычисляет квадрат длины данного вектора
  [[nodiscard]] float LengthSquared() const;
};

#endif //GRASSHOPPERS_SRC_GH_PHYSICS_VECTOR2F_H_
