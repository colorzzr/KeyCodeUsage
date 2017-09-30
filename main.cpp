#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iomanip>

using namespace std;

bool checkEOF(bool eof, stringstream &lineStream){
	//if true -> too few argument
	if(eof == true){
		cout << "> Error: too few arguments" << endl;
		//lineStream.clear();
		return true;
	}
	else return false;
}

/********************************************
 * here is check for int and double			*
 * cos there are two fail() condition		*
 * 1. invalid arguments 					*
 * 2. eof() there is no more we can read 	*
 ********************************************/
bool checkBadInput( stringstream &lineStream){
	/********************************
	 * !!!!!!!!!!!!!!!!!!!!!!!!!!	*
	 * each time you set flag		*
	 * clear it 					*
	 ********************************/
	bool badInput = lineStream.fail();
	if(badInput) {
		lineStream.clear();
		string temp;
		//conner case here if there is space after node1
		lineStream >> temp;
		//if string can read something -> character input :(
		badInput = lineStream.fail();
		if(badInput){
			cout << "> Error: too few arguments" << endl;
			lineStream.clear();
			return true;
		}
		else{
			cout << "> Error: invalid argument" << endl;
			lineStream.clear();
			lineStream.ignore(1000, '\n');
			return true;
		}
	}
	return false;
}

