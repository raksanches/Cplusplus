#include "Element.h"

Element::Element(const int& index, const bounded_vector<int, 3>& Conectivity)
{
    index_ = index;
    Conectivity_ = Conectivity;
}

void Element::setIndex(const int& index)
{
    index_ = index;
}

void Element::setConectivity(const bounded_vector<int, 3>& Conectivity)
{
    Conectivity_ = Conectivity;
}

int Element::getIndex()
{
    return index_;
}

bounded_vector<int, 3> Element::getConectivity()
{
    return Conectivity_;
}
