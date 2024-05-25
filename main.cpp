#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <QApplication>
#include "dialog.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    
//########################################################################################################
 //   QCoreApplication a(argc, argv);

    // Инициализация указателя на std::vector<long long>
    std::vector<long long>* list_of_synapses = new std::vector<long long>;

    // Добавление элементов в вектор через указатель
    list_of_synapses->push_back(100LL);
    list_of_synapses->push_back(200LL);
    list_of_synapses->push_back(300LL);

    // Доступ к элементам вектора через указатель
    for(size_t i = 0; i < list_of_synapses->size(); ++i) {
        std::cout << "Element " << i << ": " << list_of_synapses->at(i) << std::endl;
    }

    // Освобождение памяти, выделенной под вектор
    delete list_of_synapses;
//########################################################################################################
    return a.exec();    
}
