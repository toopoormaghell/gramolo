#ifndef VIEWER_H
#define VIEWER_H

#include <QGLViewer/qglviewer.h>
#include "rayTracer.h"
#include "ray.h"

class Scene;

class Viewer : public QGLViewer
{
public:
  ~Viewer();

  void loadScene(const QString& name);

  const Scene* const scene() const { return scene_; };
  const RayTracer& rayTracer() const { return rayTracer_; }

  void setScene(Scene* const scene) { scene_ = scene; };
  void setRayTracer(const RayTracer& rayTracer) { rayTracer_ = rayTracer; }

protected :
  virtual void draw();
  virtual void init();
  virtual QString helpString() const;
  virtual void keyPressEvent(QKeyEvent *e);
  virtual void select(const QPoint& point);

  Scene* const scene() { return scene_; };

private:
  // Definit la position F1 comme �tant celle de la camera.
  void initFromScene();

  Scene* scene_;
  RayTracer rayTracer_;
};

#endif // VIEWER_H
