#include <iostream>
#include <glog/logging.h>
#include <opencv2/opencv.hpp>
#include "flatbuffers/flatbuffers.h"

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);
    std::cout << CV_VERSION << std::endl;
    std::cout << __cplusplus << std::endl;
    LOG(INFO) << "Hello from glog and OpenCV version" << CV_VERSION;
    return 0;
}
