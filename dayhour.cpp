#include <iostream>

void second_converter(int second) {
    int res_second = second % 60;
    int minutes = second / 60;
    int res_minutes = minutes % 60;
    int res_hour = (minutes / 60) % 60;
    std::cout << res_minutes <<":"<< res_second<<std::endl;
    std::cout << res_hour <<":"<< res_minutes<<std::endl;
}
int main() {
    second_converter(1015);
    return(0);
}