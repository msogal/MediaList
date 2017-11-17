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
  cout<<"Type 'ADD' to add a media entry. Type 'SEARCH' to search the list of media. Type 'DELETE' to remove an entry. Type QUIT to quit"<<endl;
  while(inuse){
    cout<<"enter your actions"<<endl;
    char action[80];
    cin.get(action,80);
    cin.ignore(80, '\n');
    if(strcmp(action, "ADD")==0){
      cout<<"in add"<<endl;
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
      cin.ignore(80, '\n');
      if(type == 1){
	//add a movie
	char ndirector[80];
	cout<<"Enter Director"<<endl;
	cin.get(ndirector, 80);
	cin.ignore(80, '\n');
	float nduration = 0.0;
	cout<<"Enter duration in hours"<<endl;
	cin>>nduration;
	cin.ignore(80, '\n');
	int nrating = 0;
	cout<<"Enter a rating"<<endl;
	cin>>nrating;
	cin.ignore(80,'\n');
	Movie* m = new Movie(ntitle, nyear, ndirector, nduration, nrating);
	mediav.push_back(m);
	cout<<"Pushed"<<endl;
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
	cin.ignore(80,'\n');
	float nduration = 0.0;
	cout<<"Enter duration"<<endl;
	cin>>nduration;
	cin.ignore(80, '\n');
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
	cin.ignore(80, '\n');
	Video* v = new Video(ntitle, nyear, npub, nrating);
	mediav.push_back(v);
      }
      cout<<"Completed add"<<endl; 
    }
    if(strcmp(action, "SEARCH")==0){
      cout<<"How do you wish to search? 1-by title; 2- by year"<<endl;
      int searchm = 0;
      cin>>searchm;
      cin.ignore(80, '\n');
      if(searchm == 1){
	cout<<"Enter search title"<<endl;
	char stitle[80];
	cin.get(stitle,80);
	cin.ignore(80, '\n');
	cout<<"entering search loop"<<endl;
	for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	  cout<<"Searching..."<<endl;
	 if(strcmp(stitle, (*it)->getTitle())==0){
	    cout<<"Match Found:"<<endl;
	    (*it)->printMedia();
	  }
	}
      }else if(searchm==2){
	//search by year
	cout<<"Enter the year to search"<<endl;
	int syear = 0;
	cin>>syear;
	cin.ignore(80, '\n');
	cout<<"entering search loop"<<endl;
	for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	  cout<<"Searching..."<<endl;
	  if((*it)->getYear()==syear){
	    cout<<"Match Found"<<endl;
	    (*it)->printMedia();
	  }
	}
	
	
      }

      
    }

    if(strcmp(action, "QUIT")==0){
      break;
    }
    if(strcmp(action, "DELETE")==0){
      cout<<"Find media by 1-Title, or 2- Year?"<<endl;
      int searchm = 0;
      cin>>searchm;
      cin.ignore(80, '\n');
      if(searchm==1){
	//search by title
	cout<<"Enter the title you wish to delete"<<endl;
	char stitle[80];
	cin.get(stitle, 80);
	cin.ignore(80, '\n');
	//first, go thru the vector and count how many times that item appears
	//next, go thru the vector that many times; each time, stop at the first match and delete it
	int matchcount = 0;
	for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	  if(strcmp((*it)->getTitle(), stitle)==0){
	    matchcount++;
	  }
	}
	for(int i = 0; i<matchcount; i++){
	  for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	    if(strcmp((*it)->getTitle(), stitle)==0){
	      delete (*it);
	      mediav.erase(it);
	      break;
	    }
	  }
	}

	
      }else if(searchm==2){
	//search by year
	cout<<"Enter year to delete"<<endl;
	int syear = 0;
	cin>>syear;
	cin.ignore(80, '\n');
	//first go thru the vector and count how many times that item apears
	//next, fo thru the vector that many times; each time, stop at the first match and delete it
	int matchcount = 0;
	for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	  if((*it)->getYear()==syear){
	    matchcount++;
	  }
	}
	for(int i = 0; i < matchcount; i++){
	  for(vector<Media*>::iterator it = mediav.begin(); it != mediav.end(); it++){
	    if((*it)->getYear()==syear){
	      delete (*it);
	      mediav.erase(it);
	      break;
	    }
	  }
	}
      }
    }
  }
  return 0;
}
