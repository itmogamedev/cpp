#include <iostream>
#include <vector>
#include <fstream>
#include "conio.h"
#include <string>
#include <math.h>

class Worker
{
public:
    Worker(long long int id, std::string surname, std::string phoneNum, std::string salary, std::string profession)
    {
        this->id = id;
        this->surname = surname;
        this->phoneNum = phoneNum;
        this->salary = salary;
        this->profession = profession;
    }
    Worker()
    {
        id = -1;
        surname = " ";
        phoneNum = "-1";
        salary = "-1";
        profession = "Loh";
    }

    long long int id;
    std::string surname;
    std::string phoneNum;
    std::string salary;
    std::string profession;

    void ShowStats() 
    {
        std::cout << id << " " << surname << " " << phoneNum << " " << salary << " " << profession << std::endl;
    }
    void SetStats(long long int id, std::string surname, std::string phoneNum, std::string salary, std::string profession)
    {
        this->id = id;
        this->surname = surname;
        this->phoneNum = phoneNum;
        this->salary = salary;
        this->profession = profession;
    }
};

std::string nameOfFile = "data.txt";
std::string nameOfMAXIDFile = "maxID.txt";
int maxId = 0;


void SetMaxID()
{
    std::string line;
    std::ifstream in(nameOfMAXIDFile);
    
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            maxId = std::max(std::stoi(line), maxId);
        }
    }

    in.close();
}
void WriteMaxID()
{
    std::ofstream out;
    out.open(nameOfMAXIDFile);

    if (out.is_open())
    {
        out <<maxId;
    }

    out.close();
}
std::vector<std::string> SplitLine(std::string line)
{
    std::vector<std::string> words;
    std::string newWord = "";

    for (auto x : line) 
    {
        if (x != ' ')
        {
            newWord += x;
        }
        else
        {
            words.push_back(newWord);
            newWord = "";
        }
    }
    words.push_back(newWord);
    return words;
}

void CreatNewUser()
{
    std::ofstream out;
    out.open(nameOfFile, std::ofstream::app);
    Worker worker;
    if (out.is_open()) 
    {
        maxId++;
        worker.id = maxId;
        std::cout << "Type surname" << std::endl;
        std::cin >> worker.surname;
        std::cout << "Type phone number" << std::endl;
        std::cin >> worker.phoneNum;
        std::cout << "Type salary" << std::endl;
        std::cin >> worker.salary;
        std::cout << "Type profession" << std::endl;
        std::cin >> worker.profession;
        if (!(worker.surname == "" || worker.phoneNum == "" || worker.salary == "" || worker.profession == "")) {
            out << std::endl << worker.id << " " << worker.surname << " " << worker.phoneNum << " " << worker.salary << " " << worker.profession;
        } 
        else {
            std::cout << "Wrong type in some var" << std::endl;
        }
    }
    
    out.close();
    WriteMaxID();
}

void ShowData()
{
    std::string line;
    std::ifstream in(nameOfFile);

    if (in.is_open())
    {
        while (std::getline(in, line)) 
        {
            std::cout << line << std::endl;
        }
    }
    in.close();
}

std::vector<Worker> SearchByField(int numOfField, std::string fieldVal)
{
    std::vector<Worker> workers;
    std::string line;
    std::ifstream in(nameOfFile);

    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            if (line == "" || line == "\n") {
                continue;
            }
            std::string word;
            int fieldNum = 0;
            std::vector<std::string> splitLine = SplitLine(line);
            if (splitLine[numOfField - 1] == fieldVal) 
            {
                Worker worker(std::stoi(splitLine[0]), splitLine[1], splitLine[2], splitLine[3], splitLine[4]);
                workers.push_back(worker);
            }
            
        }
    }
    in.close();
    return workers;
}

void DeleteById(std::string id) 
{
    std::string finString = "";

    std::string line;
    std::ifstream in(nameOfFile);

    if (in.is_open()) 
    {
        while (std::getline(in, line))
        {
            std::vector<std::string> splitLine = SplitLine(line);
            std::cout << splitLine[0] << " " << line << " " << (splitLine[0] == id) << std::endl;
            finString += (splitLine[0] == id) ? "" : line + '\n';
        }
    }
    std::cout << finString << std::endl;
   
    
    in.close();

    std::ofstream out;
    out.open(nameOfFile, std::ofstream::ate);

    if (out.is_open())
    {
        out << finString;
    }

    out.close();
}

void ClearDB()
{
    std::ofstream out;
    out.open(nameOfFile, std::ofstream::ate);

    if (out.is_open())
    {
        out << "";
    }
}

int main()
{
    SetMaxID();

    bool isWorking = true;
    
    std::string fieldVal;
    std::string findID;
    std::vector<Worker> workers;
    while (isWorking)
    {
        int userOption;
        std::cout << std::endl << "What do you want?" << std::endl << "1. Add new user\n2. Show all base \n3. Find by field\n4. Delete user by id\n5. Clear DB\n6. Stop program\n";
        std::cin >> userOption;
        switch (userOption)
        {
            case 1:
                CreatNewUser();
                break;
            case 2:
                ShowData();
                break;
            case 3:
                int numOfField;
                std::cout << "Choose num of field" << std::endl << "1. ID\n2. Surname\n3. Phone\n4. Salary\n5. Profession\n";
                std::cin >> numOfField;
                std::cout << "Type your value of field\n";
                std::cin >> fieldVal;

                workers = SearchByField(numOfField, fieldVal);
                for (Worker worker : workers) 
                {
                    worker.ShowStats();
                }
                break;
            case 4:
                std::cout << "Type your ID\n";
                std::cin >> findID;

                DeleteById(findID);
                break;
            case 5:
                ClearDB();
                break;
            case 6:
                isWorking = false;
                break;
            default:
                std::cout << "Wrong type or num" << std::endl;
                isWorking = false;
                break;
        }
    }
}