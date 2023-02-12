#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
	int n = 5;
	int from = 2, dest = 3;
	int var;
	    
        if(argc == 2)
		n = atoi(argv[1]);
	    
        else if(argc >= 3)
        {
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		var = atoi(argv[3]);
		
        if(var != from)
			dest = var;
		
        else
        {
			fprintf(stderr,"WRONG PROCESS");
			exit(0);
		}
	    }
	
    towers(n, from, dest);
    	exit(0);
}

