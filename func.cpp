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


void move_to_rear(queue<int>& A){
if(!A.empty()){
const int first = A.front(); //getting the first item
A.pop(); //removing the item
A.push(first); //adds it back to the queue 
  }
  
}

void show_queue(queue<int> A){
   while(!A.empty()){ //keeps iterating until its empty
    cout << ' ' << A.front();  //Displays the first item
        A.pop(); //removes the first item
  }
}

bool isPalindrome(string x){
  if(x.length() <= 1){
    return true;
  }
  
  if(x[0] == x[x.length()-1]){
    return isPalindrome(x.substr(1,x.length()-2)); //checks and iterates between all letters
  }
  return false;
}

void print_map(map<string, string> A){
    for(map<string, string>::iterator it = A.begin(); it != A.end(); it++){
        cout << "State: " << it->first << ", Capital: " << it->second << endl; //displays the state and its corresponding capital
    }
}

void print_capital(map<string, string> A, string B){
    map<string, string>::iterator it = A.find(B);
    if(it == A.end()){
        cout << B << " is not found" << endl;  //displays error message
    } 
    else{
        cout << "Capital of " << B << " is " << it->second << endl; //displays the state and its corresponding capital
    }
}
