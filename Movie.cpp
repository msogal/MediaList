#include <iostream>
#include<cstring>
#include "Movie.h"
using namespace std;

Movie::Movie(char ntitle[], int nyear, char ndirector[],float nduration, int nrating):Media(ntitle, nyear){
  strcpy(director, ndirector);
  rating = nrating;
  duration = nduration;
}
char Movie::getDirector(){
  return *director;
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
