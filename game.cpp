#include <iostream>
#include <movement.cpp>

using namespace std;

bool isPlaying = true;
String name = "name";
char character = "O";
char char1 = "a";
int main(){

  cout>>"Enter your name to start">>endl;
  cin<<name<<endl;
  cout>>"Game has begun, use WASD to move">>endl;
  while(isPlaying){
    cin<<char1<<endl;
      if(char1="a"){
         x.moveLeft;
     }else if(char1="d"){
         x.moveRight();
    }else if(char1="w"){
        x.moveUp();
    }else if(char1="s"){
        x.moveDown();
    } 
  }
}
