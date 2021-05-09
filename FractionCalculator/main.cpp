#include <iostream>
#include "Fraction.cpp"
using namespace std;

class FractionCalculator
{
private:
    Fraction result = Fraction();
public:

    void doFractionCalculation ()
    {
        cout << "Enter the initial fraction : ";
        cin >> result;
        while (true)
        {
            string operation;
            cout << "\nWhat do you want to do ?" << endl;
            cout << "1- Adding fraction" << endl;
            cout << "2- Subtracting fraction" << endl;
            cout << "3- Multiplying by fraction" << endl;
            cout << "4- Dividing by fraction" << endl;
            cout << "5- Compare to another fraction" << endl;
            cout << "0- exit\n" << endl;
            cin >> operation;
            Fraction f;
            if (operation == "1")
            {
                cout << "Enter fraction to add : ";
                cin >> f;
                result = result + f;
                cout << "result = ";
                (result.getNumerator() == 0) ? cout << "0" << endl : cout << result << endl;
            }
            else if (operation == "2")
            {
                cout << "Enter fraction to subtract : ";
                cin >> f;
                result = result - f;
                cout << "result = ";
                (result.getNumerator() == 0) ? cout << "0" << endl : cout << result << endl;
            }
            else if (operation == "3")
            {
                cout << "Enter fraction to multiply by : ";
                cin >> f;
                result = result * f;
                cout << "result = ";
                (result.getNumerator() == 0) ? cout << "0" << endl : cout << result << endl;
            }
            else if (operation == "4")
            {
                cout << "Enter fraction to divide by : ";
                cin >> f;
                result = result / f;
                cout << "result = ";
                (result.getNumerator() == 0) ? cout << "0" << endl : cout << result << endl;
            }
            else if (operation == "5")
            {
                string compare;
                cout << "a- >\nb- <\nc- =\nd- >=\ne- <=" << endl;
                cin >> compare;
                cout << "Enter fraction to compare : ";
                cin >> f;

                if(compare == "a")
                {
                    if (result > f)
                        cout << result << " > " << f << endl;
                    else
                        cout << result << " is not greater than " << f << endl;
                }
                else if(compare == "b")
                {
                    if (result < f)
                        cout << result << " < " << f << endl;
                    else
                        cout << result << " is not less than " << f << endl;
                }
                else if(compare == "c")
                {
                    if (result == f)
                        cout << result << " = " << f << endl;
                    else
                        cout << result << " is not equal " << f << endl;
                }
                else if(compare == "d")
                {
                    if (result >= f)
                        cout << result << " >= " << f << endl;
                    else
                        cout << result << " is not greater than or equal " << f << endl;
                }
                else if(compare == "e")
                {
                    if (result <= f)
                        cout << result << " <= " << f << endl;
                    else
                        cout << result << " is not less than or equal " << f << endl;
                }
                else
                    cout << "Please choose from a to e" << endl;
            }
            else if (operation == "0")
                break;
            else
                cout << "Please choose from 1 to 5 or 0 to exit" << endl;
        }
    }
};

int main()
{
    FractionCalculator fc;
    fc.doFractionCalculation();
    return 0;
}
