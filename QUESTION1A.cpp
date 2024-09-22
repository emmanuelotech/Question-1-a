#include <iostream>

int main(){
    int sum_of_series;
    int sum = 0;

    std::cout << "Enter the number of values in the series: ";
    std::cin >> sum_of_series;

    if (sum_of_series <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    sum += 1;

    for (int i = 3; i < 2 * sum_of_series + 1; i += 2) {
        sum += i;
        sum += i;
    }

    if (sum_of_series > 0) {
        sum += 97;
    }

    std::cout << "The sum of the series is: " << sum << std::endl;

    return 0;
}
