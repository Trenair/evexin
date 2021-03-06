/*
 * Copyright (c) 2013 Kevin Smith
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#include <Eve-Xin/Controllers/Character.h>

namespace EveXin {

Character::Character(const std::string& id, const std::string& name, const std::string& accountKey, const std::string& corpKey, const std::string& corpName, const std::string& expires) : id_(id), name_(name), accountKey_(accountKey), corpKey_(corpKey), corpName_(corpName), expires_(expires), isk_(0.0) {

}

Character::~Character() {

}

}


