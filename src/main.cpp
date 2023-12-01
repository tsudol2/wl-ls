//
// CS474 Project 4 - Weird-Language Language System
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "linkedlist/LinkedList.h"
#include "weirdlanguage/WLLanguageSystem.h"

int main(int argc, char * argv[]) {
    std::cout << "Current path: " << argv[0] << std::endl;

    std::cout << "Weird Language Language System" << std::endl;
    std::cout << "Enter file path to .wl input file: (data/input/...)" << std::endl;
    std::cout << " >> ";

    std::string path;
    std::getline (std::cin, path);

    // for ease of use, remove before submitting
    // NOTE: This is needed when running the project from the build directory due to the project structure.
//    path = "../../../data/input.wl";

    WLLanguageSystem ls;

    std::ifstream inFile(path);
    if (inFile.is_open()) {
        std::cout << "File " << path << " opened, reading file..." << std::endl;

        std::string line;
        std::vector<std::string> instructions;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
            instructions.push_back(line);
        }

        ls = WLLanguageSystem(instructions);

    } else {
        std::cout << "Error reading from file: " << path << std::endl;
    }
    inFile.close();
    std::cout << "Instructions from " << path << " loaded successfully." << std::endl;
    char input = ' ';
    while (input != 'q') {
        std::cout << "Enter a command: o, a or q to exit\\n >> " << std::endl;
        std::cin >> input;

        if (input == 'o') {
            ls.commandO();
        } else if (input == 'a') {
            ls.commandA();
        } else if (input == 'q') {
            break;
        } else {
            std::cout << "Invalid command, try again" << std::endl;
        }
    }
    return 0;
}
