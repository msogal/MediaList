
#include <iostream>
#include<cstring>
#include "Movie.h"
using namespace std;

Movie::Movie(char *ntitle, int nyear, char *ndirector,float nduration, int nrating):Media(ntitle, nyear){
  director = ndirector;
  rating = nrating;
  duration = nduration;
}
char* Movie::getDirector(){
  return director;
}
float Movie::getDuration(){
  return duration;
}
int Movie::getRating(){
  return rating;
}
int Movie::getType(){
  return 1;
}
void Movie::printMedia(){
  cout<<"Movie "<<this->getTitle()<<endl;
  cout<<'\t'<<"Directed by "<<this->getDirector()<<endl;
  cout<<'\t'<<this->getDuration()<<" Hours long"<<endl;
  cout<<'\t'<<this->getRating()<<" stars"<<endl;
}
