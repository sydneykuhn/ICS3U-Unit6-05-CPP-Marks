// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program finds the average of a list of marks

#include <iostream>
#include <list>


int averageOfMarks(std::list<int>passedInListOfMarks) {
    // This function finds the average of a list of marks

    int total = 0;
    int length = passedInListOfMarks.size();
    int average = 0;
    std::list<int>::iterator listItemItr;

    for (listItemItr = passedInListOfMarks.begin();
        listItemItr != passedInListOfMarks.end(); ++listItemItr) {
        total += (*listItemItr);
    }

    average = total / length;

    return average;
}


main() {
    // this function uses a list
    std::list <int> listOfMarks;
    std::string tempMarkAsString;
    int tempMark;
    int average;

    // input
    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;

    while (true) {
        try {
            std::cout << "Enter a mark: ";
            std::cin >> tempMarkAsString;
            tempMark = std::stoi(tempMarkAsString);
            if (tempMark <= 100 && tempMark >= 0) {
                listOfMarks.push_back(tempMark);
            } else if (tempMark == -1) {
                average = averageOfMarks(listOfMarks);
                std::cout << "\nThe average of the marks is : " << average
                    << std::endl;
                break;
            } else {
                std::cout << "\nInvalid input entered, please try again."
                    << average << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
                std::cout << "\nInvalid number entered, please try again."
                    << std::endl;
                break;
        }
    } std::cout << "\nDone." << std::endl;
}
