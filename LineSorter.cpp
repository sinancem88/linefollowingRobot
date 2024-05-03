#include "LinerSorter.hpp"
#include <Arduino.h>

using namespace std;

int iLeftLine = 0;
int iMiddleLine = 0;
int iRightLine = 0;

void CLineSorter::LineSorter(char a_direction)
{

    //incremenmts the the value of the Route variable
    if (a_direction == 'l')
    {
        iLeftLine++;
    }
    if (a_direction == 'm')
    {
        iMiddleLine++;
    }
    if (a_direction == 'r')
    {
        iRightLine++;

    }
    // sorting from highest to lowest values based on the frequency of input for the choosen lines
    int iArrLineSort[3] = { iLeftLine,iMiddleLine,iRightLine };


    int iTemporary;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (iArrLineSort[i] < iArrLineSort[j])
            {
                iTemporary = iArrLineSort[j];
                iArrLineSort[j] = iArrLineSort[i];
                iArrLineSort[i] = iTemporary;
            }
        }

    }

for (auto&& elem : iArrLineSort)
  {
    if (elem == iLeftLine)
   {
    Serial.print("l : "); 
    Serial.println(elem); 
    }
    else if (elem == iMiddleLine)
    {
    Serial.print("m : "); 
    Serial.println(elem);
    }
    else if (elem == iRightLine)
    {
    Serial.print("r : "); 
    Serial.println(elem);
    }
  }
}
    //input for the map to kombining char values with integers
    /*
    typedef std::pair<std::string, int> pair;
    std::map<std::string, int> map = {
            {"L", iLeftRoute}, {"M", iMiddleRoute}, {"R", iRightRoute}
    };

    // create an empty vector of pairs

    std::vector<pair> vec;

    // copy key-value pairs from the map to the vector

    std::copy(map.begin(), map.end(), std::back_inserter<std::vector<pair>>(vec));

    // sort the vector by increasing the order of its pair's second value
   // if the second value is equal, order by the pair's first value

    std::sort(vec.begin(), vec.end(), [](const pair& l, const pair& r)
        {
            if (l.second != r.second) {
                return l.second > r.second;
            }

    return l.first > r.first;
        });

    for (auto const& pair : vec) {
        std::cout << '{' << pair.first << "," << pair.second << '}' << std::endl;
    }


}*/