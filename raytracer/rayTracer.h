#ifndef RAY_TRACER_H
#define RAY_TRACER_H

#include <qimage.h>
#include "color.h"
#include "ray.h"

class Scene;

class RayTracer
{
public :
  RayTracer() : scene_(NULL) {};

  const Scene* const scene() const { return scene_; }
  const QImage& image() const { return image_; }

  void setScene(const Scene* const scene) { scene_ = scene; }

  void renderImage() const;
  void saveImage(const QString& name, bool overwrite=false) const;

  Color rayColor(const Ray& ray) const;

private:
  const Scene* scene_;
  mutable QImage image_;
};

#endif // RAY_TRACER_H
