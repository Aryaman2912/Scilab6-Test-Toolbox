// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Rupak Rokade
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include<sciprint.h>
#include "localization.h"
#include "trans.h"

static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out){
	
    // Declare necessary variables
    double* in1 = NULL;
	double* out1 = NULL;
    int size1;
    int rows;
    int columns;

    // Error checking

    //number of input arguments is not 1
    if(nin != 1){
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    //input is not a real, 2d matrix
    if(scilab_isDouble(env,in[0]) == 0 || scilab_isComplex(env,in[0]) == 1 || scilab_isMatrix2d(env,in[0]) == 0){
        Scierror(999,_("%s: Wrong type of input argument %d: Real matrix expected.\n"),fname,1);
        return 1
    }

    //number of output arguments is not 1
    if(nout != 1){
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    // Get rows and columns of input matrix
    size1 = scilab_getDim2d(env,in[0],&rows,&columns);

    // Get pointer to in[0] in in1
    scilab_getDoubleArray(env,in[0],&in1);

    // Create 2d matrix of double type with dimensions (columns,rows) as it is transpose of given matrix
    out[0] = scilab_createDoubleMatrix2d(env,columns,rows,0);

    // Get pointer to out[0] in out1
    scilab_getDoubleArray(env,out[0],&out1);

    // Call transpose function to store the transpose of in[0] in out[0]
    trans((double*)out1,rows,columns,(double*)in1);
    
    return 0;
    }
}
