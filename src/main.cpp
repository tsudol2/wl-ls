//
// CS474 Project 4 - Weird-Language Language System
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist/LinkedList.h"
#include "weirdlanguage/WLLanguageSystem.h"

int main(int argc, char * argv[]) {
//    std::cout << argv[0];
//    std::cin.get();

    std::cout << "Weird Language Language System" << std::endl;
    std::cout << "Enter file path to .wl input file: (data/input/...)" << std::endl;
    std::cout << " >> ";

    std::string path;
    std::getline (std::cin, path);

    // NOTE: This is needed when running the project from the build directory due to the project structure.
    // find a fix if possible
    path = "../../../data/input.wl";

    std::ifstream inFile(path);
    if (inFile.is_open()) {
        std::cout << "File " << path << " opened, reading file..." << std::endl;

        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "Instruction: " << line << std::endl;
        }
    } else {
        std::cout << "Error reading from file: " << path << std::endl;
    }
    inFile.close();
    return 0;
}
