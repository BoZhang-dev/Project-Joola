#include <Wire.h>
#include <rgb_lcd.h>

rgb_lcd lcd;
float colorR;
float colorG;
float colorB;
float Score;

void setup(){
  lcd.begin(16, 2);
  colorR = 182;
  colorG = 240;
  colorB = 252;
  lcd.display();
  lcd.setRGB(colorR, colorG, colorB);

  lcd.setCursor(0, 0);
  lcd.print("Bonjour !");
  delay(1000);
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Chargement");
  lcd.setCursor(0, 1);
  lcd.print("du systeme");
  delay(3000);

  
  Score = 0;

}



void loop(){
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Score :");
  lcd.setCursor(0, 1);
  lcd.print(Score);
  delay(5000);

}
