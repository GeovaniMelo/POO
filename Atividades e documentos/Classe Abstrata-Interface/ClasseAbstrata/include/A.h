#ifndef A_H
#define A_H
#include<iostream>

using namespace std;

/** Classe abstrata */
class A
{
    public:
        A();
        void m1();
        virtual void m2() = 0; /** M�todo virtual puro, M�todo Abstrato. */

       /** virtual void m3(); -> M�todo virtual n�o puro. */
       /** Interface -> uma Classe que cont�m apenas m�todos abstratos. */

    protected:
    private:
};

#endif // A_H
