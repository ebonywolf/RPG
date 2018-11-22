#ifndef OBJECT_H
#define OBJECT_H
#include <unordered_map>
#include "Buff.h"
#include "Position.h"
#include "Tagged.h"
#include <ostream>
namespace wag{

using Attributes = std::unordered_map<std::string,float>;
using Buffs = std::unordered_map<std::string, std::vector<Buffptr>>;

struct Object: public Tagged{

    Attributes att;
    Buffs buffs;
    Position position;
    friend
    ostream& operator<<
};
}

#endif