//
// Created by gbb on 15/09/24.
//

#include "BinarySearchTree.h"
#include <iostream>
void BinarySearchTree::insert(int value) {
    BinaryNode* NewNode = new BinaryNode(value);
     // Crear el nodo con el valor

    if (root == nullptr) {
        root = NewNode;  // Si el árbol está vacío, este es el primer nodo
    } else {
        BinaryNode *act = root;
        BinaryNode *parent = nullptr;

        // Buscar la posición correcta para insertar el nuevo nodo
        while (act != nullptr) {
            parent = act;
            if (value < act->value) {
                act = act->left;
            } else {
                act = act->right;
            }
        }

        // Insertar el nuevo nodo fuera del bucle
        if (value < parent->value) {
            parent->left = NewNode;
        } else {
            parent->right = NewNode;
        }

        size++;  // Aumentar el tamaño del árbol
    }
}
void BinarySearchTree::Printaux(BinaryNode *node) const{
    if(node!=nullptr) {
        Printaux(node->left);
        std::cout <<node->value << " ~ ";
        Printaux(node->right);
    }
}
void BinarySearchTree::Print() const {
    Printaux(root);
}



// Metodo para encontrar el valor mínimo en el subárbol derecho
BinaryNode* BinarySearchTree::findMin(BinaryNode* node) const {
    while(node->left != nullptr) {
        node = node->left;
    }
    return node;
}

// Metodo auxiliar para eliminar un nodo
BinaryNode* BinarySearchTree::deleteNode(BinaryNode* node, int value) {
    if (node == nullptr) {
        std::cout << "\nValor no encontrado" << std::endl;
        return node;
    }

    // Buscar el nodo a eliminar
    if (value < node->value) {
        node->left = deleteNode(node->left, value);
    } else if (value > node->value) {
        node->right = deleteNode(node->right, value);
    } else {
        // Caso 1: Nodo sin hijos
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            return nullptr;
        }
        // Caso 2: Nodo con un solo hijo
        else if (node->left == nullptr) {
            BinaryNode* temp = node->right;
            delete node;
            return temp;
        }
        else if (node->right == nullptr) {
            BinaryNode* temp = node->left;
            delete node;
            return temp;
        }
        // Caso 3: Nodo con dos hijos
        else {
            BinaryNode* temp = findMin(node->right);  // Sucesor in-order
            node->value = temp->value;  // Reemplazar con el sucesor
            node->right = deleteNode(node->right, temp->value);  // Eliminar sucesor
        }
    }
    return node;
}

    // Metodo para eliminar un valor
void BinarySearchTree::Delete(int value) {
    root = deleteNode(root, value);  // Iniciar la eliminación desde la raíz
}

