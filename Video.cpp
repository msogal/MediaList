#include <iostream>
#include "Video.h"
#include <cstring>
using namespace std;

Video::Video(char *ntitle, int nyear, char *npub, int nrating): Media(ntitle, nyear) {
  pub = npub;
  rating = nrating;
}
char* Video::getPub(){
  return pub;
}
int Video::getRating(){
  return rating;
}
int Video::getType(){
  return 3;
}
void Video::printMedia(){
  cout<<"Video "<<this->getTitle()<<endl;
  cout<<'\t'<<"Published by "<<this->getPub()<<endl;
  cout<<'\t'<<this->getRating()<<" stars"<<endl;
}
