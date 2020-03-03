#include "Node.h"

Node::Node(const int& index, const bounded_vector<double, 2>& initialCoordinate)
{
    index_ = index;
    initialCoordinate_ = initialCoordinate;
    
}

void Node::setIndex(const int& index)
{
    index_ = index;
}

void Node::setInitialCoordinate(const bounded_vector<double, 2>& initialCoordinate)
{
    initialCoordinate_ = initialCoordinate;
}

int Node::getIndex()
{
    return index_;
}

bounded_vector<double, 2> Node::getInitialCoordinate()
{
    return initialCoordinate_;
}
