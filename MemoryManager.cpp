#include <iostream>
#include <cmath>
#include <algorithm> 

class Cell {
public:
    char* Engaged;              //Дефолт
    bool Status = true;
    int OneMB = 1024 * 1024;
    int FileSize = 0;
    int FileStart, FileEnd = 0;

    Cell() = default;                   //Данные блока
    Cell(int Size, int start, int end) {
        if (Size > OneMB)
            FileSize = OneMB;
        else
            FileSize = Size;
        Engaged = new char[FileSize];
        Status = false;
        FileStart = start;
        FileEnd = end;
    }
};
class ProgramMemory {
public:
    Cell* Array;
    int Head = 0;
    int Score = 0;

    ProgramMemory() {      //Выделение
        Array = new Cell[10]();
        Head = -1;
    }
    ~ProgramMemory() {     //Освобождаем память
        delete[] Array;
    }

    void Push(int Input) {

        int CellNeed = ceil((double)Input / (1024 * 1024));      //Блоков нужно

        if (Score == 10) {                           //Есть ли место
            std::cout << "Недостаточно памяти" << std::endl << std::endl;
            Score -= CellNeed;
            return;
        }
        if (Score + CellNeed > 10) {           //Есть ли место
            std::cout << "Недостаточно памяти" << std::endl << std::endl;
            Score -= CellNeed;
            return;
        }

        Score += CellNeed;

        int Free = 0;                     //Для того, что бы вставить файл в начало(если понадобится)
        int Max = 0;
        for (int i = 0; i <= 9; i++) {
            if (Array[i].Status) {
                Free += 1;
                Max = std::max(Free, Max);
                if ((((Max + 1 - CellNeed) == 0) and i == 9 and Array[i].Status == true) or (i == 9 and Array[i].Status == false)) {
                    std::cout << "Недостаточно памяти" << std::endl << std::endl;
                    Score -= CellNeed;
                    return;
                }
                if ((Max - CellNeed) == 0) {
                    Head = i - Max;
                    break;
                }
            }
            else {
                Free = 0;
            }
        }

        int FileStart = Head + 1;              //Определили размер файла в блоках
        int FileEnd = Head + CellNeed;
        Head = FileEnd;

        for (int FileList = FileStart; FileList <= FileEnd; FileList++) {        //Занял место в блоке(блоках)
            Array[FileList] = Cell(Input, FileStart, FileEnd);
            Input -= 1024 * 1024;
        }
    }
    void Delete(int BlockNumber) {              //Удаляем файл по блоку(все его блоки)
        for (int FileList = 0; FileList <= 9; FileList++) {
            if (Array[FileList].FileStart <= BlockNumber and Array[FileList].FileEnd >= BlockNumber) {
                Array[FileList].FileSize = 0;
                Array[FileList].Status = true;
                delete Array[FileList].Engaged;
                Score -= 1;
                Array[FileList].FileStart = 0;
                Array[FileList].FileEnd = 0;
            }
        }
        Head = -1;
    }
    void Association() {                        //Утряска
        int H = 9;
        for (int FileList = 0; FileList <= H; FileList++) {
            if (Array[FileList].Status) {
                for (int AssociationFileList = FileList; AssociationFileList < 9; AssociationFileList++) {
                    Array[AssociationFileList] = Array[AssociationFileList + 1];
                    Array[AssociationFileList].FileStart--;
                    Array[AssociationFileList].FileEnd--;
                    Array[AssociationFileList + 1].FileSize = 0;
                    Array[AssociationFileList + 1].Status = true;
                    Array[AssociationFileList + 1].FileStart = 0;
                    Array[AssociationFileList + 1].FileEnd = 0;
                }
                H--;
                FileList--;
            }
        }
        for (int FileList = 0; FileList <= 9; FileList++) {       // Настройка файлов после утряски
            if (Array[FileList].Status) {
                Array[FileList].FileStart = 0;
                Array[FileList].FileEnd = 0;
            }
        }
        std::cout << "Утряска прошла успешно " << std::endl << std::endl;
    }
    void Print() {                             //Вывод
        std::cout << "Вывод" << std::endl;
        for (int FileList = 0; FileList <= 9; FileList++)
            std::cout << "Блок =>" << FileList << "   Занимает_памяти =>" << Array[FileList].FileSize << "   Статус =>" << Array[FileList].Status << "   Начало =>" << Array[FileList].FileStart << "   Конец =>" << Array[FileList].FileEnd << std::endl;
        std::cout << std::endl;
    }
};
int main() {
    setlocale(LC_ALL, "Russian");
    ProgramMemory* Work = new ProgramMemory();

    Work->Push(3 * 1024 * 1024);
    Work->Push(3 * 1024 * 1024);
    Work->Push(3 * 1024 * 1024);
    Work->Print();
    Work->Delete(1);
    Work->Delete(7);
    Work->Print();
    Work->Push(5 * 1024 * 1024);
    Work->Print();
    Work->Association();
    Work->Print();
    Work->Push(4 * 1024 * 1024);
    Work->Print();

    delete Work;
}