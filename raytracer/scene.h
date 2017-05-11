#ifndef SCENE_H
#define SCENE_H

#include "camera.h"
#include "object.h"

class Scene {
public:
  void draw() const;
  void addObject(Object *o);
  void loadFromFile(const QString &filename);

  qglviewer::Vec center() const;
  float radius(const qglviewer::Vec &center) const;

  void setCamera(const Camera &camera) { camera_ = camera; }
  const Camera &camera() const { return camera_; }
  Camera &camera() { return camera_; }

private:
  Camera camera_;
  // A FAIRE
};

#endif // SCENE_H
