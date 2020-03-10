#include "Solid.h"

void Solid::dataReading(const std::string& inputFile, const std::string& mirror){
    std::cout<<"Reading input data"<<std::endl;

    std::string line;
    
    //Defines input and output files    
    std::ifstream inputData(inputFile.c_str());
    std::ofstream mirrorData(mirror.c_str());

    getline(inputData,line);

    double numNodes;

    inputData >> numNodes;
    
    nodes_.reserve(numNodes);
    nodes_.clear();

    mirrorData << "Number of nodes" << std::endl; 
    mirrorData << numNodes;

    getline(inputData, line);
    getline(inputData, line);
    
    double numElem;
    
    inputData >> numElem;

    elem_.reserve(numElem);
    elem_.clear();

    mirrorData << std::endl << "Number of elements" << std::endl; 
    mirrorData << numElem;
    
    getline(inputData, line);
    getline(inputData, line);

    mirrorData << std::endl << "Nodes Coordinates" << std::endl; 

    // Leitura de nós
    for (int i = 0; i < numNodes; i++)
    {
        boost::numeric::ublas::bounded_vector<double,2> x;
        double x3;

        inputData >> x(0) >> x(1) >> x3;
        mirrorData << x(0) << " " << x(1) << " " << x3 << std::endl;

        std::getline(inputData, line);

        Node *node = new Node(i,x);
        nodes_.push_back(node);
    };

    getline(inputData, line);
    //getline(inputData, line);

    mirrorData << "Element Conectivity" << std::endl; 

    // Leitura de conectividade
    for (int i = 0; i < numElem; i++)
    {
        boost::numeric::ublas::bounded_vector<int,3> conec;

        inputData >> conec(0) >> conec(1) >> conec(2);
        mirrorData << conec(0) << " " << conec(1) << " " << conec(2) << std::endl;

        std::getline(inputData, line);

        Element *elem = new Element(i,conec);
        elem_.push_back(elem);
    };


    return;
};

void Solid::printNodes(){
    
    std::cout<<"Printing nodes"<<std::endl;
    
    for (int i = 0 ; i < nodes_.size() ; i++){
        std::cout<<"Node "<< nodes_[i]->getIndex()<< std::endl;
        std::cout<<"Coordinate "<< nodes_[i]->getInitialCoordinate()(0)<<" "<< nodes_[i]->getInitialCoordinate()(1)<< std::endl;  
    }
    
    return;
};

void Solid::printConectivity(){
    
    std::cout<<"Printing Connectivity"<<std::endl;
    
    for (int i = 0 ; i < elem_.size() ; i++){
        std::cout<<"Element "<< elem_[i]->getIndex()<< std::endl;
        std::cout<<"Connectivity "<< elem_[i]->getConectivity()(0) << " " << elem_[i]->getConectivity()(1) << " " << elem_[i]->getConectivity()(2) << std::endl;
    }
    
    return;
};
