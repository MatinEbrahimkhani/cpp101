// ============================================================
// Tamrin 308: Power-up (tavan)
// ============================================================
// In tabe-ye "square" YEK bug dare: x*2 bar migardone na x*x!
// Hadaf: bug ro peyda koni, dorostesh koni, va bebinin natije
// cheghadr avaz mishe.
//
//   x*x  -> 4, 16, 256, 65536, ... (tavan-haye 2)
//   x*2  -> 8, 16, 32, 64, ...     (hich tavani nist!)
//
// Nokte: int rooye adad-haye bozorg overflow mikone. Age x*x
// dorost beshe va tekrar ziad bashe, az kodom adad kharab mishe?
// ============================================================

#include <iostream>

int square(int x) {
    // BUG: faghat x*2 mikone — khodet in ro dorost kon!
    return x * 2;
}

int main() {
    int x = 4;
    // Ba tekrar 5 bejaye 127 ta natije mafhoom mimone
    // (127 bar tavan-giri az int rad mishe!)
    for (int i = 1; i <= 5; i++) {
        x = square(x);
        std::cout << "tekrar " << i << ": natije = " << x << std::endl;
    }
    return 0;
}