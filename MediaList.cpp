#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Movie.h"
#include "Video.h"
#include "Music.h"
using namespace std;
int main(){
  vector <Media*> mediav;
  bool inuse = true;
  cout<<"Welcome to Media List. This program allows you to create and view a list of music, movies, and video games"<<endl;
  cout<<"Type 'ADD' to add a media entry. Type 'SEARCH' to search the list of media. Type 'DELETE' to remove an entry"<<endl;
  while(inuse){
    char action[80];
    cin.get(action,80);
    cin.ignore(80, '\n');
    if(strcmp(action, "ADD")==0){
      char ntitle[80];
      int nyear = 0;
      cout<<"Select the type of media you wish to add: 1-Movie; 2-Music; 3-Video Game"<<endl;
      int type = 0;
      cin>>type;
      cin.ignore(80, '\n');
      cout<<"Enter a title"<<endl;
      cin.get(ntitle, 80);
      cin.ignore(80, '\n');
      cout<<"Enter the year"<<endl;
      cin>>nyear;
      if(type == 1){
	//add a movie
	char ndirector[80];
	cout<<"Enter Director"<<endl;
	cin.get(ndirector, 80);
	cin.ignore(80, '\n');
	float nduration = 0.0;
	cout<<"Enter duration in hours"<<endl;
	cin>>nduration;
	int nrating = 0;
	cout<<"Enter a rating"<<endl;
	cin>>nrating;
	Movie* m = new Movie(ntitle, nyear, ndirector, nduration, nrating);
	mediav.push_back(m);	
      }else if(type == 2){
	//add music
	char nartist[80];
	cout<<"Enter Artist"<<endl;
	cin.get(nartist, 80);
	cin.ignore(80, '\n');
	char npub[80];
	cout<<"Enter publisher"<<endl;
	cin.get(npub, 80);
	cin.ignore(80, '\n');
	int nrating = 0;
	cout<<"Enter rating"<<endl;
	cin>>nrating;
	float nduration = 0.0;
	cout<<"Enter duration"<<endl;
	cin>>nduration;
	Music* m = new Music(ntitle, nyear, nartist, npub, nrating, nduration);
	mediav.push_back(m);
      }else if(type == 3){
	//add a video game
	char npub[80];
	cout<<"Enter a publisher"<<endl;
	cin.get(npub, 80);
	cin.ignore(80, '\n');
	int nrating = 0;
	cout<<"Enter a rating"<<endl;
	cin>>nrating;
	Video* v = new Video(ntitle, nyear, npub, nrating);
	mediav.push_back(v);
	
      }
    }
  }
  return 0;
}