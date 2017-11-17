#include <iostream>
#include "Media.h"

using namespace std;

class Video: public Media{ 
 public:
  //constructor
  Video(char *ntitle, int nyear, char *npub, int nrating);
  char* getPub();
  int getRating();
  int getType();
  void printMedia();
 private:
  char* pub;
  int rating;
  
};
