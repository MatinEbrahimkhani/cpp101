/*
    C++ STRINGS — LESSON FOR BEGINNERS
    Student: age 15
    Comments: Finglish (Persian written with English letters)

    HOW TO USE THIS FILE
    1. Read one section at a time.
    2. Predict the output before running the example.
    3. Type examples yourself and change the values.
    4. This lesson does not use loops.
*/

#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// 0. STRING CHIYE?
// ------------------------------------------------------------
//
// string baraye negah-dashtan-e matn estefade mishavad.
// Mesal: esm, payam, esm-e shahr, ya yek jomle.
//
// int baraye adad ast:
// int age = 15;
//
// string baraye matn ast:
// string name = "Ali";
//
// Matn bayad dakhele double quotation mark (" ") bashad.
// Mesal:
// string city = "Zanjan";
//
// C++ string mitavanad yek kalame ya yek jomle dashte bashad.
// Baraye estefade az string, in khat ra dar aval-e file mikhahim:
// #include <string>
//
// Use case-ha:
// - esm-e danesh-amooz
// - payam-e barname
// - matn-e chat
// - esm-e kala dar list-e kharid
// - javab-e karbar

void example1_create() {
    cout << "\n--- Example 1: Creating strings ---\n";

    string name = "Sara";
    string city = "Zanjan";
    string message = "Hello, how are you?";

    cout << name << "\n";
    cout << city << "\n";
    cout << message << "\n";
}


// ------------------------------------------------------------
// 1. STRING VA SPACE
// ------------------------------------------------------------
//
// String mitavanad space dashte bashad.
// Mesal: "Ali Reza" yek string ast, ba yek space bein-e do esm.
//
// Dar string, har character yek bakhsh az matn ast.
// Har harf, adad, alamat, va hatta space yek character hesab mishavad.

void example2_spaces() {
    cout << "\n--- Example 2: Spaces ---\n";

    string firstName = "Ali";
    string fullName = "Ali Reza";

    cout << firstName << "\n";
    cout << fullName << "\n";
}


// ------------------------------------------------------------
// 2. VOROODI: cin VA getline
// ------------------------------------------------------------
//
// cin >> name faghat ta avalin space voroodi migirad.
// Agar karbar "Ali Reza" benevisad, cin >> name faghat "Ali" ra migirad.
//
// Baraye gereftan-e yek khat-e kamel, az getline(cin, name) estefade kon.
//
// Nokte: getline mitavanad space-haye dakhel-e matn ra ham bekhanad.

void example3_input_word() {
    cout << "\n--- Example 3: Reading one word ---\n";

    string name;

    cout << "Enter one name (no spaces): ";
    cin >> name;

    cout << "Hello, " << name << "!\n";
}

void example4_input_line() {
    cout << "\n--- Example 4: Reading a full line ---\n";

    string sentence;

    // getline yek khat-e kamel, hatta ba space, migirad.
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "You wrote: " << sentence << "\n";
}


// ------------------------------------------------------------
// 3. LENGTH — TOOL-E STRING
// ------------------------------------------------------------
//
// text.length() tedad-e character-haye string ra mide.
// text.size() ham hamin kar ra mikonad.
//
// Space ham dar length hesab mishavad.
// Mesal: "Ali Reza" 8 character darad:
// A l i [space] R e z a
//
// Yadمان bashe: length tedad ast, na index.

void example5_length() {
    cout << "\n--- Example 5: length() ---\n";

    string word = "cat";
    string fullName = "Ali Reza";

    cout << word.length() << "\n";     // 3
    cout << fullName.length() << "\n"; // 8
}


// ------------------------------------------------------------
// 4. CHARACTER INDEX — SHOMARE-ye JAYGAH
// ------------------------------------------------------------
//
// Mesle vector, character-haye string ham index darand.
// Index az 0 shoroo mishavad.
//
// string word = "CODE";
//
// index:       0   1   2   3
// character:   C   O   D   E
//
// word[0] -> 'C'
// word[1] -> 'O'
//
// Baraye yek character az single quote (' ') estefade mikonim.
// Baraye yek string az double quote (" ") estefade mikonim.
//
// word[4] vojood nadarad; index-haye dorost 0 ta 3 hastand.

void example6_index() {
    cout << "\n--- Example 6: Character index ---\n";

    string word = "CODE";

    cout << word[0] << "\n"; // C
    cout << word[2] << "\n"; // D
    cout << word[3] << "\n"; // E
}


// ------------------------------------------------------------
// 5. TAGHYIR-E YEK CHARACTER
// ------------------------------------------------------------
//
// Mitavan character-e string ra ba index taghyir dad.
// word[0] = 'N'; yani character-e aval ra N kon.
//
// Baraye char, single quote estefade kon: 'N'
// Na double quote: "N"

void example7_change_character() {
    cout << "\n--- Example 7: Changing a character ---\n";

    string word = "cat";

    word[0] = 'b';

    cout << word << "\n"; // bat
}


// ------------------------------------------------------------
// 6. CONCATENATION — CHASBANDAN-E STRING-HA
// ------------------------------------------------------------
//
// Ba + mitavan do string ra be ham vasl kard.
// In kar ra concatenation migan.
//
// Agar space mikhahim, bayad khodemoon " " ezafe konim.
// C++ khodesh bein-e string-ha space nemizarad.

