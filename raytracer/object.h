#ifndef OBJECT_H
#define OBJECT_H

#include "QGLViewer/qglviewer.h"
#include "hit.h"
#include "material.h"
#include "ray.h"

// Classe générique abstraite dont vont deriver les objets de la scene.
class Object {
public:
  virtual ~Object(){};

  // Accesseurs
  const Material &material() const { return material_; }
  const qglviewer::Frame &frame() const { return frame_; }

  // Modifieurs
  void setMaterial(const Material &material) { material_ = material; }
  void setFrame(const qglviewer::Frame &frame) { frame_ = frame; }

  // Affichage openGL de l'objet
  virtual void draw() const = 0;

  // Rayon d'une sphère englobante (meme grossiere).
  virtual float boundingRadius() const = 0;

  // Methode principale d'intersection entre l'objet et un rayon
  virtual bool intersect(const Ray &, Hit &hit) const = 0;

  virtual void initFromDOMElement(const QDomElement &e);

protected:
  // Tous les objets ont un repere et un materiau.
  qglviewer::Frame frame_;
  Material material_;
};

#endif // OBJECT_H
