#include <iostream>
using namespace std;

int main() {

    unsigned int music_count;
    cout << "Total music used : ";
    cin >> music_count;

    unsigned int seam_count;
    cout << "Total seams count : ";
    cin >> seam_count;

    unsigned int total_music_length;
    cout << "Final music length (Rounded up) : ";
    cin >> total_music_length;

    double base_price = 200.00f;
    double final_price = (base_price + (music_count * 10) + (seam_count * 3)) + (total_music_length * 8);
    cout << "Total price : " << final_price << endl;

    return 0;
}