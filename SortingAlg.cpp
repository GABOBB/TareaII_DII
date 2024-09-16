//
// Created by gbb on 15/09/24.
//

#include "SortingAlg.h"





std::vector<int> SortingAlg::BubbleSort(std::vector<int>& input) {
    std::vector<int> output = input;  // Hacer una copia del input

    int n = output.size();
    bool swapped;

//     Algoritmo BubbleSort
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (output[j] > output[j + 1]) {
                // Intercambiar elementos si están en el orden incorrecto
                std::swap(output[j], output[j + 1]);
                swapped = true;
            }
        }
       //  Si no hubo intercambios, el array ya está ordenado
        if (!swapped) {
            break;
        }
    }
    return output;  // Retornar el array ordenado
}
std::vector<int> SortingAlg::SelectionSort(std::vector<int> &input) {
    std::vector<int> output =input;
    for (int i = 0; i < output.size() - 1; i++) {
        int min = i;
        for(int j = i + 1; j < output.size(); j++) {
            if(output[j]<output[min]) {
                min = j;
            }
        }
        std::swap(output[i], output[min]);
    }
    return output;
}

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    int i = 0, j = 0;

    // Mezclar los elementos de left y right en el vector result
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    // Copiar los elementos restantes de left (si los hay)
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    // Copiar los elementos restantes de right (si los hay)
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}
std::vector<int> SortingAlg::MergeSort(std::vector<int> &input)  {
    std::vector<int> output = input;
    // Caso base: Si el array tiene un solo elemento o está vacío, ya está ordenado
    if (output.size() <= 1) {
        return output;
    }

    // Encontrar el punto medio del array
    int mid = output.size() / 2;

    // Dividir el array en dos mitades
    std::vector<int> left(output.begin(), output.begin() + mid);
    std::vector<int> right(output.begin() + mid, output.end());

    // Ordenar las dos mitades recursivamente
    left = MergeSort(left);
    right = MergeSort(right);

    // Fusionar las dos mitades ordenadas
    return merge(left, right);
}


void SortingAlg::print(std::vector<int>& input) {
    for (int i = 0; i < input.size(); i++) {
        printf("%d ", input[i]);
    }
}