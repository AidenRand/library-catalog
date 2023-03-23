#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> book_catalog;
    std::cout << "What is your name? ";
    std::string input_name;
    std::cin >> input_name;

    // If the inputted name matches the admin profile name
    // ask for the admins password and if it matches - put them
    // into ADMIN profile
    if (input_name == "ADMIN_PROFILE")
    {
        std::cout << "Greetings Master, would you like to add or remove a book?";
        std::string admin_input;
        std::cin >> admin_input;
        if (admin_input == "add")
        {
            std::cin >> admin_input;

            // Loop through array to make sure book doesn't exist
            for (auto i = 0; i != book_catalog.size(); ++i)
            {
                if (book_catalog[i] == admin_input)
                {
                    std::cout << "The book already exists master";
                }
                else
                {
                    book_catalog.push_back(admin_input);
                }
            }
        }
    }
}
