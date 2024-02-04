#include <TVout.h>
#include "my_pic.h"

TVout tv;

void setup() {
  Serial.begin(9600);

  tv.begin(PAL); 
  tv.clear_screen();
  tv.bitmap(0, 0, d2);

}

void loop() {
  


}