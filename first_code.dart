//Learning dart from basic with and storing this file in google drive to avoid system failures.
// double forward slash is used for one line comments.

/* Multiple comments are shown by
   forward slash and star 
   They end by a star and forward slash */
///three forward slash are used for documentation purpose///
void main() {
  //This line declare a function called main().
  //A function is block of statement that computer execute when the function is called.
  //The main() function is always entry point of every programe and it is automatically called and executed.
  //The void indicate that main() function will not return any value.
  //The opening curly braces indicate where function starts and
  //Empty parentheses indicate that function take no arguments.

  print("Hello, World!");
  //The semicolon at the end of line indicates where the statement ends.
  //= sign is for assignment and == is used for equality.
  // A variable is used to represent a value and to hold onto it for future use.
  var x = 5;
  var animalWorld = "antelope";
  print("Lets print an animated word");
  print("""This is multiline animated text
            a        NN       NN   II   LL
          aa aa      NNN      NN   II   LL
        aa     aa    NN N     NN   II   LL
      aa         aa  NN  N    NN   II   LL
     aaaaaaaaaaaaaa  NN   N   NN   II   LL
    aa            aa NN    N  NN   II   LL
    aa            aa NN     N NN   II   LL
    aa            aa NN       NN   II   LLLLLLL""");
  //all variables are objects in dart and everything is object in dart.
  //Dart is an object oriented programming language.
  var y = 10;
  var z = x + y;
  print(z); // here we have used + operator for doing addition.
  print("This is an example of string interpolation like value of y is $y.");
  print("Dart can print unicode chracter like");
  // NOW Lets start with if else statements
  if (z > 20) {
    print("The value of x+y is less than 20");
  } else if (true) {
    print(
        "This is else if block statement which is executed when if statement is false.");
  } else {
    print("This is end of if statement with an else block");
  }
  switch (animalWorld) {
    case "dog":
      print("The first case is dog hence not valid");
      break;
    case "cow":
      print("second case include cow");
      break;
    case "antelope":
      print("This is antelope case statement which is printed.");
  }
  // concepts of loops
  // Like if-statement loops also evaluate boolean expression.
  var newvar = 1;
  while (newvar < 20) {
    print("\nThe value of newvar is $newvar\n");
    newvar++;
  }
  do {
    newvar--;
    print(
        "\nThe value of newvar is $newvar and this is a do while statement.\n");
  } while (newvar > 1);
  for (; newvar < 10; newvar++) {
    print("the value of newvar in for loop is $newvar.");
  }
  //printing sum of numbers upto x digits.

  for (var sumvar = 1; sumvar < 20; sumvar++) {
    var newsum = 0;
    while (newsum < 20) {
      newsum = newsum + sumvar;

      print("The sum upto 20 is $newsum.");
    }
  }
  //the closing curly brace indicate where the main function ends.
}

/*
function when a fuction is part of an object it is called a method.
function allow programme to broken down into small callable units.
The parentheses after fuction contain parameters, and the code within 
curly bracket is executed when a fuction is called.
function parameter become variable within a function.
Variable within a function are a type of Local variable.
Local variable have a scope that is limited to block of code 
within which they are defined.
This means that they can only be accessed from within that block.
The variable defined in main() function 
can not be accessed in any other fuction.
Top level variable are declared outside of any function and they can 
be accessed within any function. They are usually declared at beginning 
just after import files.
A function is not limited to zero or one parameter.
They can contain any number of parameters.
comma seperates multiple function parameters.
*/
