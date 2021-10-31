//math tricks game
import "dart:math";
import "dart:io";

void main() {
  int guess = 0;
  int placeValue;
  print("Up to how many nummers you want to play");
  String temp = stdin.readLineSync();
  placeValue = int.parse(temp);
  Random rand = new Random();
  int firstNum = rand.nextInt(placeValue);
  int secondNum = rand.nextInt(placeValue);
  do {
    print("Enter the product of $firstNum * $secondNum");
    guess = int.parse(stdin.readLineSync());
    if (guess != (firstNum * secondNum)) {
      print("wrong answer!");
    }
  } while (guess != (firstNum * secondNum));
  print(
      "The product of given numbers is ${firstNum * secondNum}.\nYou are Right!");
}
