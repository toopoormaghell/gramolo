TEMPLATE = app
TARGET   = rt
CONFIG  += qt opengl warn_on release thread

HEADERS  = viewer.h   sphere.h   material.h   object.h   scene.h   ray.h   camera.h   light.h   rayTracer.h   hit.h color.h
SOURCES  = viewer.cpp sphere.cpp material.cpp object.cpp scene.cpp ray.cpp camera.cpp light.cpp rayTracer.cpp main.cpp

# Qt 2.3 users must edit config.pri
include( config.pri )
