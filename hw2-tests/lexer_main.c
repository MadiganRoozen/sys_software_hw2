#include "lexer.h"
#include "machine_types.h"
#include "utilities.h"
#include "spl.tab.h"


//Main Method to Handle Initial Startup From Console
int main(int argc, char* argv[]) {

	//Checking Args for Filename
		//Two Args Present - Index 1 is Filename
		if (argc == 2)
			lexer_init(argv[1]);


	//Running Output
		lexer_output();

	//Checking For Error Noted
		if (lexer_has_errors()) {
			//Errors Noted - Exit 1
			return 1;
		}
		
		else {
			//Errors Not Found - Exit 0
			return 0;
		}
}

