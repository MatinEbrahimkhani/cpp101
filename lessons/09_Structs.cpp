
#include <iostream>
#include <string>
using namespace std;

/*
    C++ STRUCTS — BEGINNER LESSON
    Comments: Finglish (Persian written with English letters)

    In lesson:
    - Struct chist?
    - Tarif kardan-e struct
    - Sakhtan-e object
    - Member va dot operator
    - Initialize kardan va taghyir dadan
    - Struct + if
    - Voroodi az karbar
    - Use case: Student, Product, Player
    - Struct dakhel-e struct

    Baraye yadgiri:
    1. Har example ra bekhan.
    2. Ghabl az run kardan, output ra pishbini kon.
    3. Meghdar-ha ra taghyir bede va dobare ejra kon.
    4. In lesson loop nadarad.
*/


// ============================================================
// 1. STRUCT CHIYE?
// ============================================================
//
// Farz kon mikhaim maloomat-e yek danesh-amooz ra negah darim:
// name, age, score
//
// Mitavanimesh ba 3 variable joda benevisim:
//
// string name = "Ali";
// int age = 15;
// double score = 18.5;
//
// Amma agar chand danesh-amooz dashte bashim, morattab kardan-e
// maloomat sakht mishavad.
//
// struct be ma ejaze mide chand variable az type-haye mokhtalef
// ra dar yek group jam konim.
//
// struct mesl-e yek naqشه ast.
// Khodesh yek danesh-amooz nist; faghat mige Student che chiz-hayi darad.
//
// Mesal:
// struct Student {
//     string name;
//     int age;
//     double score;
// };
//
// Inja yek type-e jadid be esm Student tarif kardim.
//
// Use case-ha:
// - maloomat-e danesh-amooz
// - maloomat-e kala dar foroshgah
// - player dar bazi
// - maloomat-e yek ketab
// - maloomat-e yek mashin


// ============================================================
// 2. TARIF-E STRUCT
// ============================================================
//
// Syntax-e kolli:
//
// struct Name {
//     type member1;
//     type member2;
// };
//
// Nokat:
// - struct: shoroo-e tarif
// - Name: esm-e type-e jadid
// - member: variable-i ke dakhel-e struct tarif mishavad
// - { }: member-ha dakhel-e in ghesmat gharar migirand
// - ; ba'd az } zaroori ast
//
// Member-ha mitavanand type-haye mokhtalef dashte bashand.

struct Student {
    string name;
    int age;
    double score;
};


// ============================================================
// 3. SAKHTAN-E OBJECT
// ============================================================
//
// Ba'd az tarif-e struct, mitavan yek variable az type-e Student besazim.
//
// Student s1;
//
// Be in variable yek object ham migan.
// Har object data-ye khodesh ra darad.
//
// Baraye dastresi be member-ha az dot (.) estefade mikonim:
//
// s1.name
// s1.age
// s1.score
//
// Dot yani "member-e in object".

void example1_create_object() {
    cout << "\n--- Example 1: Creating an object ---\n";

    Student s1;

    s1.name = "Ali";
    s1.age = 15;
    s1.score = 18.5;

    cout << s1.name << "\n";
    cout << s1.age << "\n";
    cout << s1.score << "\n";
}


// ============================================================
// 4. INITIALIZE KARDAN-E OBJECT
// ============================================================
//
// Mitavan vaghti object ra misazim, member-ha ra ham meghdar bedahim:
//
// Student s2 = {"Sara", 16, 19.25};
//
// Tartib-e value-ha bayad hamoon tartib-e member-ha dar struct bashad:
// name, age, score
//
// Pas:
// value-ye aval -> name
// value-ye dovom -> age
// value-ye sevvom -> score

void example2_initialize() {
    cout << "\n--- Example 2: Initializing an object ---\n";

    Student s2 = {"Sara", 16, 19.25};

    cout << "Name: " << s2.name << "\n";
    cout << "Age: " << s2.age << "\n";
    cout << "Score: " << s2.score << "\n";
}


// ============================================================
// 5. TAGHYIR DADAN-E MEMBER
// ============================================================
//
// Member-ha mesle variable-haye mamooli taghyir mikonan.
// Faghat bayad az dot estefade konim.
//
// s1.age = 16;
// yani age-e object-e s1 ra 16 kon.
//
// Taghyir-e s1 be s2 asar nemizarad.

void example3_change_member() {
    cout << "\n--- Example 3: Changing a member ---\n";

    Student s1 = {"Ali", 15, 17.0};

    s1.age = 16;
    s1.score = 18.0;

    cout << s1.name << "\n";  // Ali
    cout << s1.age << "\n";   // 16
    cout << s1.score << "\n"; // 18
}


// ============================================================
// 6. DO OBJECT AZ YE STRUCT
// ============================================================
//
// Mitavan az yek struct chand object sakht.
// Har object member-haye joda-ye khodesh ra darad.

void example4_two_students() {
    cout << "\n--- Example 4: Two objects ---\n";

    Student s1 = {"Nima", 15, 16.5};
    Student s2 = {"Mina", 16, 19.0};

    cout << s1.name << " : " << s1.score << "\n";
    cout << s2.name << " : " << s2.score << "\n";

    s2.score = 19;

    // Taghyir-e score-e s1, score-e s2 ra taghyir nemidehad.
    cout << "Mina's score: " << s2.score << "\n";
}


