1. What is a class?
	A class defines the properties and behavior for the objects represented by the abstraction.

2. How does a class accomplish abstraction, encapsulation, and data
hiding?
	abstraction focuses on the observable behavior of an object...
encapsulation focuses upon the implementation that gives rise to this behavior ...
encapsulation is most often achieved through information hiding,
which is the process of hiding all of the secrets of object that do not contribute to its essential characteristics.
information hiding abstracts whole details of something.

3. What is the relationship between an object and a class?
	 A class denotes a category of objects. 

4. In what way, aside from being functions, are class function members
different from class data members?
	Member functions can (and should) be used to interact with data contained within user defined types.
	Within classes,to protect the data members,the programmer can define functions to perform the operations on those data members.

5. Define a class to represent a bank account. Data members should
include the
depositor’s name, the account number (use a string), and the balance.
Member functions
should allow the following:
- Creating an object and initializing it.
- Displaying the depositor’s name, account number, and balance
- Depositing an amount of money given by an argument
- Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations.

	class BankAccount{
	private:
	char name[20];
	char accNum [20];
	double balance;
	public:
	BankAccount(char * client , char * num , double bal=0);
	void show ;	
	void deposite (double cash);
	void withdraw(double cash);	
};

6. When are class constructors called? When are class destructors called?
	A constructor is responsible for preparing the object for action.
	A deconstructor is called if object needs to be deleted.
	
7. Provide code for a constructor for the bank account class from Chapter Review Question 5.
	BankAccount ::BankAccount(char*client,char*num,double bal)	
	{
	name[20] = client;	
	acctnum[20] = num;
	balance = bal;
	}

8. What is a default constructor? What is the advantage of having one?
		Default constructor has defaults for arguments , it also enables us not to initialize just to declare objects.

10. What are this and *this?
	"this" is a pointer and it refers to an object and it's the address of the object itself.
	"*this" represents the object itself.
	
