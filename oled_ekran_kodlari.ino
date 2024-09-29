#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup () {
  Serial.begin(9600);
     if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
      Serial.println("Screen not found");
       for(;;);
     }
}

void loop () {
  display.clearDisplay();
     display.drawRect(0,0,127,63,WHITE);
   display.setTextSize(2);
    display.setTextColor(WHITE);
     display.setCursor(5,5);
      display.println("Mustafa");
        display.display();
          delay(2000);
  
  display.clearDisplay();
  display.drawRect(0,0,127,63,WHITE);
    display.drawCircle(64,32,20, WHITE );
      display.display();
        delay(2000);

  display.clearDisplay();
  display.drawRect(0,0,127,63,WHITE);
    display.drawTriangle(30,10,50,50,10,50, WHITE);
      display.display();
        delay(2000);

  display.clearDisplay();
  display.drawRect(0,0,127,63,WHITE);
    display.fillRect(20,30,15,20,WHITE);
      display.display();
        delay(2000);
  

 








}

