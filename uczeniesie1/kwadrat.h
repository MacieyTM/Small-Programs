//
// Created by mghej on 24.11.2021.
//

#ifndef UCZENIESIE1_KWADRAT_H
#define UCZENIESIE1_KWADRAT_H


class kwadrat
{
    int x,y;
public:
    int liczobwod();
    int liczpole();
    void podaj();
    kwadrat(int boka, int bokb);
    ~kwadrat();
    friend void sedzia();
};

class prostokat :public kwadrat
{
public:
    int liczpolepr;
};

#endif //UCZENIESIE1_KWADRAT_H
