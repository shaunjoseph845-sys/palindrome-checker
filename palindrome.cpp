#include <iostream>
using namespace std;

int main(){

    string word, reversed = "";

    cout << "Enter a number or a word: ";
    cin >> word;

    for(int i = word.length()-1; i >= 0; i--){
        reversed += word[i];
    }

    if(word == reversed)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
