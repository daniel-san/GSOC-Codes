
#include "HelloWorld.h"

//**********************************************************************************************************************
//option will contain the parameter string from your command 
//for example: yourcommand(parameter1=value1, parameter2=value2)
//option = "parameter1=value1, parameter2=value2"

HelloWorldCommand::HelloWorldCommand(string option){  
	try {


	}
	catch(exception& e) {
//		errorOut(e, "HelloWorld", "HelloWorld");
		exit(1);
	}
}
//**********************************************************************************************************************

string HelloWorldCommand::getOutputPattern(string type){
    try{
        string pattern = "";


	return pattern;
    }catch(exception& e){
        m->errorOut(e,"HelloWorldCommand","getOutputPattern");
    }
}

void HelloWorldCommand::help(){
	try {
		m->mothurOut("The YourCommand command ....\n");
	}
	catch(exception& e) {
		m->errorOut(e, "HelloWorld", "help");
		exit(1);
	}
}

//**********************************************************************************************************************
HelloWorldCommand::~HelloWorldCommand(){}
//**********************************************************************************************************************
int HelloWorldCommand::execute(){
	try {
		m->mothurOut("Hello World! And welcome to a new Mothur command");
		return 0;		
	}

	catch(exception& e) {
		m->errorOut(e, "HelloWorld", "execute");
		exit(1);
	}
}
//**********************************************************************************************************************

