#include <iostream>
#include<cstring>
#include "Music.h"
using namespace std;

Music::Music(char ntitle[], int nyear, char nartist[], char npub[], int nrating, float nduration):Media(ntitle, nyear){
  strcpy(artist, nartist);
  strcpy(pub, npub);
  rating = nrating;
  duration = nduration;
}
char Music::getArtist(){
  return *artist;
}
char Music::getPub(){
  return *pub;
}
int Music:: getRating(){
  return rating;
}
float Music::getDuration(){
  return duration;
}
int getType(){
  return 2;
}
