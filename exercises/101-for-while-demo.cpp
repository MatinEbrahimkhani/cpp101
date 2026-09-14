// ============================================================
// Demo 101: for vs while (moghayese-ye do halghe)
// ============================================================
// In file yek DEMO ast: mostaghim build va run mishe.
// Hadaf: befahmi for va while har do "tekrar" mikonan,
// faghat sakhtareshoon fargh dare.
//
// Rahnamay-e Finglish:
//   for vaghti ke midooni CHAND bar (mesle 0 ta 99).
//   while vaghti ke midooni TA KEY (ta vaghti shart true-e).
//
// Tavajjoh: i++ kafist — "i = i ++" ghalat-e!
// ============================================================

#include <iostream>

int main() {
    int shomare = 10;  // amdan koochik — 99 khat kheili ziad-e!

    std::cout << "--- for ---" << std::endl;
    for (int i = 0; i < shomare; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "--- while (hamoon kar) ---" << std::endl;
    int j = 0;
    while (j < shomare) {
        std::cout << j << std::endl;
        j++;
    }
    return 0;
}