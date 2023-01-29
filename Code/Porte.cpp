https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com

#include "Porte.h"

namespace TP1
{


    Porte::Porte(){}

    Porte::Porte(Couleur c, Piece* d){}

    Porte::Porte(const Porte& source){
    }

    Porte::~Porte() {}

    const Porte& Porte::operator =(const Porte& source) {
        return *this;
    }

    bool Porte::operator ==(const Porte& source) const {
        return true;
    }

}
