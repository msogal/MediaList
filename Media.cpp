#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

Media::Media(char ntitle[], int nyear){
  strcpy(title,ntitle);
  year = nyear;
}
char Media::getTitle(){
  return *title;
                      
}
int Media::getYear(){
  return year;
}
int Media::getType(){
  return 0;
}
