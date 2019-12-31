
//instalasi library lcd
#include <LiquidCrystal.h>
 LiquidCrystal lcd(0,1,2,3,4,5);


//
  int baselineTemp =0;
  int celcius =0;
  int fahrenheit = 0;

void setup(){
  lcd.begin(16,2);  
    pinMode(A0, INPUT);
    
}



void loop(){
  baselineTemp=40;
  
  celcius =map(((analogRead(A0)-20)*3.04), 0, 1023, -40, 125);
  fahrenheit=((celcius*9)/ 5+ 32);
  
  
  //menampilkan kata di baris ke 1
  lcd.setCursor(2,0);
    lcd.print("SUHU SEKARANG");
  
  
  //menampilkan suhu di baris ke 2 
    lcd.setCursor(4,1);
    lcd.print(fahrenheit);
    lcd.print("F, ");
    lcd.print(celcius);
    lcd.print("C");
  delay(1000);
  
  
  
  
  
}
