#include <iostream>
#include <vector>
#include <chrono>
#include "BinarySearchTree.h"
#include "LinkedList.h"
#include "SortingAlg.h"


int main() {

    BinarySearchTree* tree = new BinarySearchTree();

    //Insertar valores en el árbol

    tree->insert(50);
    tree->insert(30);
    tree->insert(20);
    tree->insert(40);
    tree->insert(70);
    tree->insert(60);
    tree->insert(80);
    tree->Print();
    // Imprimir el árbol en orden std::cout << "Árbol en orden después de la inserción: ";

    // Eliminar nodos del árbol
    std::cout << "\nEliminando el nodo 20\n";
    tree->Delete(20);
    tree->Print();

    std::cout << "\nEliminando el nodo 30\n";
    tree->Delete(30);
    tree->Print();

    std::cout << "\nEliminando el nodo 50\n";
    tree->Delete(50);
    tree->Print();

    // Intentar eliminar un valor que no está en el árbol
    tree->Delete(100);



    //esta parte genera un lista ordenada
    LinkedList* list2 = new LinkedList();
    list2->addSorted(5);
    list2->addSorted(2);
    list2->addSorted(55);
    list2->addSorted(49);
    //list2->addSorted(49);
    list2->addSorted(43);
    std::cout <<"lista 2"<< std::endl;
    list2->Print();


    //esta parte genera arrays y los ordena
    SortingAlg *ALG = new SortingAlg();


    //BubbleSort
    std::vector<int> X =  { 1 , 3 , 5 , 2 , 666 , 4};
    std::cout << "array unsorted: " << std::endl;
    ALG->print(X);
    auto start = std::chrono::high_resolution_clock::now();
    X = ALG->BubbleSort(X);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "\narray bubble sorted duration: "<<duration.count() << std::endl;
    ALG->print(X);

    //SelectionSort
    std::vector<int> Y =  { 1 , 4 , 2 , 5 , 666 , 3};
    std::cout << "\narray unsorted: " << std::endl;
    ALG->print(Y);
    auto start1 = std::chrono::high_resolution_clock::now();
    Y = ALG->SelectionSort(Y);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration1 = end1 - start1;
    std::cout << "\narray selection sorted duration: "<<duration1.count() << std::endl;
    ALG->print(Y);

    //MergeSort
    std::vector<int> Z =  {14 , 12 , 53 , 74 , 775 , 666};
    std::cout << "\narray unsorted: " << std::endl;
    ALG->print(Z);
    auto start2 = std::chrono::high_resolution_clock::now();
    Z = ALG->MergeSort(Z);
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "\narray merge sorted duration: "<<duration2.count() << std::endl;
    ALG->print(Z);



    return 0;

}
