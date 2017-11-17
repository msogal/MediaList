#include <iostream>
#include<cstring>
#include "Music.h"
using namespace std;

Music::Music(char *ntitle, int nyear, char *nartist, char *npub, int nrating, float nduration):Media(ntitle, nyear){
  artist = nartist;
  pub = npub;
  rating = nrating;
  duration = nduration;
}
char* Music::getArtist(){
  return artist;
}
char* Music::getPub(){
  return pub;
}
int Music:: getRating(){
  return rating;
}
float Music::getDuration(){
  return duration;
}
int Music::getType(){
  return 2;
}
void Music::printMedia(){
  cout<<"Music "<<this->getTitle()<<endl;
  cout<<'\t'<<"Artist: "<<this->getArtist()<<endl;
  cout<<'\t'<<"Published by "<<this->getPub()<<endl;
  cout<<'\t'<<this->getDuration()<<" minutes long"<<endl;
  cout<<'\t'<<this->getRating()<<" stars"<<endl;
}
