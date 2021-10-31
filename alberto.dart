void main() {
  print("Hello, World!");
  var age = 18;
  var myName = "Anil";
  print(age);
  print(myName);
  int age2 = 24;
  String myName2 = "Beniwal";
  print(age2);
  print(myName2);
  dynamic age3 = 20;
  dynamic myName3 = ("Anil Beniwal");
  print(age3);
  print(myName3);
  final Name = "Redmi";
  print(Name);
  const pi = 3.14;
  print("the value of pi is = ${pi}");
  num lenovo = 10.1;
  print(lenovo);
  var expo = 1.32e2;
  print(expo);
  var hexa = 0xF1A;
  print(hexa);
  String little = "2.8";
  print(double.tryParse(little));
  print(int.tryParse("25", radix: 8));
  print(age2.toString());
  print("${myName} is $age year old.");
  double dhamaka = -2.8;
  print(dhamaka.abs());
  var quote = """Mulit-line strings are
written using
triple quotes""";
  print(quote);
  //Strings are zero indexed
  String car = "WagonR";
  print(car[0]);
  print(car[1]);
  print(car[5]);
  print("This is " + "string " + "concatnation " + car);
  var s = "lines can be expanded to mulitlines"
      "like this one";
  print(s);
  var t = "this is also OK " + "but + sign can be omitted\n";
  // Like c_lang escape sequence \n also work
  // Strings are immutable in Dart
  var p = "lets ommit + sign" "it worked";
  print(t + p);
  bool isVoter = true;
  print(isVoter);
  bool isAdult = false;
  print(isAdult);
  // Arrays are not equavalent to arrays but are generic list
  List<int> myList = [0, 1, 2, 3, 4, 5];
  print(myList);
  //Variables are non nullable by defalt(nnbd)
  //which mean they are not allowed to hold null value by default

  //declaring null
  String? value;
  print("$value");
  print(value);
  String? first = value?[0];
  print(first);
  String? name = "Anil Beniwal";
  String? second = name[0];
  print(second);
  String notNull = name;
  print(notNull);
  //String notNull1 = value!;
  //print(notNull1);
  //! bang operator try to convert a null to nonnullable
  //which will throw an error
  num? value1 = 1;
  int othervalue = value1 as int;
  print(othervalue);
  //converting nullable variable into non-nullable subtype,
  //By using typecast operator "as"
  int? nullableVar = 10;
  print(nullableVar);
  //int nonNullableVar = nullableVar ?? 0;
  //print(nonNullableVar);
  //Here also we don't need ?? because
  //?? will return left value if not null else right value

  double? pi1 = 3.14;
  //null-aware member access operator "?." instead "."
  final round2 = pi1.round(); //it say ?. is not needed
  print(round2); //because of nnbd
  int varCooler = 0;
  print(varCooler);
  varCooler++; //postfix increment works in Dart
  print(varCooler);
  ++varCooler; //prefix increment and decrement also work
  print(varCooler);
  varCooler--;
  print(varCooler);
  --varCooler;
  print(varCooler);
  varCooler += 10;
  print(varCooler);
  int big = 978;
  int small = 32;
  print(big <= small);
  print(big >= small);
  //Note that first Angle brackets are used than equal sign

  //type check operator are used to check type of an object at runtime/
  //"as" is used for typecasting to another type
  //"is" is used to check type

  //Logical operators
  print("Logical operators\n");
  print("Bang operator ${!true}");
  print("\nAND operator\n");
  print("false and false is = ${false && false}");
  print("false and true is = ${false && true}");
  print("true and false is = ${true && false}");
  print("true and true is = ${true && true}");
  print("\nOR operator\n");
  print("false or false is = ${false || false}");
  print("false or true is = ${false || true}");
  print("true or false is = ${true || false}");
  print("true or true is = ${true || true}");

  //if and if-else statements
  //brackets can be avoided for one line statements
  //In Dart 0 is not false
  if (true) print("this is true\n");
  if (false)
    print("if is false go to else statement");
  else
    print("if false then else must be true\n");
  String? status;
  String isAlive = status ?? "RIP";
  print(isAlive);
  //value A ?? value B;
  //if a != null retrun A else return B

  //condition ? A : B
  //if condition is true A is returned, otherwise you get B.
  String jinda = (isAlive == "Alive") ? "Breathing" : "Dead";
  print(jinda);
  //switch statement
  List mylist = ["One", "Two"];
  for (final i in mylist) {
    switch (i) {
      case "One":
        print("One");
        break; //avoiding break; statement switch will fall through all cases
      default:
        print("Not in List");
    }
    break;
  }

  //for and while loops
  for (var i = 0; i <= 10; ++i) {
    print("Number is $i");
  }
  // while loop
  var j = 0;
  while (j <= 10) {
    print("Number is $j");
    ++j;
  }
  var k = 10;
  do {
    if (k == 15) break; //beak also terminate loop
    //scope of break is to the block in which it is
    print(k);
    ++k;
  } while (k <= 20);
  // for-in loop
  final star = ["a", "n", "i", "l"];
  for (var ii in star) print(ii);
  assert(age == 18);
  // Functions
  void test() {
    print("this function does not return anything void type");
    print("if no return type than return dynamic");
  }
  test();
  // Nameless function => Anonymous function


//The Happy Ending
}
