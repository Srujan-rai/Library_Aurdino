#ifndef OLED_H
#define OLED_H

#include<Aurdino.h>
#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

class OLED
{
private:
    int _width;
    int _height;
    int _address;
    Adafruit_SSD1306* _display;

public:
    OLED(int width,int height,int address);
    void begin();
    void displayText(const String& text, int x, int y);
    void clear();
};





#endif