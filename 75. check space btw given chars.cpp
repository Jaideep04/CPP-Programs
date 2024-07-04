#include <iostream>

using namespace std;

bool Check_chars(string text) {

  int len = int(text.size());
  for (int i = 0; i < len; i++){
    if (text[i] == 'e' || text[i] == 'E'){
      if (i+2 < len  && (text[i+2] == 'g' || text[i+2] == 'G'))
          return true;
    }
    if (text[i] == 'g' || text[i] == 'G'){
      if (i+2 < len  && (text[i+2] == 'e' || text[i+2] == 'e'))
          return true;
    }
  }
  return false;

}

    int main() {
        cout << "Original string: eagerer -> " << Check_chars("eagerer") << endl;
        cout << "\nOriginal string: eaglets -> " << Check_chars("eaglets") << endl;
        cout << "\nOriginal string: eardrop -> " << Check_chars("eardrop") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday. -> ";
		cout << Check_chars("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}
S