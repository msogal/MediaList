#include <iostream>
#include<string.h>
#include "Media.h"
using namespace std;

class Movie: public Media{
 public:
  //constructor
  Movie(char ntitle[], int nyear, char ndirector[], float nduration, int nrating);
  char getDirector();
  float getDuration();
  int getRating();
  int getType();
 private:
  char director[];
  float duration;
  int rating;
};
