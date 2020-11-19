using namespace std;

class MyCalendar {
    public:
        MyCalendar(): _year(0), _month(1), _day(1) {}
        MyCalendar(int year, int month, int day): _year(year), _month(month), _day(day) {}

        void NextDay(int n = 1);
        bool SetDate(int year, int month, int day);

        int year() const;
        int month() const;
        int day() const;

    private:
        static int GetDaysInYear(int year);
        static int ComputeDaysFromYearStart(int year, int month, int day);

        int _year, _month, _day;
};

ostream& operator<<(ostream& os, const MyCalendar& c);
istream& operator>>(istream& is, MyCalendar& c);
