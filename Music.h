#include <iostream>
#include<string.h>
#include "Media.h"
using namespace std;

class Music: public Media {
 public:
  //constructor
  Music(char ntitle[], int nyear, char nartist[], char npub[], int nrating, float nduration);
  char getArtist();
  char getPub();
  int getRating();
  float getDuration();

 private:
  char artist[];
  char pub[];
  int rating;
  float duration;
};
