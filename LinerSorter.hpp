#include <Arduino.h>

class CLineSorter
{

public:
void LineSorter(char a_sInput);
    // Setter
    void setInput(char a_sInput) {
        a_direction = a_sInput;
    }
    // Getter
    int getInput() {
        return a_direction;
    }
private:

char a_direction;
};