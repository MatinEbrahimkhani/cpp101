// ============================================================
// Lesson 07: Vectors - list-haye pooya (dynamic arrays)
// ============================================================
// Vector yek array-e pooya-st: khodesh bozorg va koochik mishe.
// Barkhelaf-e array-e mamoli (andaze sabet), vector flexible,
// amn, va por az tool-e amade-st.
//
// Rahnamay-e Finglish: vector mesle yek list-e keshsan-st —
// har vaght ja kam ovordi, push_back kon ta bozorgtar beshe.
//
// KEY BENEFITS (maziyat-ha):
// - Hafeze khodkar (niyazi be delete-e dasti nist)
// - Andaze-ye dynamic (har vaght khasti push_back kon)
// - Dastresi-ye amn ba .at() (check-e bound + exception)
// - Method-haye amade (.push_back, .pop_back, .insert, ...)
// - Ba har type-i kar mikone (int, string, double, ...)
// ============================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for sort, reverse
#include <stdexcept>  // for out_of_range

using namespace std;    // in file az "vector<int>" bedoon-e std:: estefade mikone
// ------------------------------------------------------------
// 0. VECTOR CHIYE? (What is a vector?)
// ------------------------------------------------------------
//
// Ghablan baraye negah-dashtan yek adad az int estefade mikardim:
//
// int score = 18;
//
// Agar bekhahim 5 nomre dashte bashim, mitavanimesh injoori benevisim:
//
// int score1 = 18;
// int score2 = 15;
// int score3 = 20;
// int score4 = 12;
// int score5 = 17;
//
// In kar baraye tedad-e ziad kheili sakht mishavad.
//
// vector yek container ast: yani yek ja baraye negah-dashtan chand value
// az yek noe (type) dar kenar ham.
//
// Mesal:
// vector<int> scores = {18, 15, 20, 12, 17};
//
// In vector 5 adad int darad. Hame-ye item-ha dar yek variable hastand.
//
// Use case-ha:
// - nomre-haye danesh-amooz
// - gheymat-e kala-ha
// - emtiaz-e bazi
// - esm-e chand nafar
// - natije-ye sensor-ha
//
// Nokat:
// vector<int> yani vector-i ke item-haye an int hastand.
// vector<string> yani vector-i ke item-haye an string hastand.
// Har vector yek type darad; masalan dar vector<int> string gharar nemidahim.


// ------------------------------------------------------------
// 1. SAKHTAN-E VECTOR (Creating a vector)
// ------------------------------------------------------------

void example1_create() {
    cout << "\n--- Example 1: Creating vectors ---\n";

    // Vector-e khali: felan hich item-i nadarad.
    vector<int> scores;

    // Vector ba item-haye avalie:
    vector<int> ages = {15, 16, 14};

    // Vector-e string:
    vector<string> names = {"Ali", "Sara", "Reza"};

    cout << "First age: " << ages[0] << "\n";
    cout << "First name: " << names[0] << "\n";
    cout << "Number of scores: " << scores.size() << "\n";
}


// ------------------------------------------------------------
// 2. INDEX — SHOMARE-ye JAYGAH
// ------------------------------------------------------------
//
// Baraye peyda kardan yek item, az index estefade mikonim.
// Index az 0 shoroo mishavad, na az 1.
//
// Agar vector in bashe:
// index:    0    1    2    3
// value:   10   20   30   40
//
// Pas:
// numbers[0] -> 10
// numbers[1] -> 20
// numbers[2] -> 30
// numbers[3] -> 40
//
// numbers[4] vojood nadarad! Index bayad az 0 ta size()-1 bashad.
//
// [index] yani "item-e dar in shomare-ye jaygah".

void example2_index() {
    cout << "\n--- Example 2: Index ---\n";

    vector<int> numbers = {10, 20, 30, 40};

    cout << "numbers[0] = " << numbers[0] << "\n";
    cout << "numbers[2] = " << numbers[2] << "\n";

    // Ghabl az ejra pishbini kon: in khat che chizi chap mikonad?
    cout << "Last item = " << numbers[3] << "\n";
}


// ------------------------------------------------------------
// 3. TAGHYIR DADAN-E ITEM (Changing an item)
// ------------------------------------------------------------
//
// Mitavan item-e mojood ra ba index taghyir dad.
// numbers[1] = 99; yani item-e index 1 ra 99 kon.
//
// In kar tedad-e item-ha ra taghyir nemidahad.

void example3_change() {
    cout << "\n--- Example 3: Changing an item ---\n";

    vector<int> numbers = {10, 20, 30};

    numbers[1] = 99;

    cout << numbers[0] << "\n"; // 10
    cout << numbers[1] << "\n"; // 99
    cout << numbers[2] << "\n"; // 30
}


// ------------------------------------------------------------
// 4. SIZE — TEDAD-E ITEM-HA
// ------------------------------------------------------------
//
// numbers.size() tedad-e item-haye vector ra bar migardanad.
// Agar 3 item dashte bashim, size() barabar-e 3 ast.
// Size tedad ast, vali index az 0 shoroo mishavad.
//
// Mesal: vector ba 3 item -> index-ha: 0, 1, 2
// Pas akharin index = size() - 1
//
// size() ra ba cout chap mikonim.

void example4_size() {
    cout << "\n--- Example 4: size() ---\n";

    vector<string> pets = {"cat", "dog", "fish"};

    cout << "Number of pets: " << pets.size() << "\n";
}


