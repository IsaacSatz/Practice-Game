#include <iostream>
#include "movement.cpp"
#include "constants.cpp"

using namespace std;

int line1 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line2 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line3 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line4 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line5 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line6 [20] = {"O"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line7 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line8 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line9 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line10 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
int line11 [20] = {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "};
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
  sleep(.05);
}
