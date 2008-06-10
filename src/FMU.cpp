#include "FMU.h"

FMU::FMU(RawOperation *rawOp) : FloatOperation(rawOp)
{
    /*nichts zu tun*/
}

void FMU::run(Configuration *c)
{
    IndirectToDirect(c); // in Param1 steht nun der "echte" Wert.
    c->getAC()->setFloat(
        c->getAC()->getFloat()
        * c->getData(this->Param1->getInt())->getFloat());
}
