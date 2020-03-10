#include "Material.h"

Material::Material(const int& index, const vector<double>& Properties)
{
    index_ = index;
    Properties_ = Properties;
}

void Material::setIndex(const int& index)
{
    index_ = index;
}

void Material::setProperties(const vector<double>& Properties)
{
    Properties_ = Properties;
}

int Material::getIndex()
{
    return index_;
}

vector<double> Material::getProperties()
{
    return Properties_;
}