// ------------------------------------------------------------
// 5. EZAFE KARDAN-E ITEM — push_back()
// ------------------------------------------------------------
//
// push_back(value) yek item jadid be enteha-ye vector ezafe mikonad.
// Agar vector 3 item dashte bashad, ba push_back mishe 4 item.
// Item-e jadid dar akhar gharar migirad.

void example5_push_back() {
    cout << "\n--- Example 5: push_back() ---\n";

    vector<int> scores = {12, 18};

    scores.push_back(20);
    scores.push_back(15);

    cout << "First: " << scores[0] << "\n";  // 12
    cout << "Third: " << scores[2] << "\n";  // 20
    cout << "Count: " << scores.size() << "\n"; // 4
}


// ------------------------------------------------------------
// 6. HAZF-E ITEM-E AKHAR — pop_back()
// ------------------------------------------------------------
//
// pop_back() akharin item ra hazf mikonad.
// In function value ra bar nemigardanad; faghat vector ra taghyir midahad.
// Baraye vector-e khali pop_back() nakonid.

void example6_pop_back() {
    cout << "\n--- Example 6: pop_back() ---\n";

    vector<int> numbers = {5, 8, 11};

    numbers.pop_back();

    cout << "Count after removing last item: " << numbers.size() << "\n";
    cout << "New last item: " << numbers[1] << "\n"; // 8
}


// ------------------------------------------------------------
// 7. VOROODI AZ KARBAR (Input)
// ------------------------------------------------------------
//
// cin >> variable az karbar voroodi migirad.
// Mitavan voroodi ra mostaghiman dar yek index-e vector gharar dad,
// amma faghat vaghti an index vojood dashte bashad.
//
// Inja vector 3 item darad, pas index 0, 1, 2 vojood darand.

void example7_input() {
    cout << "\n--- Example 7: Input ---\n";

    vector<int> scores(3); // 3 item int misazad; aval hame 0 hastand.

    cout << "Enter 3 scores: ";
    cin >> scores[0] >> scores[1] >> scores[2];

    cout << "You entered: "
         << scores[0] << ", "
         << scores[1] << ", "
         << scores[2] << "\n";
}


// ------------------------------------------------------------
// 8. VECTOR + IF (Barresi-e yek item)
// ------------------------------------------------------------
//
// Mitavan yek item ra ba if check kard.
// Inja loop nadarim; item-ha ra yeki-yeki check mikonim.
//
// <= yani "koochaktar ya mosavi ba"
// >= yani "bozorgtar ya mosavi ba"
// == yani "mosavi ast ba"
// != yani "mosavi nist ba"

void example8_if() {
    cout << "\n--- Example 8: Vector with if ---\n";

    vector<int> scores = {14, 9, 18};

    if (scores[0] >= 10) {
        cout << "Score 1: pass\n";
    } else {
        cout << "Score 1: try again\n";
    }

    if (scores[1] >= 10) {
        cout << "Score 2: pass\n";
    } else {
        cout << "Score 2: try again\n";
    }
}


// ------------------------------------------------------------
// 9. JAM-E ADAD-HA BA HAM (Simple total)
// ------------------------------------------------------------
//
// Baraye jam kardan, yek variable be esm total misazim.
// Har item ra be total ezafe mikonim.
//
// In mesal faghat 3 item darad va loop estefade nemikonad.

void example9_total() {
    cout << "\n--- Example 9: Adding vector values ---\n";

    vector<int> prices = {10, 25, 5};

    int total = 0;
    total = total + prices[0]; // 0 + 10 = 10
    total = total + prices[1]; // 10 + 25 = 35
    total = total + prices[2]; // 35 + 5 = 40

    cout << "Total price: " << total << "\n";
}


// ------------------------------------------------------------
// 10. YEK USE CASE: LIST-E KHARID (Shopping list)
// ------------------------------------------------------------
//
// Baraye item-haye gheyre adadi mesle esm, vector<string> darim.
// Dar in mesal yek list az kala-ha darim.
// Baraye sadegi faghat item-ha ra chap mikonim.

void example10_shopping_list() {
    cout << "\n--- Example 10: Shopping list ---\n";

    vector<string> shopping = {"bread", "milk", "apples"};

    cout << "Item 1: " << shopping[0] << "\n";
    cout << "Item 2: " << shopping[1] << "\n";
    cout << "Item 3: " << shopping[2] << "\n";

    shopping.push_back("rice");

    cout << "Added one item. New count: " << shopping.size() << "\n";
}


// ------------------------------------------------------------
// 11. TAMRIN-E KUTAH BARAYE CLASS
// ------------------------------------------------------------
//
// Ghabl az run kardan, khodet javab bede:
//
// A) vector<int> a = {4, 7, 2};
//    a[1] che adadi ast?             Javab: ______
//
// B) a[0] = 9;
//    a[0] alan chande?               Javab: ______
//
// C) a.push_back(6);
//    size() chande?                  Javab: ______
//
// D) a.pop_back();
//    size() chande?                  Javab: ______
//
// E) Agar vector 4 item dashte bashad, index-e akhar chande? ______
//
// Yadet bashe: index az 0 shoroo mishavad.

int main() {
    cout << "C++ Vectors — Lesson\n";
    cout << "Har example ra mitavani joda joda ejra koni.\n";

    // Baraye didan-e natije-ye har bakhsh, faghat function-e marboot ra
    // az comment kharej kon (// ra hazf kon) ya function-ha ra yeki-yeki seda bezan.

    example1_create();
    example2_index();
    example3_change();
    example4_size();
    example5_push_back();
    example6_pop_back();
    example7_input();
    example8_if();
    example9_total();
    example10_shopping_list();

    return 0;
}
