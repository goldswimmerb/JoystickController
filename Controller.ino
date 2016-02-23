
#include <Joystick.h>


int UD = 0;
int LR = 0;

int buffer = 20;

boolean up = false;
boolean down = false;
boolean right = false;
boolean left = false;


void setup() {
  Joystick.begin();
  pinMode(7,INPUT);
  pinMode(9,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  
}

void loop() {
  for(int i = 0; i < 16; i++){
  }
  int UD1 = map(analogRead(A0),0,1024,-127,127);
  int LR1 =  map(analogRead(A1),0,1024,-127,127);
  Joystick.setYAxis(UD1);
  Joystick.setXAxis(LR1); 
  if(down){
    Joystick.pressButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }
  else if(up){
    Joystick.releaseButton(1);
    Joystick.pressButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }else if(left){
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.pressButton(3);
    Joystick.releaseButton(4);
  }else if(right){
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.pressButton(4);
  }
  else{
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
    up=false;
    down=false;
    left=false;
    right=false;
  }
  if(digitalRead(7)){
    Joystick.pressButton(7);
  }
  else{
    Joystick.releaseButton(7);
  }
  if(digitalRead(9)){
    Joystick.pressButton(9);
  }
  else{
    Joystick.releaseButton(9);
  }
   if(digitalRead(11)){
    Joystick.pressButton(10);
  }
  else{
    Joystick.releaseButton(10);
  }
  if(digitalRead(12)){
    Joystick.pressButton(11);
  }
  else{
    Joystick.releaseButton(11);
  }
}
