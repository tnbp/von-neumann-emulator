#ifndef RAWOPERATION_H_
#define RAWOPERATION_H_

#include <QString>

struct RawOperation
{
    unsigned int LineNumber;
    QString Operator;
    QString Param1;
    QString Param2;
    QString Comment;
    bool indirect;
};
#endif /*RAWOPERATION_H_*/
