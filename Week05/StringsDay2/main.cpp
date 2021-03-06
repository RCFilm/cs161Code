#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string text = "Hello there";

    //Forward
    for(int i = 0; i < text.length(); i++) {
        cout << text.at(i) << " . ";
    }
    cout << endl;

    //Reverse
    for(int i = text.length() - 1; i >= 0; i--) {
        cout << text.at(i) << " . ";
    }
    cout << endl;

    //Shift every character by one letter
    string text2 = text;  //make a copy to modify
    for(int i = 0; i < text2.length(); i++) {
        char currentLetter = text2.at(i);
        char newLetter = static_cast<char>(currentLetter + 1);

        text2.at(i) = newLetter; //short replace
        //text2.replace(i, 1, newLetter);  //long replace
    }
    cout << text << " shifed by one character:" << endl;
    cout << text2 << endl;


    return 0;
}
