#include <iostream>

using namespace std;

int main(){
  int choice, film_choice, day_choice;
  cout << "===========================================" << endl;
  cout << "\tWelcome to Trash Cinema!" << endl;
  cout << "===========================================" << endl;
  cout << "Would you like to: " << endl;
  cout << "\t1. View Prices" << endl;
  cout << "\t2. View Day and Time of movies" << endl;
  cout << "\t3. View Films" << endl;
  cout << "\nPlease select: ";
  cin >> choice;
  switch (choice) {
    case 1: {
      cout << "\n\n=========================" << endl;
      cout << "\tViewing prices..........." << endl;
      cout << "=========================" << endl;
      cout << "1. Students   : PHP 65 " << endl;
      cout << "2. Adults     : PHP 250" << endl;
      cout << "3. Concession : PHP 100" << endl;
      cout << "------------------------" << endl;
      break;
    }
    case 2: {
      cout << "\n\n==============================================================" << endl;        
      cout << "Viewing date and time of movies..." << endl;
      cout << "==============================================================" << endl;
      cout << "\t1. John Wick : Chapter 4" << endl;
      cout << "\t2. Spider-Man : Across the Spider-Verse Part 1" << endl;
      cout << "\t3. Despicable Me (2010)" << endl;
      cout << "==============================================================" << endl;
      cout << "Viewing date and time of movies..." << endl;
      cout << "Please select what film you wish to view: ";
      cin >> film_choice;

      switch (film_choice) {
        case 1: {
          cout << "\n\n====================================" << endl;
          cout << "\tJohn Wick : Chapter 4" << endl;
          cout << "====================================" << endl;
          cout << "\t1. Friday" << endl;
          cout << "\t2. Saturday" << endl;
          cout << "\t3. Sunday" << endl;
          cout << "====================================" << endl;
          cout << "Please choose a day: ";
          cin >> day_choice;
          switch (day_choice) {
            case 1: {
              cout << "\n\n====================================" << endl;
              cout << "\t     Friday Times" << endl;
              cout << "\t9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 2: {
              cout << "\n\n====================================" << endl;
              cout << "\t     Saturday Times" << endl;
              cout << "\t9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 3: {
              cout << "\n\n====================================" << endl;
              cout << "\t     Sunday Times" << endl;
              cout << "\t9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            default: {
              cout << "\n\nInvlid Input, please try again.....";
            }
          }
          break;
        }
        case 2: {
          cout << "\n\n==============================================" << endl;
          cout << "\tSpider-Man : Across The Spider-Verse" << endl;
          cout << "=================================================" << endl;
          cout << "\t1. Friday" << endl;
          cout << "\t2. Saturday" << endl;
          cout << "\t3. Sunday" << endl;
          cout << "====================================" << endl;
          cout << "Please choose a day: ";
          cin >> day_choice;
          switch (day_choice) {
            case 1: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tFriday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 2: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tSaturday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 3: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tSunday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            default: {
              cout << "\n\nInvlid Input, please try again.....";
            }
          }
          break;
        }
        case 3: {
          cout << "\n\n==============================================" << endl;
          cout << "\tDescipable Me(2010)" << endl;
          cout << "=================================================" << endl;
          cout << "\t1. Friday" << endl;
          cout << "\t2. Saturday" << endl;
          cout << "\t3. Sunday" << endl;
          cout << "====================================" << endl;
          cout << "Please choose a day: ";
          cin >> day_choice;
          switch (day_choice) {
            case 1: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tFriday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 2: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tSaturday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            case 3: {
              cout << "\n\n====================================" << endl;
              cout << "\t\tSunday Times" << endl;
              cout << "\t 9:00 AM & 3:00 PM" << endl;
              cout << "====================================" << endl;
              break;
            }
            default: {
              cout << "\n\nInvlid Input, please try again.....";
            }
          }
          break;
        }
        default: {
          cout << "Invalid Input, Please try again.....";
        }
      }
      break;
    }
    case 3: {
      cout << "\n\n==============================================================" << endl;
      cout << "Viewing Films....." << endl;
      cout << "==============================================================" << endl;
      cout << "\t1. John Wick : Chapter 4" << endl;
      cout << "\t2. Spider-Man : Across the Spider-Verse Part 1" << endl;
      cout << "\t3. Despicable Me (2010)" << endl;
      cout << "==============================================================" << endl;
      break;
    }
    default: {
      cout << "Invalid Input, Pleease try again.....";
    }
  }
  return 0;
}
