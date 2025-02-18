#include <string>
#include <stdexcept>
#ifndef LAB2_CATS_H
#define LAB2_CATS_H

enum FurColor{
    Black,
    Gray,
    BrownFur
};

enum EyeColor{
    Green,
    Blue,
    BrownEyes
};

enum HairLength{
    Short,
    Long
};

std::string furToString(FurColor c);
std::string eyeToString(EyeColor c);
std::string hairToString(HairLength c);

// Simple Cat class
class Cat {
    public:
        FurColor getFurColor();
        EyeColor getEyeColor();
        HairLength getHairLength();
        Cat();

    private:
        void setFurColor();
        void setEyeColor();
        void setHairLength();
        void setFurColor(FurColor c);
        void setEyeColor(EyeColor c);
        void setHairLength(HairLength l);
        FurColor fur;
        EyeColor eye;
        HairLength hair;
        
};

#endif