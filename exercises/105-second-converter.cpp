// ============================================================
// Tamrin 105: Tabdil-e sanie (second converter)
// ============================================================
// Masalan 1015 sanie chand sa'at / daghighe / sanie mishe?
// Nokte-ha:
//   % yani baghimande (remainder), / yani taghsim-e sahih.
//   mesal: 1015 sanie = 16 daghighe va 55 sanie (16*60+55 = 1015)
// ============================================================

#include <iostream>

void secondConverter(int totalSeconds) {
    int seconds = totalSeconds % 60;        // sanie-haye baghimande
    int totalMinutes = totalSeconds / 60;   // daghighe-ye kamel
    int minutes = totalMinutes % 60;        // daghighe-haye baghimande
    int hours = totalMinutes / 60;          // sa'at-haye kamel

    std::cout << totalSeconds << " sanie = "
              << hours << " : "
              << minutes << " : "
              << seconds << std::endl;
}

int main() {
    secondConverter(1015);   // entezar: 0 : 16 : 55
    secondConverter(4000);   // entezar: 1 : 6 : 40  (khoodet hads bezan!)
    return 0;
}