void example8_join_strings() {
    cout << "\n--- Example 8: Joining strings ---\n";

    string firstName = "Mina";
    string lastName = "Ahmadi";

    string fullName = firstName + " " + lastName;

    cout << fullName << "\n"; // Mina Ahmadi
}


// ------------------------------------------------------------
// 7. EZAFE KARDAN BE AKHAR-E STRING
// ------------------------------------------------------------
//
// Ba += mitavan matn-e jadid ra be akhar-e string ezafe kard.
// Mesal: message += "!";
//
// In dastoor string-e mojood ra taghyir midahad.

void example9_append() {
    cout << "\n--- Example 9: Adding text ---\n";

    string message = "Hello";

    message += " ";
    message += "Sara";
    message += "!";

    cout << message << "\n"; // Hello Sara!
}


// ------------------------------------------------------------
// 8. STRING + IF
// ------------------------------------------------------------
//
// Mitavan string-ha ra ba == moghayese kard.
// == yani "barabar ast ba"
// != yani "barabar nist ba"
//
// String-ha case-sensitive hastand:
// "Ali" ba "ali" yeki nistand, chon A bozorg va a koochak ast.

void example10_compare() {
    cout << "\n--- Example 10: Comparing strings ---\n";

    string password = "blue";
    string guess = "blue";

    if (guess == password) {
        cout << "Correct!\n";
    } else {
        cout << "Try again.\n";
    }

    string answer = "Yes";

    if (answer == "yes") {
        cout << "You typed yes.\n";
    } else {
        cout << "This is not exactly yes.\n";
    }
}


// ------------------------------------------------------------
// 9. BARRESI-E CHARACTER BA IF
// ------------------------------------------------------------
//
// Mitavan yek character ra ba if moghayese kard.
// Mesal: word[0] == 'A'
//
// Yadآvari:
// 'A' yek character ast.
// "A" yek string ast.

void example11_check_character() {
    cout << "\n--- Example 11: Checking a character ---\n";

    string code = "A7";

    if (code[0] == 'A') {
        cout << "Code starts with A.\n";
    } else {
        cout << "Code does not start with A.\n";
    }
}


// ------------------------------------------------------------
// 10. YE USE CASE: SALAM KARDAN
// ------------------------------------------------------------
//
// Barname az karbar esm migirad va yek payam misazad.
// In mesal cin >> darad, pas esm-e yek kalame-i bekhanid.

void example12_greeting() {
    cout << "\n--- Example 12: Greeting ---\n";

    string name;

    cout << "What is your name? ";
    cin >> name;

    string greeting = "Hello, " + name + "!";

    cout << greeting << "\n";
}


// ------------------------------------------------------------
// 11. YE USE CASE: CHECK KARDAN-E JAVAB
// ------------------------------------------------------------
//
// Barname yek javab migirad va check mikonad aya "yes" ast ya na.
// Baraye sadegi, faghat javab-e daghigh-e "yes" ghabool mishavad.

void example13_yes_no() {
    cout << "\n--- Example 13: Yes or no ---\n";

    string answer;

    cout << "Do you like C++? Type yes or no: ";
    cin >> answer;

    if (answer == "yes") {
        cout << "Great! Keep practicing.\n";
    } else {
        cout << "Thanks for your answer.\n";
    }
}


// ------------------------------------------------------------
// 12. TAMRIN-E KUTAH BARAYE CLASS
// ------------------------------------------------------------
//
// A) string word = "HELLO";
//    word[1] che character-i ast?              Javab: ______
//
// B) string name = "Ali Reza";
//    name.length() chande?                     Javab: ______
//
// C) string a = "Good";
//    string b = "Day";
//    a + " " + b che mishe?                    Javab: ______
//
// D) string word = "cat";
//    word[2] = 'r';
//    string-e jadid chiye?                     Javab: ______
//
// E) Aya "Ali" == "ali" dorost ast? Chera?     Javab: ______
//
// F) Fargh-e cin >> name ba getline chist?     Javab: ______


// ------------------------------------------------------------
// 13. KHOLASE
// ------------------------------------------------------------
//
// string name = "Ali";     -> sakhtan-e string
// cin >> name;             -> voroodi ta space
// getline(cin, name);      -> voroodi-e yek khat-e kamel
// name.length()            -> tedad-e character-ha
// name[0]                  -> character-e aval
// name[0] = 'A';           -> taghyir-e character
// first + " " + last       -> chasbandan-e string-ha
// text += "!";             -> ezafe kardan be akhar
// text == "yes"            -> moghayese-ye daghigh-e string-ha

int main() {
    cout << "C++ Strings — Lesson\n";

    example1_create();
    example2_spaces();
    example5_length();
    example6_index();
    example7_change_character();
    example8_join_strings();
    example9_append();
    example10_compare();
    example11_check_character();

    // Example-haye voroodi ra joda ejra konid.
    // example3_input_word();
    // example4_input_line();
    // example12_greeting();
    // example13_yes_no();

    return 0;
}
