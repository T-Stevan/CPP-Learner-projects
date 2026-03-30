#include <iostream>

using namespace std;

int main()
{
    int cookies, box, container, discardCookies, discardBox;
    cout << "How many cookies do you have? ";
    cin >> cookies;

    box = cookies / 24;               // full boxes
    discardCookies = cookies % 24;    // leftover cookies

    container = box / 75;             // full containers
    discardBox = box % 75;            // leftover boxes

    cout << box << " boxes available" << endl;
    cout << container << " containers available" << endl;

    if (discardCookies > 0)
        cout << discardCookies << " cookies discarded" << endl;
    else
        cout << "No cookies discarded" << endl;

    if (discardBox > 0)
        cout << discardBox << " boxes discarded" << endl;
    else
        cout << "No boxes discarded" << endl;

    return 0;
}