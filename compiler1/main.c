#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  this is the main method for the complier,
 *                for now it is used for lyntax, and there
 *                may have a tree method under this.
 * =====================================================================================
 */
int main(int argc, char** argv){
	if(argc <= 1)
		return 1;
	FILE* f = fopen(argv[1], "r");
	if (!f){
		perror(argv[1]);
		return 1; 
	}
	yyrestart(f);
	yyparse();
	return 0;
}
