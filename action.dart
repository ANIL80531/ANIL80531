main() {
  var d = "dart"; // optional typing
  String w = "world"; // type annotation
  print("Hello ${d} ${w}");//string interpolation
  var hello = "hello";
  final world = "world";
  print('$hello $world');
  print(r"$hello $world");
  var helloWorld = "hello " "world"; // two adjacent string concatenate
  print(helloWorld);
  print("${helloWorld.toUpperCase()}");
  print("The answer is ${5 + 10}");
  var multiline = """this is
  multiline expantion""";
  print(multiline);
  var o = new Object();
  print(o.toString());
  print('$o');



}
