#include<LiquidCrystal.h>

float rast,sped,SEC;
String rasts,speeds,str;

LiquidCrystal lcd(13, 11, 8, 6, 4, 2);

void setup() {
  pinMode(A3, INPUT);
  rast = 0;
  SEC = 0;
  sped = 0;
  lcd.begin(8, 2);
  lcd.setCursor(0,0);
}
 
void loop() { 
  int State = analogRead(A3); 
  while (State > 300 ) {   
    SEC += 0.1;
    delay(100);
    State = analogRead(A3);
   }
    rast +=(1.8*3.14)/1000;//здесь надо указать в место 1.8 свой диаметр
    sped = ((1.8*3.14) / SEC)*3.6 ;//и здесь
    lcd.setCursor(0,0);
    str = String(int(fmod (rast,1)*100));
    if (str.length() == 1){
      str = String("0")+str;
    }
    String (int(rast) , DEC)+String(".")+String(str)+String("KM")+String("       ");
    lcd.print(rast+String("KM          "));
    lcd.setCursor(0,1);
    lcd.print(int(sped)+String("KM/H        "));
    /*str = String(int(fmod (rast,1)*100));
    if (str.length() == 1)
    {
      str =  String("0")+String(int(fmod (rast,1)*100));
    }
    String rasts = String (int(rast) , DEC)+String(".")+String(str)+String("KM")+String("       ");
    lcd.setCursor(0,0);
    lcd.print(rast);
    lcd.setCursor(0,1);
    sped =(1.8/SEC)*36;
    String speds = String (int(sped) , DEC)+String("KM/H")+String("        ");
    lcd.print(speds);*/
    delay(500);
    SEC = 0.5;
    State = 300;
    
}
