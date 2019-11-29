/*
 CH08-320142
 a2 p4.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// function that turns all vowels to underscores

void low_underscore(string *arr) {
    int j = 0;
/* j ris compared to the number of words
 and i is compared to the number of characters in each word
 */
    while ( j < 17 ) {
        // len is the number of characters in each word
        int len = (int) arr[j].length();
        int i = 0;
        // condition to itterate through the entire word
        while ( i < len ) {
            // if vowel is found change it to underscore
            if (arr[j][i] == 'a' ||
                arr[j][i] == 'e' ||
                arr[j][i] == 'i' ||
                arr[j][i] == 'o' ||
                arr[j][i] == 'u')
            {
                arr[j][i] = '_';
            }
            i++;
        }
        j++;
    }
}
// this function picks a random word using 2 parameters
string word_picker(string *arr, int rnd) {
    return arr[rnd];
}
// this function generates a random word and returns it
int rnd_gen(void) {
    int rndNum;
    srand(static_cast<unsigned int>(time(0)));
    rndNum = (rand()%16);
    return rndNum;
}
// this function compares the picked and guessed word
void guess_check(string pick, string guess) {
    // count for guesses
    int count = 1;
    // condition to count the number of guesses
    // and to make sure the word quit is not entered
    while ( pick != guess && guess != "quit" ){
        cin >> guess;
        count++;
    }
    /* exits game once quit is entered
     and prints a corresponding messages */
    if ( guess == "quit" ){
    // do nothing because we'll print game exited later in the code
    } else {
        // prints the number of guess if the word is not quit
        cout << "Number of guesses : " << count << endl;
    }
}
int main(void) {
    // declaration of two identical arrays
    // first array used to compare guesses
    string arr[] = {"computer" ,"telivision", "keyboard", "laptop", "mouse", "key", "string", "world", "university", "product", "source", "window", "default", "edit", "relative", "target", "demand"};
    // second array used to change vowels to underscores
    string arr2[] = {"computer" ,"telivision", "keyboard", "laptop", "mouse", "key", "string", "world", "university", "product", "source", "window", "default", "edit", "relative", "target", "demand"};
    // guess is used to store users guesses
    string guess;
    // check is used to see if user wants to play again
    string check;
    // function call to change the vowels to underscores
    low_underscore(arr2);
    // generates random number and assigns it to variable
    int rndNum = rnd_gen();
    // prints a random word of the array
    cout << arr2[rndNum] << endl;
    // stores the picked word in the string variable
    string pick = arr[rndNum];
    // guess is the users guess
    cin >> guess;
    // function call to compare the guess with the picked word
    guess_check(pick, guess);
    // asks if the user wants to play again if quit is not entered
    if ( guess != "quit") {
    cout << "Do you want to play again : Enter 'Yes' if so" << endl;
    cin >> check;
    }
    // if user replies Yes then we repeat same process as before
    while (check == "Yes" ){
        rndNum = rnd_gen();
        cout << arr2[rndNum] << endl;
        pick = arr[rndNum];
        cin >> guess;
        guess_check(pick, guess);
    // checks if the user wants to play again
            if ( guess != "quit") {
                cout << "Do you want to play again : Enter 'Yes' if so" << endl;
                cin >> check;
    // breaks from the loop if quit is entered
            } else {
                break;
        }
    }
    /* if the user decides to not play then game exits or quit is entered
     then this message is printed */
    cout << "Game exited" << endl;
    return 0;
}

