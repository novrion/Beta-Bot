#!bin/bash
g++ -O2 -o run src/main.cpp src/bb.cpp src/eval.cpp src/moves.cpp src/search.cpp src/ui.cpp
g++ -O3 -o run_optimized src/optimized.cpp
