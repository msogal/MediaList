#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

Media::Media(char *ntitle, int nyear){
  title = ntitle;
  year = nyear;
}
char* Media::getTitle(){
  return title;
                      
}
int Media::getYear(){
  return year;
}
int Media::getType(){
  return 0;
}
void Media::printMedia(){
  cout<<"Media "<<this->getTitle()<<endl;
  cout<<'\t'<<"Year: "<<this->getYear()<<endl;
}
Media::~Media(){
  
}
