#include <iostream>
#include <chrono>
#include <glog/logging.h>
#include "flatbuffers/flatbuffers.h"
#include "benchmark.h"


struct Timer {
    
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    std::chrono::duration<float> duration;

    Timer() {
        start = std::chrono::high_resolution_clock::now();
    }


    ~Timer() {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
    
        float ms = duration.count() * 1000.0f;

        std::cout << "PROGRAM EXECUTION:: " << ms << "ms" << std::endl;
    }

};

int main(int argc, char* argv[]) {
   
    {
        Timer timer;
        
        for(int i=0; i<500; i++) {
            benchmark::stateSpaceOp(10);
        } 
    
    }
    
    return 0;
}
