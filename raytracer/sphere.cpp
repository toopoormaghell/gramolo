#include "sphere.h"
#include "material.h"

// Pour ne pas avoir a mettre qglviewer:: devant les classes
// definies dans le namespace qglviewer.
using namespace qglviewer;

Sphere::Sphere()
{
  setRadius(1.0);
}

void Sphere::draw() const
{
  // A FAIRE
}

void Sphere::initFromDOMElement(const QDomElement& e)
{
  // A FAIRE

  Q_UNUSED(e) // Pour ne pas avoir de warnings "unused parameter" - A supprimer
}

bool Sphere::intersect(const Ray& ray, Hit& hit) const
{
  // A FAIRE

  // Pour ne pas avoir de warnings "unused parameter" - A supprimer
  Q_UNUSED(ray)
  Q_UNUSED(hit)

  return false;
}
