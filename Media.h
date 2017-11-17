#ifndef Media_H
#define Media_H 
#include <iostream>

using namespace std;

class Media{
 public:
  //constructor
  Media(char *ntitle, int nyear);
  char* getTitle();
  int getYear();
  virtual int getType();
  virtual void printMedia();
  //deconstructor
  ~Media();
 private:
  char* title;
  int year; 
};
#endif
