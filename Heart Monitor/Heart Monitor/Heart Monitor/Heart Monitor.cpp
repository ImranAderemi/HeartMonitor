#include <limits>
#include <iostream>

int HR;
int BP;
char again;
float TMP;

void getInput(const std::string& prompt, int& var) {
    while (true) {
        std::cout << prompt;
        std::cin >> var;
        if (std::cin.fail()) { // Checks if the value that was input is valid
            std::cin.clear(); // Clears the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
}

void getInput(const std::string& prompt, float& var) {
    while (true) {
        std::cout << prompt;
        std::cin >> var;
        if (std::cin.fail()) { 
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Invalid input. Please enter a valid number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            break;
        }
    }
}



int main() {
    std::cout << "welcome to my Health Monitor \n";
    std::cout << "\u001b[32mPLEASE NOTE: Any advice given SHOULD NOT be interpreted as a final indication of health, and is only a recommendation based on the data provided. This advice SHOULD NOT overrule or overpower that of a qualified health professional.\u001b[0m\n";
   
    getInput("Please input your Heart Rate:\n", HR);
    if (HR >= 100)
    {
        std::cout << "\u001b[31mALERT, Your Heart Rate is Above the safe range!!!\u001b[0m\n";
    }
    else if (HR < 80)
    {
        std::cout << "\u001b[31mALERT, Your Heart Rate is Below the safe range\u001b[0m\n";
    }

    getInput("Please input your Blood Pressure:\n", BP);
    if (BP >= 120)
    {
        std::cout << "\u001b[31mALERT, Your Blood Pressure is Above the safe range\u001b[0m\n";
    }
    else if (BP < 80)
    {
        std::cout << "\u001b[31mALERT, Your Blood Pressure is Below the safe range\u001b[0m\n";
    }

    getInput("Please input your Body Temperature:\n", TMP);
    if (TMP >= 37)
    {
        std::cout << "\u001b[31mALERT, Your Body Temperature is Above the safe range\u001b[0m\n";
    }
    else if (TMP < 36.1)
    {
        std::cout << "\u001b[31mALERT, Your Body Temperature is Below the safe range\u001b[0m\n";
    }


    // summary of the users vitals can be seen below

    std::cout << "\n";
    if (HR < 80 || HR >= 100) 
    {
        std::cout << "Summary:\n";
        std::cout << "\u001b[31mALERT, Your Heart Rate is within an unsafe and abnormal range. We think you should contact your local health professional IMMEDIATELY\u001b[0m\n";
    }
    else 
    {
        std::cout << "\u001b[32mYour Heart Rate is within a normal and SAFE range, there's nothing to worry about :)\u001b[0m\n";
    }

    if (BP < 80 || BP >= 120) 
    {
        std::cout << "\u001b[31mALERT, Your Blood Pressure is within an unsafe and abnormal range. We think you should contact your local health professional IMMEDIATELY\u001b[0m\n";
    }
    else 
    {
        std::cout << "\u001b[32mYour blood pressure is within a normal and SAFE range, there's nothing to worry about :)\u001b[0m\n";
    }

    if (TMP < 36.1 || TMP >= 37) 
    {
        std::cout << "\u001b[31mALERT, Your Body Temperature is within an unsafe and abnormal range. We think you should contact your local health professional IMMEDIATELY\u001b[0m\n";
    }
    else 
    {
        std::cout << "\u001b[32mYour body temperature is within a normal and SAFE range, there's nothing to worry about :)\u001b[0m\n";
    }




    while (true)
    {
        std::cout << "Would you like to try again (Y or N)\n";
        std::cin >> again;

        if (again == 'Y' || again == 'y')
        {
            main();
            break;
        }

        else if (again == 'N' || again == 'n')
        {
            std::cout << "Bye, Have a nice day :)\n";
            break;
        }

        else
        {
            std::cout << "Please try again. Please enter 'Y' or 'N'.\n";
        }

    }

    return 0;
}

