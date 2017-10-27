#include <iostream>

using namespace std;

class Media{
 public:
  //constructor
  Media(char ntitle[], int nyear);
  char getTitle();
  int getYear();
  int getType();
 private:
  char* title;
  int year; 
};
