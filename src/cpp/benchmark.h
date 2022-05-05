#ifndef BENCHMARK_H_
#define BENCHMARK_H_

#include "eigen3/Eigen/Core"

namespace benchmark {

using namespace Eigen;

void stateSpaceOp(int size) {
    MatrixXd m1 = MatrixXd::Random(size, size);
    VectorXd v1 = VectorXd::Random(size);

    VectorXd v2 = VectorXd::Random(size);

    VectorXd result = m1.transpose() * v1;
    result = v1 + v2;
}

}

#endif
