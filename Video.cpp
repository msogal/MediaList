#include <iostream>
#include "Video.h"
#include <string.h>
using namespace std;

Video::Video(char ntitle[], int nyear, char npub[], int nrating): Media(ntitle, nyear) {
  strcpy(pub, npub);
  rating = nrating;
}
char Video::getPub(){
  return *pub;
}
int Video::getRating(){
  return rating;
}
int Video::getType(){
  return 1;
}
