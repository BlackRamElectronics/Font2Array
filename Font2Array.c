//====================================================================================
// Black Ram Electronics - BlackRamElectronics.com
// Font2Array
//====================================================================================

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>


//====================================================================================
int main(int argc, char *argv[])
{

	// Print application header
	printf("==========================================================================\r\n");
	printf("|                            Font2Array                                  |\r\n");
	printf("| www.BlackRamElectronics.com   --   www.GitHub.com/BlackRamElectronics  |\r\n");
	printf("| This aplication converts a true type font to a C array                 |\r\n");
	printf("==========================================================================\r\n");
	
	// Check that we have be supplied the required argumants
	if(argc == 1)
	{
		printf("Please check your application call, format should be:\r\n");
		printf("[] = required, <> = optional\t\n");
		printf("\tFont2Array [font path] <extended char file>\r\n");
		printf("\textended char file: Font2Array will populate all the standard ASCII\r\n");
		printf("\tchars, if additional chars are needed then create a file containing them\r\n");
	}
	
	
}

