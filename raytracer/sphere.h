#ifndef SPHERE_H
#define SPHERE_H

#include "object.h"

class Sphere : public Object {
public:
  // Set default parameters. Radius is 1.0, position is 0,0,0.
  Sphere();
  virtual ~Sphere(){};

  // Accesseurs
  float radius() const { return radius_; }
  void setRadius(float radius) { radius_ = radius; }

  virtual void draw() const;
  virtual float boundingRadius() const { return radius(); }
  virtual bool intersect(const Ray &, Hit &hit) const;

  virtual void initFromDOMElement(const QDomElement &e);

private:
  float radius_;
};

#endif // SPHERE_H