// ============================================================
// 7. STRUCT + IF
// ============================================================
//
// Member-e struct ra mitavan dar if estefade kard.
// Mesal: agar score 10 ya bishtar bood, student pass ast.
//
// >= yani bozorgtar ya mosavi ba.

void example5_if() {
    cout << "\n--- Example 5: Struct with if ---\n";

    Student s1 = {"Reza", 15, 9.5};

    if (s1.score >= 10) {
        cout << s1.name << " passed.\n";
    } else {
        cout << s1.name << " needs more practice.\n";
    }
}


// ============================================================
// 8. VOROODI AZ KARBAR
// ============================================================
//
// Mitavan voroodi ra mostaghiman dar member-ha gharar dad.
// cin >> string faghat ta space aval ra migirad.
// Baraye sadegi, name ra yek kalame migirim.

void example6_input() {
    cout << "\n--- Example 6: Input into a struct ---\n";

    Student s1;

    cout << "Enter name: ";
    cin >> s1.name;

    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter score: ";
    cin >> s1.score;

    cout << "Student: " << s1.name
         << ", age " << s1.age
         << ", score " << s1.score << "\n";
}


// ============================================================
// 9. USE CASE: PRODUCT
// ============================================================
//
// Struct faghat baraye danesh-amooz nist.
// Baraye kala mitavan name, price, va quantity negah dasht.
//
// quantity yani tedad-e kala.

struct Product {
    string name;
    double price;
    int quantity;
};

void example7_product() {
    cout << "\n--- Example 7: Product ---\n";

    Product item = {"Notebook", 2.5, 4};

    cout << "Product: " << item.name << "\n";
    cout << "Price: " << item.price << "\n";
    cout << "Quantity: " << item.quantity << "\n";

    // Gheymat-e kol = gheymat-e yek kala * tedad
    double total = item.price * item.quantity;

    cout << "Total: " << total << "\n";
}


// ============================================================
// 10. USE CASE: PLAYER DAR BAZI
// ============================================================
//
// Yek player mitavanad name va points dashte bashad.
// Dar in mesal, points-e do player ra moghayese mikonim.

struct Player {
    string name;
    int points;
};

void example8_game_player() {
    cout << "\n--- Example 8: Game players ---\n";

    Player p1 = {"Arman", 12};
    Player p2 = {"Darya", 17};

    if (p1.points > p2.points) {
        cout << p1.name << " has more points.\n";
    } else {
        cout << p2.name << " has more points or the same points.\n";
    }
}


// ============================================================
// 11. STRUCT DAKHEL-E STRUCT (Optional)
// ============================================================
//
// Yek struct mitavanad yek member az type-e struct-e digar dashte bashad.
// In bakhsh yekam pishrafte-tar ast; faghat baraye ashnaei.
//
// Address yek type baraye maloomat-e address ast.
// Person yek name va yek address darad.

struct Address {
    string city;
    int houseNumber;
};

struct Person {
    string name;
    Address home;
};

void example9_nested_struct() {
    cout << "\n--- Example 9: Struct inside a struct ---\n";

    Person p = {"Sara", {"Zanjan", 12}};

    cout << p.name << "\n";
    cout << p.home.city << "\n";
    cout << p.home.houseNumber << "\n";

    // p.home.city yani:
    // az object-e p, member-e home ro peyda kon,
    // bad member-e city ro az home bekhan.
}


// ============================================================
// 12. TAMRIN-E KUTAH BARAYE CLASS
// ============================================================
//
// A) Student s = {"Ali", 15, 18};
//    s.name chist? ________Ali__________
//
// B) s.age = 16;
//    s.age alan chande? _________16_________
//
// C) Student s2 = {"Mina", 14, 20};
//    Aya taghyir-e s.age rooye s2.age asar darad? ____kheir______
//
// D) Student s;
//    s.age = 15;
//    s.age che meghdari darad? ________nemidanam,ettelaee nadaram__________
//
// E) Baraye dastresi be member az kodam alamat estefade mikonim?
//    ________{}__________
//
// F) Agar Student s = {"Ali", 15, 18}; bashad,
//    s.score chande? ________18__________


// ============================================================
// 13. KHOLASE
// ============================================================
//
// struct Student { ... };      -> tarif-e yek type-e jadid
// Student s;                   -> sakhtan-e object
// s.name = "Ali";              -> meghdar dadan be member
// s.name                       -> khandan-e member
// Student s = {"Ali",15,18};   -> initialize kardan ba tartib
// if (s.score >= 10)            -> estefade az member dar if
//
// Yadet bashe:
// - struct naqشه ast.
// - object yek nemone az struct ast.
// - dot (.) baraye residan be member ast.
// - har object data-ye joda-ye khodesh ra darad.

int main() {
    cout << "C++ Structs — Lesson\n";

    example1_create_object();
    example2_initialize();
    example3_change_member();
    example4_two_students();
    example5_if();
    example7_product();
    example8_game_player();
    example9_nested_struct();

    // Example-e voroodi ra joda ejra kon:
    example6_input();

    return 0;
}