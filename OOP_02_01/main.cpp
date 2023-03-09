#include <iostream>

int main()
{
    enum months
    {
        january = 1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };

    int input_number;
    months user_month;

    while (true)
    {
        std::cout << "Enter number of month: ";
        std::cin >> input_number;

        if (input_number == 0)
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        user_month = static_cast<months>(input_number);

        switch (user_month)
        {
            case january:
                std::cout << "January" << std::endl;
                break;
            case february:
                std::cout << "February" << std::endl;
                break;
            case march:
                std::cout << "March" << std::endl;
                break;
            case april:
                std::cout << "April" << std::endl;
                break;
            case may:
                std::cout << "May" << std::endl;
                break;
            case june:
                std::cout << "June" << std::endl;
                break;
            case july:
                std::cout << "July" << std::endl;
                break;
            case august:
                std::cout << "August" << std::endl;
                break;
            case september:
                std::cout << "September" << std::endl;
                break;
            case october:
                std::cout << "October" << std::endl;
                break;
            case november:
                std::cout << "November" << std::endl;
                break;
            case december:
                std::cout << "December" << std::endl;
                break;
            default:
                std::cout << "Wrong number entered!" << std::endl;
                break;
        }
    }

    return 0;
}
