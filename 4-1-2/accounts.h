class Account {
    public:
        int id, balance;
        void setInfo(int _id, int _balance);
};

class AccountManager {
    public:
        Account accounts[10];
        int accounts_num;

        AccountManager() 
        {
            accounts_num = 0;
        }
        void NewAccount();
        void deposit(int id, int amount);
        void withdraw(int id, int amount);
        void transfer(int from, int to, int amount);
        void checkBalance(int id);
};