int parser() {
	string line, command;
	
	while ( !cin.eof () ) {
		//get whole line of input
		getline (cin, line);
		//loading line into buffer
		stringstream lineStream (line);

		/*********************************************
		 * load first argument for choosing function *
		 * insertR -> insert resistor				 *
		 * modifyR -> change the value of resistance *
		 * printNode -> print the node 				 *
		 * printR -> print specific resistor         *
		 * deleteR -> delete specific resistor 		 *
		 *********************************************/
		//take name value node1 node2
		lineStream >> command;

		/******************************************
		 * cos I use continue in the if statement *
		 * if I dont keep one check eof 		  *
		 * it would pop up invalid command		  *
		 ******************************************/
		if(cin.eof()){
			break;
		}

		else if (command == "insertR") {
			string name;
			int value;
			int node1, node2;
			string tempy;
			
			//bad input continue to ask input
			bool badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;
			
			//input name
			lineStream >> name;
			//conner case: named "all"
			if(name == "all"){
				cout << "> Error: resistor name cannot be thekeyword \"all\"" << endl;
			}
			badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			//only check fail for int
			lineStream >> value;
			badInput = checkBadInput(lineStream);
			if(badInput) continue;
			//conner case: negatvie resistance
			if(value < 0){
				cout << "> Error: negative resistance" << endl;
				continue;
			}
			badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;


			//input node1
			lineStream >> node1;
			badInput = checkBadInput(lineStream);
			if(badInput) continue;
			// out of range
			if(node1 > 5000 && node1 < 0){
				cout << "> Error: node " << node1 << " is out of permitted range 0-5000" << endl;
				continue;
			}
			badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			/****************************************
			 * note here the last argument we dont  *
			 * check eof for it 					*
			 ****************************************/

			//input node2
			lineStream >> node2;
			badInput = checkBadInput(lineStream);
			if(badInput) continue;

			//conner case: if I type 2nd
			if(lineStream.peek() > 0 && lineStream.peek() != 32){
				cout << "> Error: invalid argument" << endl;
				continue;
			}


			//conner case: out of range
			if(node2 > 5000 && node2 < 0){
				cout << node1 << " is not in the 0-5000 range" << endl;
				continue;
			}

			//conner case: two nodes are same
		 	if(node2 == node1){
		 		cout << "> Error two nodes cannot be same" << endl;
		 		continue;
		 	}
			
			//use another string to skip space
			lineStream >> tempy;
			badInput = lineStream.fail();
			if( badInput == false){
				cout << "> Error: too many arguments" << endl;
				lineStream.clear();
				lineStream.ignore(1000, '\n');
				continue;
			}
			else{
				lineStream.clear();
			}
			
			//finally if all good print
			cout << "> Inserted: resistor " << name << " " 
				 << value << " Ohms " << node1 << " -> " << node2 << endl;

		}



		//change the R to specific resistance
		else if (command == "modifyR"){
			string name;
			int value;
			string tempy;

			//bad input continue to ask input
			bool badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			//input name
			lineStream >> name;
			//conner case: named "all"
			if(name == "all"){
				cout << "> Error: resistor name cannot be thekeyword \"all\"" << endl;
			}
			badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			//input modified resistance
			lineStream >> value;
			badInput = checkBadInput(lineStream);
			if(badInput) continue;
			//conner case: negatvie resistance
			if(value < 0){
				cout << "> Error: negative resistance" << endl;
				continue;
			}
			
			/****************************************
			 * note here the last argument we dont  *
			 * check eof for it 					*
			 ****************************************/

			//conner case: if I type 2nd
			if(lineStream.peek() > 0 && lineStream.peek() != 32){
				cout << "> Error: invalid argument" << endl;
				continue;
			}

			//use another string to skip space
			lineStream >> tempy;
			badInput = lineStream.fail();
			if( badInput == false){
				cout << "> Error: too many arguments" << endl;
				lineStream.clear();
				lineStream.ignore(1000, '\n');
				continue;
			}
			else{
				lineStream.clear();
			}

			cout << "Modified: resistor "<< name << " to " << value << " Ohms" << endl;

		}

		//print specific R
		else if (command == "printR"){
			string name;
			string tempy;

			//bad input continue to ask input
			bool badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			//input name
			lineStream >> name;

			/****************************************
			 * note here the last argument we dont  *
			 * check eof for it 					*
			 ****************************************/
			//use another string to skip space
			lineStream >> tempy;
			badInput = lineStream.fail();
			if( badInput == false){
				cout << "> Error: too many arguments" << endl;
				lineStream.clear();
				lineStream.ignore(1000, '\n');
				continue;
			}
			else{
				lineStream.clear();
			}

			//conner case: named "all"
			if(name == "all"){
				cout << "> Print: all resistors" << endl;
			}
			else{
				cout << "> Print: resistor " << name << endl;
			}
		}	

		//print spcific node
		else if (command == "printNode"){
			int node;
			string tempy;
			string temp;

			//bad input continue to ask input
			bool badInput = checkEOF(lineStream.eof(), lineStream);
			if(badInput) continue;

			//input node
			lineStream >> node;
			badInput = lineStream.fail();
			/*
			 * conner case here:
			 * cos in the question we have fantasic case
			 * printNode all <-
			 * so we need to 
			 */

			if(badInput) {
				lineStream.clear();
				lineStream >> temp;
				cout << temp << endl;
				badInput = lineStream.fail();
				if(badInput){
					cout << "> Error: too few arguments" << endl;
					lineStream.clear();
					continue;
				}
				else if(temp != "all"){
					cout << "> invalid argument" << endl;
				}
				else{
					lineStream.clear();
					lineStream.ignore(1000, '\n');
				}
			}
			/****************************************
			 * note here the last argument we dont  *
			 * check eof for it 					*
			 ****************************************/
			//use another string to skip space
			lineStream >> tempy;
			badInput = lineStream.fail();
			if( badInput == false){
				cout << "> Error: too many arguments" << endl;
				lineStream.clear();
				lineStream.ignore(1000, '\n');
				continue;
			}
			else{
				lineStream.clear();
			}

			if(temp == "all"){
				cout << "> Print: all nodes" << endl;
			}
			else{
				cout << "> Print: node " << node << endl;
			}

		}

		else{
			cout << "> Error: invalid command" << endl;
		}
	
	} // End input loop until EOF.
	return 0;
}
int main(int argc, char const *argv[]){
	
	parser();

	cout << "> " << endl;
	return 0;
}

