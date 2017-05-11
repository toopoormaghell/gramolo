#include "scene.h"
#include "sphere.h"
#include <qfile.h>

using namespace qglviewer;

void Scene::draw() const {
  // A FAIRE
}

void Scene::addObject(Object *o) {
  // A FAIRE

  // Pour ne pas avoir de warnings "unused parameter" - A supprimer
  Q_UNUSED(o)
}

void Scene::loadFromFile(const QString &filename){
    // A FAIRE

    // Pour ne pas avoir de warnings "unused parameter" - A supprimer
    Q_UNUSED(filename)}

Vec Scene::center() const {
  // A FAIRE

  return Vec();
}

float Scene::radius(const Vec &center) const {
  // A FAIRE

  // Pour ne pas avoir de warnings "unused parameter" - A supprimer
  Q_UNUSED(center)

  return 1.0;
}
