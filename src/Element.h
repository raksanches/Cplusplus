#include <boost/numeric/ublas/vector.hpp>
#include <vector>

using namespace boost::numeric::ublas;

class Element
{

public:
Element(const int& index, const bounded_vector<int, 3>& Conectivity);

void setIndex(const int& index);

void setConectivity(const bounded_vector<int, 3>& Conectivity);

int getIndex();

bounded_vector<int, 3> getConectivity();

private:
int index_;
bounded_vector<int, 3> Conectivity_;
};
