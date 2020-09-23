#include "fighter.h"

int Fighter::getHp() {
    return mHp;
}

int Fighter::getPower() {
    return mPower;
}

bool Fighter::getStats() {
    return mStatus;
}

void Fighter::setHp(int _hp) {
    mHp = _hp;
}

void Fighter::setPower(int _power) {
    mPower = _power;
}

void Fighter::emPower(int _power) {
    mPower += _power;
    if (mPower < 0) mPower = 0;
}

void Fighter::setStatus(bool _status) {
    mStatus = _status;
}

void Fighter::hit(Fighter* _enemy) {
    _enemy->setHp(_enemy->getHp() - mPower);
}

void Fighter::attack(Fighter* _enemy) {
    _enemy->setHp(_enemy->getHp() - mPower);
    mPower = 0;
}
