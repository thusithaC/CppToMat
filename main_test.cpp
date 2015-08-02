#include "toMatlab.h"

using namespace std;



int main(int argc, char** argv)
{

	/*Variable to operate on*/
	double length=0, X=1.5;
	
	/*Start matlab engine*/
	tomat::start();

	/*You can evaluate any matlab command through the function*/
	engEvalString(ep,"clear all") ;
	
	/*get a matlab varaible from the workspace to the native program. The name ibn the matlab workspace is 'len'. The size is determined by the actual size of the array in matlab. 
	The data type could be changed, but the arrays should match. */
	tomat::get(&length,"len",0);

	/*Push a native variable or matrix to matlab. The size of the resulting matlab array should be mentioned in row and column numbers. A cpp array would be reshaped. */
	tomat::push(&X,1,1,"X",0);

  return 0;
}

