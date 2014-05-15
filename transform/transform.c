#include "transform.h"

//
//  transform.c
//
//  functions: int transform( float p_matrix[ 4 ][ 4 ], 
//      float p_vectors[][ 4 ], float p_outputs[][ 4 ], int length )
//      arguments:
//          p_matrix: a quaterion transformation matrix, row first.
//          p_vectors: a list of vectors to transform using the
//              given matrix.
//          p_outputs: a list of vectors to store the transformed
//              vectors into.
//          int length: The length of each array.
//      function:
//          The function shall transform each vector in p_vectors
//          with the corresponding transformation matrix in
//          p_matrix via dotting each vector on the left by
//          the matrix in question and place each output produced
//          in the corresponding index in p_outputs.
//
//  implement the functions in this file using appropriate vector
//  instructions as directed in the lab instructions.
//

int transform( float p_matrix[ 4 ][ 4 ], 
	       float p_vectors[][ 4 ], 
	       float p_outputs[][ 4 ], int length )
{

    int i,j,k;
    for (i=0; i<length; i++) {
        for (j=0; j<4; j++) {
            for (k=0; k<4; k++) {
                p_outputs[i][j] += (p_matrix[j][k] * p_vectors[i][k]);
            }
        }
    }

    return 0;
}

