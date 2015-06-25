#include <iostream>
using namespace std;

int main()
{
  int value;

  // as long as we can read an integer from standard input (cin)
  // when the user enters control-D the "cin >> value" will return false
  while (cin >> value)
  {
    // write the integer just read to standard output
    cout << "value = " << value << endl;
  }

  cout << "there are no more values... goodbye\n";

  // return 0 from main() if there were no errors
  return 0; 

}
