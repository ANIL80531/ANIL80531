void main() {
  print("Hello, World!");
  //comments are ignored by compiler
  //This is a comment. It is not executed.
  //This is a single line comment.
  
  
  /*
  This is a multi-line comment
  expanding over
  many lines
  */


  /*Dart also allow 
  nested comments 
  /*This is nested comment*/
  like this 
  */


  ///This is documentation comment


  /**
   * This is block documentation comment
   * It allow multi line expansion
   * Documentation comment are used for
   * Documentation purpose of code
   * 
   * 
   * Documentation comment even support
   * Markdown formatting so that you can add
   * elements like code example and links to your comment
   */


  //In Dart all statement end with a semicolon
  print("This a simple statement");
  if (true) {
    print("This is complex statement block");
    print("Due to curly braces it don't need semicolon at end");
  }
  int a = 1; //This is an expression
  print(a);
  //  a/b is floating division 
  //  a~/b is integer division
  
}
