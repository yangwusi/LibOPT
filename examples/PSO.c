#include "common.h"
#include "function.h"
#include "pso.h"

int main(){
    
    SearchSpace *s = NULL;
    int i;
    
    s = ReadSearchSpaceFromFile("examples/model_files/pso_model.txt", _PSO_); /* It reads the model file and creates a search space. We are going to use PSO to solve our problem. */
    
    InitializeSearchSpace(s, _PSO_); /* It initalizes the search space */
    
    runPSO(s, Sphere); /* It minimizes function Sphere */
    
    DestroySearchSpace(&s, _PSO_); /* It deallocates the search space */
        
    return 0;
}