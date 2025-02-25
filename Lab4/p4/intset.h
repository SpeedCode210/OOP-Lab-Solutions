#ifndef H_INTSET
#define H_INTSET

class IntegerSet{
public:
    IntegerSet();
    void insertElement(int x);
    void deleteElement(int x);
    IntegerSet unionOfSets(const IntegerSet &b);
    IntegerSet intersectionOfSets(const IntegerSet &b);
    void inputSet();
    void printSet();
    bool operator==(const IntegerSet &b);

private:
    __int128_t content;
};

#endif