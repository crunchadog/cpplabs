#include "iostream"
#include "App.h"
#include "../Functions/none_of.h"
#include "../Functions/is_sorted.h"
#include "../Functions/find_not.h"
#include "../CPoint/CPoint.h"
#include "vector"

int App::start() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    auto isEven = [](int num) { return num % 2 == 0; };

    bool containsEven = Functions::none_of(numbers.begin(), numbers.end(), isEven);

    std::cout << "Contains even number: " << std::boolalpha << containsEven << '\n';

    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    bool isSorted = Functions::is_sorted(numbers1.begin(), numbers1.end(), [](int a, int b) { return a < b; });
    std::cout << "Sorted 1: " << std::boolalpha << isSorted << '\n';

    std::vector<int> numbers2 = {5, 4, 3, 2, 1};
    bool isReverse = Functions::is_sorted(numbers2.begin(), numbers2.end(), [](int a, int b) { return a > b; });
    std::cout << "Reverse sorted 2: " << std::boolalpha << isReverse << '\n';

    std::vector<int> numbers3 = {3, 3, 3, 3, 239};

    auto it = Functions::find_not(numbers3.begin(), numbers3.end(), 3);
    if (it != numbers3.end())
    {
        std::cout << "First element not equal to 3: " << *it << '\n';
    }
    else
    {
        std::cout << "No element found not equal to 3" << '\n';
    }



}