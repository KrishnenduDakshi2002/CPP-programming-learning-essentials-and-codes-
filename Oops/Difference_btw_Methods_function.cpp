/*          Methods                      |   Functions
1) A method also works the same          | 1) A function is a block of statements       
  as that of function.                   |    that takes specific input, does some
|                                        |    computations, and  fianlly produces
|                                              the output.
2) A method is defined inside            | 2) A function is defined independently    
   a class.                              |    
|                                        |   
3) A method can be private,              | 3)By default a function is public   
    public, or Protected.                |
|                                        |
4)The method is invoked by its           | 4)It can be accesed byanywhere in the     
  reference/object only. It's            |   entire program.
  property of objects,  Like:            |  
  obj.method();                          |
|                                        |
5) A method is able to operate           | 5) It is called by its name.     
   on data that is contained             |    like:   display();
   within the class                      |
|                                        |
6)  Each object has it's own method      | 6) It has the ability to return values          
    which is present in the class.       |    if needed.   
|                                        |
|                                        | 7) If a function is defined. it will be                                        
|                                            the same for every object that has been
|                                             crearted.                                          
*/                                        



// C++ program to illustrate methods
// and functions
#include <iostream>
using namespace std;

// Function call to return string
string offering(bool a)
{
	if (a) {
		return "Apple.";
	}
	else {
		return "Chocolate.";
	}
}

// Class Declaration
class GFG {
public:
	// Method for class GFG
	void guest(bool op)
	{
		if (op == true) {
			cout << "Yes, I want fruit!\n";
		}
		else {
			cout << "No, Thanks!\n";
		}
	}
};

// Driver Code
int main()
{
	bool n = true;

	cout << "Will you eat fruit? ";

	// Create an object of class GFG
	GFG obj;

	// Method invoking using an object
	obj.guest(n);

	if (n == true) {

		// Append fruit using function
		// calling
		cout << "Give an " + offering(n);
	}

	// Giving fruit..Function calling
	else {

		// Append fruit using function
		// calling
		cout << "Give a " + offering(n);
	}

	return 0;
}








