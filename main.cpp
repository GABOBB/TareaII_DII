#include <iostream>
#include "LinkedList.h"
//#include "SortingAlg.h"
#include <vector>
#include "BinarySearchTree.h"
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
    X = ALG->BubbleSort(X);
    std::cout << "\narray bubble sorted: " << std::endl;
    ALG->print(X);

    //SelectionSort
    std::vector<int> Y =  { 1 , 4 , 2 , 5 , 666 , 3};
    std::cout << "\narray unsorted: " << std::endl;
    ALG->print(Y);
    Y = ALG->SelectionSort(Y);
    std::cout << "\narray selection sorted: " << std::endl;
    ALG->print(Y);

    //MergeSort
    std::vector<int> Z =  {14 , 12 , 53 , 74 , 775 , 666};
    std::cout << "\narray unsorted: " << std::endl;
    ALG->print(Z);
    Z = ALG->MergeSort(Z);
    std::cout << "\narray merge sorted: " << std::endl;
    ALG->print(Z);



    return 0;

}
