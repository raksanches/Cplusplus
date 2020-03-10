
#include <fstream>
#include <iostream>
#include <vector>

// Boost libraries
#include <boost/array.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include "Node.h"
#include "Element.h"

class Solid
{

 public:
    //função para Leitura dos dados
    void dataReading(const std::string& inputFile, const std::string& mirror);

    void printNodes();
    void printConectivity();

    std::vector<Node *> nodes_;
    std::vector<Element *> elem_;

 private:
    std::string inputFile; 		//Input file
    int numNodes;						//Number of nodes
    int numElem;      			   //Number of elements 

};
