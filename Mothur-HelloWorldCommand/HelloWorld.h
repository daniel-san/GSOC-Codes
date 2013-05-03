#ifndef HELLOWORLDANIEL_H
#define HELLOWORLDANIEL_H


#include "command.hpp"
#include "commandfactory.hpp"

/*****************************************************/

class HelloWorldCommand : public Command {

	public:
		HelloWorldCommand(string);
		~HelloWorldCommand();
                string getCommandName() {return "HelloWorld";}
                string getCommandCategory() {return "Test";}
                string getHelpString() {return "Nothing yet...";}
                string getCitation() {return "Nothung...";}
		string getDescription() {return "A command to print a Hello World!";}
		string getOutputPattern(string);
		vector<string> setParameters()	{ return outputNames;	} //dummy, doesn't really do anything	
		int execute();
		void help();
	
	private:
	
	vector<string> outputNames;	

};

/*****************************************************/

#endif
