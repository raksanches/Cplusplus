//static char help[] = "Programa para elasticidade bidimensional";
#include <fstream> 
#include "src/Solid.h"
int main(int argc, char **args)
{

    Solid problem;

    
    problem.dataReading("entrada.txt", "espelho.txt");

    problem.printNodes();
	// Starts main program invoking PETSc
    //    PetscInitialize(&argc, &args, (char*)0, help);

    //int rank, size;

    //MPI_Comm_rank(PETSC_COMM_WORLD, &rank);
    //MPI_Comm_size(PETSC_COMM_WORLD, &size);

	//#include "examples/plate_with_hole.h"
    //#include "examples/nonlinear_clamped_beam.h"
    //#include "examples/cantilever_beam.h"
    //#include "examples/tensioned_bar.h"
	
        //	PetscFinalize();
	return 0;
}
