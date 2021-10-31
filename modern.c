#include<stdio.h>
//#include is preprocessor macro and .h is header file
//to use printf function stdio lib is used
int main(void){
	printf("Hello world!\nThis is a new line.\n");
	/*first comment
	with multiline
	expansion*/
	//this is single line c++ style comment
	//C is a case sensitive language so myvar and myVar are different variables.
	//char type store a single character.
	char mychar = 'A';
	printf("%c\n",mychar);
	printf("character constant are declared in single quotes");
	//The variable inside any function are local to that function
	//The variables declared before main are global variables
	char rand ;
	printf("%c\n",rand);
	printf("Undeclared char do not get random values\n");
	int myvar;
	printf("%d\n",myvar);
	printf("Undeclared variables get 0 as value\n");	
	printf("I'm Anil\n");
	printf("I\'m saying \"I\'m learning Modern C language.\"\n");
	printf("This is a \ttabbed line\n");
	printf("The char are actually stored in ASCII value and underling values are same\n");
	printf("the ASCII value of char 'a' is 97.\n");
	char mychar1= 97;
	printf("%c\n",mychar1);
	printf("The size of mychar1 is %zi bytes.\n",sizeof(mychar1));
	printf("The size of myvar is %zi bytes.\n",sizeof(myvar));
	//The %zi or the %zu format specifier is used for the return type of the sizeof operator.
	int decivar = 10;
	int octavar = 012;
	int hexavar = 0xA;
	printf("%d %d %d\n",decivar,octavar,hexavar);
	printf("%d %o %X\n",decivar,decivar,decivar);
	/*
	The unsigned integer constants have u or U suffix, such as our 123456789u value.
	We used the %u specifier to print out the value of an unsigned integer.
	Long integer constants have the l or L suffix, such as our 123456789l value.
	We used the %ld format to print out the value of a long integer.
	*/
	unsigned short x = 1234u;
	printf("%hu\n",x);
	printf("size of short int is %ld bytes\n",sizeof(x));
	unsigned int y = 123456789u;
	printf("%u\n",y);
	unsigned z = 987654321u;
	printf("%u\n",z);	
	unsigned a = 32498734U;
	printf("%u\n",a);
	short b = 4321; //There is no specific suffix for short type var
	printf("%d\n",b);
	long c = 1234567890l;
	printf("%ld\n",c);
	printf("the size of long int is %ld\n",sizeof(c));
	long d = 4141873469834L;
	printf("capital L can also used in declaring long var %ld\n",d);
	unsigned long e = 6348523465294ul;
	printf("The unsigned long var is %lu\n",e);
	long long f = 934857203945504ll;
	printf("long long type int %lld\n",f);
	printf("the size of long long int is %ld\n",sizeof(f));
	printf("long long type int %lli\n",f);
	unsigned long long g =234856298435268374ULL; //ull, ULL, llu, LLU can also be used
	printf("unsinged long long type int %llu\n",g);
	//float double long double
	float myfloat = 123.456f;// or 123.456F
	printf("float var %f\n",myfloat);
	printf("float var with only three decimal places %.3f\n",myfloat); //mind the . after %
	printf("size of normal float is %ld\n",sizeof(myfloat));
	double mydouble = 223.568;
	printf("double var precision %lf\n",mydouble);
	printf("size of double is %ld\n",sizeof(mydouble));
	//float is faster than double but less precise
	long double mylongdouble = 2343345243.23452345l; //mind the l or L suffix
	printf("long double is %.8Lf\n",mylongdouble);
	//you have to specify decimal places in long double default is 6 decimal
	//At least if one operand is float than entire expression is float
	//The modulus (modulo) % operator is remainder of x / y division.
	int xx = 10;
	int yy = 10;
	int myprefix = ++xx;
	int mypostfix = yy++;
	printf("the myprefix is %d and my postfix is %d\n",myprefix,mypostfix);
	printf("the value of yy after postfix is %d\n",yy);
	printf("the mypostfix still is %d\n",mypostfix);
	//type conversion
	char yourchar = 'A';
	int lizard = (int)yourchar;
	printf("the type conversion of 'A' is %d\n",lizard);
	int new = 10;
	int old = 30;
	double dd = (double)new/old;
	printf("the type of conversion of int to double %f\n",dd);
	if (xx<150)
	{
		printf("This is inside if block if if is true\n");
		printf("if block is not executed if if is false\n");
		printf("The if block can have mulitple statements\n");
	}
	if (new<50 && old<50)
	{
		printf("the both and statments are true\n");
	}
	if (new<50 || old>100)
	{
		printf("Only One or statment is true\n");
	}
	if(!0)//All none zero values are true
	{printf("! bang bang\n");}
	if(0){}else{printf("In c lang 0 means Boolean False value\n");}
	//switch statment
	switch (new)
	{
		case 1:
			printf("Nothing here\n");
			break;
		case 2:
			printf("This also have Nothing\n");
			break;
		case 10:
			printf("May be this is the case 10\n");
			break;
		case 11:
			printf("Or is this is the case\n");
			break;
		default:
			printf("you messed up it's default case\n");
			break;
	}
	//switch statement is equvalent to having multiple if branches.
	// Loops
	int mycounter = 1;
	while (mycounter<5)
	{
		printf("Hello world from while loop\n");
		mycounter++;
	}
	// do while Loop
	/*The do-while statement is guaranteed to execute the statements
	inside its body at least once*/
	int mycounter2=0;
	do
	{
		printf("hello from do while\n");
		mycounter2++;
	}while(mycounter2<5);
	// for Loop
	for (int counter3=1; counter3<5; counter3++)
	{
		printf("hello world from for loop\n");
	}
	int firstnum = 123;
	int secondnum = 321;
	int sum = firstnum + secondnum;
	printf("the sum is %d\n",sum);
	int num1 = 2;
	switch(num1)
	{
		case 1:
			printf("The value of num1 is 1\n");
			break;
		case 2:
			printf("The value of num1 is 2\n");
			break;
		case 3:
			printf("The value of num1 is 3\n");
			break;
		default:
			printf("the value of num1 is not in range\n");
			break;
	}
	for(int num2=1; num2<6; num2++)
	{
		printf("%d\n",num2);
	}
	int counter1 = 1;
	while(counter1<6)
	{
		printf("%d\n",counter1);
		counter1++;
	}
	//An Array contains data of same type
	



}
