#include <iostream>
#include <vector>

using namespace std;

string input;
void homescreen() {
    cout << "Assistant Search! Homescreen\n\n";
    cout << "Employer Info (Your info)\n";
    cout << "    Contact: hiring@company.com\n";
    cout << "    Looking for: Assistants of any profession\n";
    cout << "Note: The Employer Info above is public.\n\n";
    cout << "Account Info\n";
    cout << "    Account Email: sth123@gmail.com\n";
    cout << "    Address: 1234 Happy Ln, Corvallis OR 97330\n";
    cout << "    Phone Number: 123-456-7890\n";
    cout << "Note: The Account Info above is private.\n\n";
    cout << "Please enter a command. If you want a manual of commands for the homepage,"
            " type 'manual' without the quotes.\n";
    getline(cin, input);
}

void homescreen_manual() {
    cout << "Assistant Search! Homepage Manual\n\n";
    cout << "search\n";
    cout << "    The 'search' command will direct you to the search page. You can search for assistants here.\n";
    cout << "pending\n";
    cout << "    The 'pending' command will direct you to the pending applicants page. You can view the applicants"
            "that have applied to the position you are looking for.\n";
    cout << "chat\n";
    cout << "    The 'chat' command will direct you to the chat page. This is currently an unavailable feature but"
            "the page exists.\n";
    cout << "quit\n";
    cout << "    The 'quit' command will quit the program.\n";
    cout << "Type 'back' without the quotes to go back to the homescreen.\n";
    getline(cin, input);
    while (input != "back") {
        cout << "Unrecognized command. Please try again.\n";
        getline(cin, input);
    }
    homescreen();
}

void chat() {
    cout << "This page is currently unavailable. We apologize for the inconvenience.\n";
    cout << "Type 'back' without the quotes to go back to the homescreen.\n";
    getline(cin, input);
    while (input != "back") {
        cout << "Unrecognized command. Please try again.\n";
        getline(cin, input);
    }
    homescreen();
}

void search() {
    while (true) {
        cout << "Assistant Search! Search Page\n\n";
        cout << "Please type what you want to search for. Current entries: Chie, Yosuke, Naoto, Yukari.\n";
        cout << "Type 'back' without quotes to go back to the homepage.\n";
        getline(cin, input);
        while (input != "Chie" && input != "Yosuke" && input != "Naoto" && input != "Yukari" && input != "back") {
            cout << "Unrecognized search. Please try again.\n";
            getline(cin, input);
        }
        if (input == "Chie") {
            cout << "Chie Satonaka\n";
            cout << "Description: Kung-Fu Martial Artist\n";
        } else if (input == "Yosuke") {
            cout << "Yosuke Hanamura\n";
            cout << "Description: Store Employee\n";
        } else if (input == "Naoto") {
            cout << "Naoto Shirogane\n";
            cout << "Description: Detective\n";
        } else if (input == "Yukari") {
            cout << "Yukari Takeba\n";
            cout << "Descrition: Actress\n";
        } else if (input == "back") {
            break;
        }
    }
    homescreen();
}

void pending() {
    while (true) {
        cout << "Applicant Search! Pending Page\n\n";
        cout << "List of Pending Applicants: Samantha, John\n";
        cout << "Type in the name of one of the applicants to see more information about them.\n";
        cout << "Type 'back' without quotes to return to the homescreen.\n";
        getline(cin, input);
        while (input != "Samantha" && input != "John" && input != "back") {
            cout << "Unrecognized command. Please try again.\n";
            getline(cin, input);
        }
        if (input == "Samantha") {
            cout << "Name: Samantha Nguyen\n";
            cout << "Email: samantha.nguyen@gmail.com\n";
            cout << "Profession: Fortune Teller";
            cout << "Do you want to see the resume? Type 'yes' or 'no'.\n";
            getline(cin, input);
            while (input != "yes" && input != "no") {
                cout << "Unknown input. Try again.\n";
                getline(cin, input);
            }
            if (input == "yes") {
                cout << "Resume: 10 years experience fortune telling.\n";
            }
            cout << "Do you want to see the cover letter? Type 'yes' or 'no'.\n";
            getline(cin, input);
            while (input != "yes" && input != "no") {
                cout << "Unrecognized command. Please try again.\n";
                getline(cin, input);
            }
            if (input == "yes") {
                cout << "Cover Letter: I am a very good fortune teller.\n";
            }
        } else if (input == "John") {
            cout << "Name: John Adams\n";
            cout << "Email: john.adams@gmail.com\n";
            cout << "Profession: Handyman\n";
            cout << "Do you want to see the resume? Type 'yes' or 'no'.\n";
            getline(cin, input);
            while (input != "yes" && input != "no") {
                cout << "Unknown input. Try again.\n";
                getline(cin, input);
            }
            if (input == "yes") {
                cout << "Resume: 10 years experience repairing appliances.\n";
            }
            cout << "Do you want to see the cover letter? Type 'yes' or 'no'.\n";
            getline(cin, input);
            while (input != "yes" && input != "no") {
                cout << "Unknown input. Try again.\n";
                getline(cin, input);
            }
            if (input == "yes") {
                cout << "Cover letter: I am very good at fixing things.\n";
            }
        } else {
            break;
        }
    }
    homescreen();
}

int main() {
    homescreen();
    while (true) {
        if (input == "manual") {
            homescreen_manual();
        } else if (input == "search") {
            search();
        } else if (input == "pending") {
            pending();
        } else if (input == "chat") {
            chat();
        } else if (input == "quit") {
            break;
        } else {
            cout << "Unrecognized command. Please try again.\n";
            getline(cin, input);
        }
    }
    return 0;
}


