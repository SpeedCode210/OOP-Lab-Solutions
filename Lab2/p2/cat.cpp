#include "cat.h"

Cat::Cat(){
    setEyeColor();
    setHairLength();
    setFurColor();
}

std::string furToString(FurColor c){
    switch (c){
        case Black:
            return "black";
        case Gray:
            return "gray";
        case BrownFur:
            return "brown";
    }
    throw std::invalid_argument("Invalid color");
}

std::string eyeToString(EyeColor c){
    switch (c){
        case Green:
            return "green";
        case Blue:
            return "blue";
        case BrownEyes:
            return "brown";
    }
    throw std::invalid_argument("Invalid color");
}

std::string hairToString(HairLength c){
    switch (c){
        case Green:
            return "short";
        case Blue:
            return "long";
    }
    throw std::invalid_argument("Invalid length");
}

void Cat::setFurColor() {
    int x = rand() % 3;
    setFurColor((FurColor)x);
}

void Cat::setEyeColor() {
    int x = rand() % 3;
    setEyeColor((EyeColor)x);
}

void Cat::setHairLength() {
    int x = rand() % 2;
    setHairLength((HairLength)x);
}


FurColor Cat::getFurColor()
{
    return fur;
}

EyeColor Cat::getEyeColor()
{
    return eye;
}

HairLength Cat::getHairLength()
{
    return hair;
}

void Cat::setFurColor(FurColor c)
{
    fur = c;
}

void Cat::setEyeColor(EyeColor c)
{
    eye = c;
}

void Cat::setHairLength(HairLength l)
{
    hair = l;
}
