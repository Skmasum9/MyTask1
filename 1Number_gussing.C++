#include <iostream>
using namespace std;
int main()
{
    int b = 50, a = 1, ran, n;
    srand(time(0));
    ran = rand() % 50;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n****WELCOME TO GUESS ME RIGHT******";
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "\nGuess the no between 1 to 50: ";
    do
    {
        cin >> n;

        if (n < ran && n > a)
        {
            cout << "\n!!OOPS.... Too Low!!\n";
        }
        else if (n == ran)
        {
            cout << " \nWOW....Correct Guess\n";
        }
        else if (n > ran && n < b)
        {
            cout << "\n!!AHH... Too High !!\n";
        }
        else
        {
            cout << "\nPlease guess the no between given limit\n";
        }
    } while (n != ran);

    return 0;
}