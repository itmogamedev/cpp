

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int n;
std::string BPATH = "workers.txt";
std::string TECH_PATH = "tech.txt";
std::ofstream write;


class Worker {
public:

    std::string id;
    std::string lastname;
    std::string phoneNumber;
    std::string salary;
    std::string position;

    Worker(std::string generator) {
        std::vector<std::string> s(0);
        std::string toPrint = "";
        for (char i : generator) {
            if (i != ',') {
                toPrint += i;
            }
            else {
                s.push_back(toPrint);
                toPrint = "";
            }
        }
        s.push_back(toPrint);

        id = s[0];
        lastname = s[1];
        phoneNumber = s[2];
        salary = s[3];
        position = s[4];
    }

    Worker(std::string idd, std::string ln, std::string num, std::string sal, std::string pos) {
        id = idd;
        lastname = ln;
        phoneNumber = num;
        salary = sal;
        position = pos;
    }

    void Dump() {
        std::string s;
        s += (std::string)id + "," + lastname + "," + phoneNumber + "," + salary + "," + position;

        write.open(BPATH, std::ios::app);
        write << s << std::endl;
        write.close();

    }

    void print() {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Lastname: " << lastname << std::endl;
        std::cout << "Phone number: " << phoneNumber << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Position: " << position << std::endl;
        std::cout << std::endl;
    }

};



int main()
{
    std::cout << "Welcome to Workers' Database. Choose what you want to do" << std::endl;
    std::string input;
    while (input != "0")
    {
        std::cout << "Type 1 to add a worker" << std::endl;
        std::cout << "Type 2 to output info about all the workers" << std::endl;
        std::cout << "Type 3 to search by chosen criteria" << std::endl;
        std::cout << "Type 4 to remove a worker" << std::endl;
        std::cout << "Type 0 to exit the Database" << std::endl;
        std::cin >> input;

        if (input == "1") {
            std::vector<std::string> s(1);

            std::ifstream read(TECH_PATH);
            std::getline(read, s[0]);
            read.close();

            n = std::stoi(s[0]) + 1;

            write.open(TECH_PATH);
            write << n;
            write.close();

            std::cout << "Enter worker's lastname" << std::endl;
            std::cin >> input;
            s.push_back(input);
            std::cout << "Enter worker's phone number" << std::endl;
            std::cin >> input;
            s.push_back(input);
            std::cout << "Enter worker's salary" << std::endl;
            std::cin >> input;
            s.push_back(input);
            std::cout << "Enter worker's position" << std::endl;
            std::cin >> input;
            s.push_back(input);

            Worker w(s[0], s[1], s[2], s[3], s[4]);
            w.Dump();

        }
        else if (input == "2") {
            std::ifstream read(BPATH);
            std::string output;
            std::getline(read, output);
            int c = 0;
            while (output != "")
            {
                std::cout << output << std::endl;
                Worker w(output);
                w.print();
                c++;
                std::getline(read, output);
            }
            if (c > 0) {
                std::cout << "No workers in database" << std::endl;
            }
            read.close();

        }
        else if (input == "3") {
            std::cout << "Type 1 to search by ID" << std::endl;
            std::cout << "Type 2 to search by lastname" << std::endl;
            std::cout << "Type 3 to search by phone number" << std::endl;
            std::cout << "Type 4 to search by salary amount" << std::endl;
            std::cout << "Type 5 to search by position" << std::endl;
            int criteria;
            std::cin >> criteria;
            std::cout << "Input search key" << std::endl;
            std::string key;
            std::cin >> key;

            std::ifstream read(BPATH);
            std::string output;
            std::getline(read, output);
            while (output != "")
            {
                Worker w(output);
                switch (criteria) {
                case 1:
                    if (w.id == key) w.print();
                    break;
                case 2:
                    if (w.lastname == key) w.print();
                    break;
                case 3:
                    if (w.phoneNumber == key) w.print();
                    break;
                case 4:
                    if (w.salary == key) w.print();
                    break;
                case 5:
                    if (w.position == key) w.print();
                    break;
                }
                std::getline(read, output);
            }
        }
        else if (input == "4") {
            std::vector<Worker> base;
            std::cout << "Input ID to delete" << std::endl;
            std::string toDelete;
            std::cin >> toDelete;


            std::ifstream read(BPATH);
            std::string output;
            std::getline(read, output);
            bool got = false;
            while (output != "")
            {
                Worker w(output);
                if (w.id != toDelete) {
                    base.push_back(w);
                    got = true;
                }
                std::getline(read, output);
            }
            read.close();


            write.open(BPATH);
            write << "";
            write.close();

            for (Worker w : base) {
                w.Dump();
            }
            if (got)
                std::cout << "Worker " << toDelete << " successfully removed" << std::endl;
            else std::cout << "Worker " << toDelete << " doesn't exist" << std::endl;

        }
        else if (input == "0") { break; }
        else { continue; }

    }

}


