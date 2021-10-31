/*
This is comment line
A comment can be splitted in more than one line
Comments are excluded by compilers
Comment are used for later understanding of code
Comments can not be nested
*/
/*
For purpose of learning of c language
by Anil Beniwal
4 Feb,2021
*/
#include <stdio.h>	//This is a preprocessor directive.
#include <math.h>

/*
This is how a function is written and
every programme start with main function in C language. (it can not be anything else)
Functions contain parameters in parenthesis and
a block of code in curly braces.
*/

int main(){
	printf("Hello World!\n");
	/*
	printf() is also a function
	\n is escape sequence it takes the curser to newline
	Rules for variable names
	A variable name is any combination of alphabets,digits and underscore.
	The first character must be an alphabet or an underscore.
	No comma or blank are allowed in a variable name.
	No special symbol other than an underscore can be used in a variable name.
	*/
	int myVariable = 10;
	/*
	An integer must not have a decimal point.
	program for calculation of simple interest
	*/
	int p, n;
	float r, si;
	//Real constant are also called Floating point constants.
	//A real constant must have a decimal point.
	char charconst = 'A';
	/*
	A character constant is single alphabet,single digit or a single special
	symbol enclosed within single inverted comma.Both inverted commas should point
	to left.The maximum legth of a character constant can be a single character.
	*/
	p = 1000;
	n = 3;
	r = 8.5;
	/*formula for simple interest*/
	si = p*n*r/100;
	printf("%f\n",si);
	/*
	Keywords are reserved words
	A c program comprise of separate series of statements
	the statements are executed in same order in which they are defined
	All statements are entered in small case letters
	Every C statement must end with a semicolon ;.
	Thus ; acts as a statement terminator
	*/
	/*printf can also print a valid expresion like*/
	printf("%d %d %d\n",12-2*3,34+43*2,154-12);
	printf("Enter value of p,n,r\n");
	scanf("%d %d %f",&p,&n,&r);
	/*
	scanf() is a function which takes value from keyboard
	The ampersand & means address of operator
	it is used for telling address (memory location)
	of a variable for  storing value.
	Note that a blank, a tab or a new line must
	separate values supplied to scanf().
	*/
	si = p*n*r/100;
	printf("%f\n",si);
	printf("this is modulus operator 5\%2 = %d.\n",5%2);
	/*
	This operator returns the remainder on dividing one integer with another.
	Note that modulus operator can not be applied to float
	Also note that on using % the sign of the remainder is
	always same as the sign of numerator.
	*/
	int f=pow(5,2);
	printf("exponentiation 5**2 is %d.\n",f);
	/*For exponentiation ** do not work*/
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("You have just entered the number %d\n",num);
	int a,b,c,d;
	a=b=c=d=10;
	printf("%d %d %d %d\n",a,b,c,d);
	printf("%f\n",20.0/3);
	char x,y;
	int z;
	x='a';
	y='b';
	z=x+y;
	printf("%d\n",z);
	/*
	There are three type of instructions
	Type declaration - To declare type of variables
	Arithmetic instruction - To perform arithmetic operations between constant and
	variables.
	Control instruction - To control sequence of execution of statements
	There are four type of control instructions in c language.They are
	1)Sequence control instruction
	2)Selection or Decision control instruction
	3)Repition or Loop control instruction

	The sequence control instruction ensures that the instructions are executed
	in the same order in which they appear in the program.
	Decision and case control instructions allow the computer to take a decision
	as to which instruction is to be executed next.
	The loop control instruction help the computer to execute a group of statements
	repeatedly
	*/
	/*
	Control instruction - enable us to specify the order in which various
	instruction in a program are to be executed by the computer. In other
	words the control instructions determine the "flow of control" in a program.
	*/
	//if statement, if-else statement, switch statement
	/*
	The C has three decision making instruction
	if statement
	if else statement
	conditional operators
	switch statement
	*/
	int number;
	printf("Enter a number less than 10\n");
	scanf("%d",&number);
	/*
	The condition following the keyword if is always enclosed within a pair of 
	parentheses.if the condtion, whatever it is,is true, then the
	statement is executed.If condtion is not true then, the statement is not
	executed;instead the program skip past it.
	Relational operators
	==
	!=
	<
	>
	<=
	>=
	Note that equal is used for assignment, whereas, == is used for comparison of
	two quantities.
	*/
	if (number < 10)	//There should be no semicolon after if statement condition
	{
		printf("What an obedient servent you are!\n");
		//multiple statements are placed in a pair of braces.
	}
	else
	{
		printf("You entered a number greater than 10\n");
	}
	if(3+2%5)
		printf("This works\n");
		/*
		Default scope of if statement is only the next statement.
		So, to execute more than one statement they must be
		written in pair of braces.
		*/
	if(a=10)
		printf("Even this works\n");
	if(-5)
		printf("Surpringly Even this works\n");
	// A non zero value is considered to be true, whereas a zero is considered to be false.
	// The default scope of if condition is immediately next statement after it.
	//For multiple statement they must be placed within pair of braces.

	/* Calculation of Bonus*/
	int bonus,cy,yoj,yr_of_ser;
	printf("Enter the current year and year of joining\n");
	scanf("%d\n %d",&cy,&yoj);
	yr_of_ser = cy-yoj;

	if (yr_of_ser>3)
	{	// This is body of if condition for executing more than one statements.
		bonus = 2500;
		printf("Bonus = $%d\n",bonus);
	}
	// If statement does nothing when expression evaluate to false.
	// To execute a statement when if evaluates to false else-statement is used.

	/* Calculation of Gross Salary */
	float bs,gs,da,hra;
	printf("Enter basic salary\n");
	scanf("%f",&bs);
	if (bs<1500)
	{
		hra=bs*10/100;
		da=bs*90/100;
	}
	else
	{
		hra=500;
		da=bs*98/100;
	}
	gs=bs+hra+da;
	printf("Gross salary = $ %f\n",gs);
	//If there is only one statement to be executed in the if block
	//and only one statement in the else block we could have dropped the pair of braces.
	/*
	As with the if statement, the default scope of else is also the statement 
	immediately after the else. To override this default scope a pair of braces
	as shown in above example must be used.
	*/
	/*
	Nested if-elses
	if we write another if-else statement within body of if statement or body of else
	statement. This is called nesting of ifs.
	*/
	/*A quick demo of nested if-else*/
	int i;
	printf("Enter either 1 or 2\n");
	scanf("%d",&i);

	if(i==1)
		printf("You would go to heaven !\n");
	else
	{
		if(i==2)
			printf("The Hell was created with you in mind\n");
		else
			printf("How about mother Earth\n");
	}

	/*
	In above program an if-else occur within the else block of the first if statement.
	Similarly,in some other program an if-else may occur in the if block as well.
	There is no limit on how deeply the ifs and elses can be nested.
	*/

	/*
	Use of Logical Operators
	C allows usage of three logical operators, namely, &&,|| and !.
	These are to be read as 'AND','OR'and 'NOT' respectively.
	Single symbols of | and & are bitwise operators
	*/
	//else-if clause
	//usage of else-if clause as shown below
	int m1,m2,m3,m4,m5,per;
	printf("\nEnter makrs in 5 subjects\n");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	per = (m1+m2+m3+m4+m5)/5;
	if (per>=60)
		printf("Fisrt Division");
	else if(per>=50)
		printf("Second Division");
	else if(per>=40)
		printf("Third Division");
	else
	{	
		printf("Fail");
	}
	/*
	else if clause reduces the indentation and last else is optional
	Third logical operator is Not operator, written as !.
	This operator reverses the result of expression it operates on.
	it make a non zero value to zero and make zero to non zero value.
	One is converted to Zero and Zero is converted to One.
	Not operator is often used to reverse the logical value of a single variable
	Not operator is also called Unary operation
	
	
	The conditional operators are also called as ternary operators since they take 3 arguments
	expression1?expression2:expression3
	if expression1 is true(non zero),then value returned will be expression2,
	otherwise the value resturned will be expression3
	The limitation of the conditional operators is that after the ? or
	after the : only one c statement can occur.
	*/
	int xx,yy;
	scanf("%d",&xx);
	yy=(xx>5?3:4);
	printf("%d",yy);

	/*
	Repititive operation is done through a loop control instruction for a
	specified number of times or until a particular condition is being satisfied.
	loops ==> for loop , while loop, do-while loop
	Calculation of simple interst for 3 sets of p,n and r
	*/

	int pr,nr,count;
	float rr,sir;

	count=1;
	while(count<3)//the parentheses after while contain a condition.
	//so long as this condition remains true all statements within body of while
	//loop keep getting executed repeatedly
	{	/*This is body of while loop within pair of braces.
		The statement in while loop would keep on getting executed till condition being tested remains true.
		when statement becomes false the control passes to the first statement that follows the body of while loop.
		So long as the expression evaluates to a non zero value the statements within loop would get executed.
		As a rule while must test a condition that will eventually become false,otherwise
		the loop will be executed forever,indefinitely.
		It is not necessary that the loop counter must be an integer.It can even be a float.
		The statements within the loop may be single line or a block of statements
		In the first case the curly braces are optional.
		*/
		printf("\nEnter the value of pr,nr and rr\n");
		scanf("%d %d %f",&pr,&nr,&rr);
		sir = pr*nr*rr/100;
		printf("Simple interest = Rs. %f\n",sir);
		count = count+1;	//loop counter
	}
	/*
	In fact we can put pair of braces around any individual statement or set of
	statements without affecting the execution of program.
	*/
	//For loop
	//Calculation of simple interest for 3 sets of p,n,r
	int pp,pn,counter;
	float ppr,psi;
	for(counter=1;counter<3;counter++)
	//intializing testing incrementation
	//the default scope of for loop is immediately next statement after for.
	{
		printf("Enter the value of pp, pn, pr\n");
		scanf("%d %d %f",&pp,&pn,&ppr);
		psi=pp*pn*ppr/100;
		printf("Simple interest = Rs %f\n",psi);
	}
	/*Demonstration of nested loops*/
	int rc,cc, sum;
	for(rc=1;rc<=3;rc++)
	{
		for(cc=1;cc<=2;cc++)
		{
			sum = rc+cc;
			printf("rc=%d cc=%d sum=%d\n",rc,cc,sum);
		}
	}
	//write a program to determine whether a number is prime or not.
	int enterNum, divider;
	printf("Enter a number \n");
	scanf("%d",&enterNum);
	divider = 2;
	while(divider<enterNum-1)
	{
		if(enterNum%divider==0)
		{
			printf("Not a Prime Number\n");
			break;
			//to jump out of loop instantly, without waiting for conditional test
			//when break is encountered inside any loop, control automatically
			//passes to the first statement after the loop.
		}
		divider++;
	}
	if(divider==enterNum)
	{
		printf("Prime Number\n");
	}
	// A do-while loop would execute its statements at least once,even if condition fails for first time.
	// The while on other hand will not execute its statement if the condition fails for first time.
	do
	{
		printf("Hello there\n");
	} while (4<1);
	/* 
	A break statement takes the execution control out of the loop.
	A continue statement skips the execution of statements after it 
	and takes the control to beginning of the loop.
	A do-while loop is used to ensure that statement within the loop
	are executed at least once even if condition fail for first time.

	The control statement that allow us to make a decision from the number of choices is
	called a switch.
	switch - case - default
	the keyword case is followed by an integer or an character constant.
	the value is matched, one by one, against the constant values that follow the case
	statement. When a match is found the program executes the statements following
	that case and all subsequent case and default statement as well.
	If no match is found with any of the case statements, only statement following
	the default are executed.
	Use break statement after every statement to execute only one statement.
	You can put the cases in any order you want.
	Even if there are multiple statements to be executed in each case there is no need
	to enclose them within a pair of braces.unlike if and else statements.
	Disadvantage of switch
	there is no comparision statements in switch case.
	Even float is not allowed.
	the break statement when used in a switch takes the control outside the switch.
	The switch works faster than an equivalent if-else ladder.this is because the
	compiler generates jump table for a switch during compilation
	Use a goto to take the control where you want.
	exit() function is a standard library function which terminate execution of program.
	*/
	int variable = 1;
	switch(variable){
	case 2:
		printf("No\n");
		break;
	case 1:
		printf("Yes this is the correct case\n");
		break;
	default:
		printf("this is default case\n");
	}
	/*
	A function is a self-contained block of statements that perform a coherent task of
	some kind.Every C program can be thought of as a collection of these functions.
	Any C program contains atleast one function and it must be main().
	If a C program contains more than one function, then one of these functions
	must be main(), because program execution always begins with main().
	There is no limit on the number of functions that might be present in C program.
	Each function in a program is called in the sequence specified by the
	function calls in the main().
	After each function has done its thing, control return to main().When main() run out
	of function calls, the program ends.
	C program is a collection of one or more functions.
	A function gets called when function name is followed by a semicolon.
	A function is defined when function name is followed by a pair of braces in
	which one or more statements may be present.
	A function can be called any number of times.
	A function can call itself. Such process is called 'recursion'.
	A functions can be called from other function, but a function cannot be defined
	in another function.
	There are two type of functions
	Library functions and user-defined functions
	the procedure of calling both types of functions is exactly same.
	two reason why should we write a function.
	Writing functions avoids rewriting of same code over and over.
	Using functions it becomes easier to keep track of what they are doing.
	Don't try to cram the entire logic in one function. It is very bad
	style of programming. Instead, break a program into small units
	and write functions for each of these isolated subdivisions.
	Don't hesitate to write functions that are called only once.
	Passing values between Functions
	The mechanism used to convey information to the function is the 'argument'.
	The format string and list of variables used inside the parentheses in
	these functions are arguments. The arguments are sometimes also called 
	'parameters'
	
	*/

	return 0;
}