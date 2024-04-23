#include <Keyboard.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

//Google

void loop() {
  Keyboard.begin();
  if (digitalRead(2) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('g');
    delay(100);
  }
  else if (digitalRead(2) == 1) {
    Keyboard.releaseAll();
  }

  //Netflix
  if (digitalRead(3) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('n');
    delay(100);
  }
  else if (digitalRead(3) == 1) {
    Keyboard.releaseAll();
  }

  //Eurosport
  if (digitalRead(4) == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('e');
    delay(100);
  }
  else if (digitalRead(4) == 1) {
    Keyboard.releaseAll();
  }

  //spotify

  if (digitalRead(5) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('s');
    delay(100);
  }
  else if (digitalRead(5) == 1) {
    Keyboard.releaseAll();
  }

  //Steam
  if (digitalRead(6) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');
    delay(100);
  }
  else if (digitalRead(6) == 1) {
    Keyboard.releaseAll();
  }

  //youtube

  if (digitalRead(7) == 0) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('y');
    delay(100);
  }
  else if (digitalRead(7) == 1) {
    Keyboard.releaseAll();
  }


  Keyboard.end();
}

