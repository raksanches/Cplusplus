#include <boost/numeric/ublas/vector.hpp>
#include <vector>

using namespace boost::numeric::ublas;

class Material
{

public:
// vector -> unbounded boost vector;
Material(const int& index, const vector<double>& Properties);

void setIndex(const int& index);

void setProperties(const vector<double>& Properties);

int getIndex();

vector<double> getProperties();

private:
int index_;
vector<double> Properties_;
};
