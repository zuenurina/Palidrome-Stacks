#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack <char> word;
  char character;
  int length;

  string st1 = "";
  string st2 = "";

  cout << "Enter total character: ";
  cin >> length;
  
  cout << "Enter character: ";
  for (int i = 0; i < length; i++){
    cin >> character;
    word.push(character);
    st1 = st1 + character;
  }

  cout << "Your word: " << st1 << endl;

  while(!word.empty()){
    st2 = st2 + word.top();
    word.pop();
  }

  cout << "Reverse order: " << st2 << endl;

  if(st2 == st1){
    cout << "Palindrome: Yes" << endl;
  }
  else {
    cout << "Palindrome: No" << endl;
  }

  cout << "\nThank you for using this program.";

  return 0;
}