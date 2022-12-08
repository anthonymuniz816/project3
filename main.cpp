//Anthony Muniz
//CS303
//Dec 8, 2022


#include<iomanip>
#include<queue>
#include<iostream>
#include<vector>
#include<limits>
#include<cctype>
#include<cstdlib>
#include <unistd.h>
#include<map>
#include "func.h"
using namespace std;


int main() {
char option;
string word;
string state;
bool x = true;
map<string, string> stateDataMap; //Map container that has both state and capital for question 5
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
  
  queue<int> ONE;  //Queue for question 1
  ONE.push(10);
  ONE.push(2000);
  ONE.push(345);
  ONE.push(56);
  ONE.push(67);
  
  

  while(x){ //This while loop will keep the menu reiterating until they choose to exit the program
    cout << endl;
    cout << "MENU"<< endl; //The menu allows the user to choose what function they want to see in action
  cout << "A) To see the Move_To_Rear Queue Function"<<endl;
  cout<< "B) To see the Palindrome Function"<< endl;
  cout << "C) To see StateDataMap Container" << endl;
  cout<< "E) EXIT"<<endl;
  cout << "Enter choice: ";
  cin >> option;
  switch(option){ 
    case 'A':  //This option will display the queue both before and after the move_to_rear function is put to work to show it works
    case 'a':
      cout << "This is how the normal Queue looks like: "; 
    show_queue(ONE);
    cout << endl;
    cout << endl<< "This is how the Queue looks like after the function is used: ";
    move_to_rear(ONE);
    show_queue(ONE);
      cout << endl;
      x=true;
    break;

    case 'B':  //This option will ask the user to input a word to see if it is a palindrome
    case 'b':
      cout <<"Enter word: ";
      cin >> word;
    if(isPalindrome(word)==true){
      cout << "This word is a palindrome!"<< endl;
    }
    
    else{
      cout<<"This word is not a palindrome!"<< endl;
    }
     x=true;
      break;  

    case 'C': //This option will display the Map container, correct one of the state capitals and ask the user what state they want to know the capital of and display it 
    case 'c':
      cout << "This is how the container looks like before the error is corrected: "<< endl;
      print_map(stateDataMap);
      cout << endl<< "This is how the container looks like after it is corrected: "<<endl;
      stateDataMap["California"] = "Los Angeles";
      print_map(stateDataMap);
    cout << endl<<"Enter state name: ";
    cin >> state;
    print_capital(stateDataMap, state);
      break;
    
    case 'E':  //This option will allow the user to end the program
    case 'e':
    x=false;
      cout<<"HAVE A GOOD DAY!"<<endl;
    break;
    

  }
    }
}