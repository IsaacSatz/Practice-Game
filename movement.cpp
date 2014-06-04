#include <iostream>
using namespace std;

moveLeft(){
  for(int i=0; i<5; i++){
    x[i]=x[i-1];
  }
}
moveRight(){
  for(int i=0; i<5; i++){
    x[i]=x[i+1];
  }
}
jump(){
  for(int i=0; i<5; i++){
    y[i]=y[i-1];
  }
}
