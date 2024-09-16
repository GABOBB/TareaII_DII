//
// Created by gbb on 15/09/24.
//

#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H
#include <iostream>
#include <vector>


class SortingAlg {
public:
    SortingAlg()= default;
    std::vector<int> BubbleSort(std::vector<int>& input);
    std::vector<int> SelectionSort(std::vector<int>& input);
    std::vector<int> MergeSort(std::vector<int>& input);

    void print(std::vector<int>& nums);
};




#endif //SORTINGALGORITHMS_H
