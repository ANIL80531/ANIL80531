main() {
  //dart support for type inference
  var age = 18;
  print(age);
  var myName = "Anil Beniwal";
  //no type inference. Dart also support static typing
  late int age2 = 23;
  String name = "Lenovo duet";
  //type of dynamic variable can be changed later to other types
  dynamic age3 = 34;
  dynamic name2 = "Hello Dart World!";
  final name3 = "this can be changed";
  //A variable  declared as final can be set only once and if you try to
  //change its content later you will get an error.
  //final can automatically infer the type exactly like var keyword.
  //Const keyword is brother of final
  print(name);
}
