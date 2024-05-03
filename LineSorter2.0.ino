#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal.h>
#include "LinerSorter.hpp"

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

char a_sInput = 'm';

CLineSorter *sorter = nullptr;

void setup() {
lcd.begin(16, 2);


if (sorter == nullptr)
    {
        sorter = new CLineSorter();
    }

}

char newSortArr[] = sorter->LineSorter(a_sInput);

void loop() {


  lcd.print(newSortArr);
  delay(500);
  lcd.clear();
  delay(500);



}
