using namespace std;

class MyClock {
    public:
        void Tick(int seconds = 1);
        bool SetTime(int hour, int minute, int second);

        int hour() const;
        int minute() const;
        int second() const;

    private:
        int _hour = 0, _min = 0, _sec = 0;
};

ostream& operator<<(ostream& os, const MyClock& c);
istream& operator>>(istream& is, MyClock& c);
