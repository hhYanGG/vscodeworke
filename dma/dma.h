#ifndef DMA_H_
#define DMA_H_
//base class using dma
#include <iostream>
class baseDMA
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null",int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator = (const baseDMA & rs);
    friend std::ostream & operator <<(std::ostream &os,const baseDMA &rs);
    //derived class without DMA
    //no destructor needed
    //uses imlicit copy construtor
    //uses implicit assigment operator
};
class lacksDMA :public baseDMA
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
            int r = 0);
    friend std::ostream & operator << (std::ostream &os,const lacksDMA &rs);
};
//drived class with DMA
class hasDMA : public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
            int r = 0);
    hasDMA(const char *s,const baseDMA &rs);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA &hs);
    friend std::ostream &operator <<(std::ostream & os, const hasDMA &rs);
};

#endif