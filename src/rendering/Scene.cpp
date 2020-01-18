#include "Scene.h"

const std::vector<const Absorber *> &Scene::getAbsorbers() const
{
    return this->absorbers;
}

void Scene::addAbsorber(const Absorber &absorber)
{
    this->absorbers.push_back(&absorber);
}

const std::vector<const PointLight *> &Scene::getLights() const
{
    return this->lights;
}

void Scene::addLight(const PointLight &light)
{
    if(this->lights.size() >= MAX_POINT_LIGHTS)
        return;

    this->lights.push_back(&light);
}