class Fighter {
    private:
        int mHp, mPower;
        bool mStatus;
    public:
        Fighter() {
            mHp = 20;
            mPower = 0;
            mStatus = true;
        }
        Fighter(int _hp, int _power) {
            mHp = _hp;
            mPower = _power;
            mStatus = true;
        }
        int getHp();
        int getPower();
        bool getStats();
        void setHp(int _hp);
        void setPower(int _power);
        void emPower(int _power);
        void setStatus(bool _status);
        void hit(Fighter* _enemy);
        void attack(Fighter* _ememy);
};
