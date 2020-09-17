#include <iostream>

struct person {
    char* name;
    int age;
    struct person* next;
};
typedef struct person Person;

void addPerson(Person* header, char* name, int age) {
    while (header->next != NULL) {
        header = header->next;
    }
    Person* temp = new Person;
    temp->name = name;
    temp->age = age;
    temp->next = NULL;
    header->next = temp;
}

void increaseAge(Person* header) {
    while(header != NULL) {
        header->age += 1;
        header = header->next;
    }
}

int main()
{
    int N;
    Person* header = NULL;
    while(1) {
        std::cin >> N;
        if (N == 0) {
            increaseAge(header);
            while(header != NULL) {
                std::cout << "Name:" << header->name << ", Age:" << header->age << "\n";
                header = header->next;
            }
            break;
        }
        else if (N > 0) {
            int age;
            if (header == NULL) {
                char* name = new char[11];
                std::cin >> name >> age;
                Person* temp = new Person;
                temp->name = name;
                temp->age = age;
                temp->next = NULL;
                header = temp;
                N--;
            }
            for (int i = 0; i < N; i++) {
                char* name = new char[11];
                std::cin >> name >> age;
                addPerson(header, name, age);
            }

        }
    }

    return 0;
}
