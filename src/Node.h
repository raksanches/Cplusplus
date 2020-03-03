#include <boost/numeric/ublas/vector.hpp>
#include <vector>

using namespace boost::numeric::ublas;

class Node
{

public:
Node(const int& index, const bounded_vector<double, 2>& initialCoordinate);

void setIndex(const int& index);

void setInitialCoordinate(const bounded_vector<double, 2>& initialCoordinate);

int getIndex();

bounded_vector<double, 2> getInitialCoordinate();

private:
int index_;
bounded_vector<double, 2> initialCoordinate_;
};
