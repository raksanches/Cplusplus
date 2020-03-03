#include "Solid.h"

void Solid::dataReading(const std::string& inputFile, const std::string& mirror){
    std::cout<<"Reading input data"<<std::endl;

    // double valor;
    // double& ref = valor;

    // ref=1.12341235;
    
    // double* valorpointer;
    // valorpointer = &valor;

    
    // std::cout<<valor<<std::endl;
    
    // std::cout<<&valor<<std::endl;

   
    
    // std::cout<<valorpointer<<std::endl;
    
    // std::cout<<&valorpointer<<std::endl;
    
    // std::cout<<*valorpointer<<std::endl;



    // std::cout<<ref<<std::endl;
    
    // std::cout<<&ref<<std::endl;

    
    
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

    getline(inputData,line);getline(inputData,line);
    
    double numElem;
    
    inputData >> numElem;
    
    mirrorData << std::endl << "Number of elements" << std::endl; 
    mirrorData << numElem;
    
    getline(inputData, line); getline(inputData, line);
    
    
    for (int i = 0; i < numNodes; i++)
        {
            boost::numeric::ublas::bounded_vector<double,2> x;
            double x3;
            
            inputData >> x(0) >> x(1) >> x3;
            std::getline(inputData, line);
            
            Node *node = new Node(i,x);
            nodes_.push_back(node);
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
