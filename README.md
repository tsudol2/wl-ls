# WeirdLanguage Language System in C++
## CS474 Project 4 - by Tyler Sudol

Note: The executable directory changes depending on how the project is run, and input file paths
need to be adjusted accordingly.  
(should be src in build directory if running in clion, bin directory if running command line scripts)
  
This project was built using CLion, and can be opened and run from CLion, or one of the following:

Command line scripts:

    ./configure.sh
    ./build.sh
    ./run.sh

Manually run commands from project root directory:

    cmake -S . -B build/
    cd build
    make && make install
    cd ..
    ./bin/wl-ls
    ./bin/wl-gtest