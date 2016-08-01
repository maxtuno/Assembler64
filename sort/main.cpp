///////////////////////////////////////////////////////////////////////////////
//        copyright (c) 2012-2017 Oscar Riveros. all rights reserved.        //
//                           oscar.riveros@peqnp.com                         //
//                                                                           //
//    without any restriction, Oscar Riveros reserved rights, patents and    //
//  commercialization of this knowledge or derived directly from this work.  //
///////////////////////////////////////////////////////////////////////////////

//
// Created by Oscar Riveros on 7/31/16.
//

#include <iostream>
#include <random>
#include <iomanip>

#include <boost/progress.hpp>

#include "sort.h"

int main(int argc, char *argv[]) {

    std::random_device random_device;
    std::uniform_int_distribution<long long> distribution(0, std::stoull(argv[1]));

    unsigned long long n = std::stoull(argv[2]);

    long long *a = new long long[n];
    long long *b = new long long[n];

    for (unsigned long long i = 0; i < n; i++) {
        a[i] = distribution(random_device);
        b[i] = 0;
    }

    std::cout << "[";
    for (unsigned long long i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "]\n" << std::endl;

    std::cout << "*** Sort ***\n" << std::endl;

    boost::progress_timer timer;

    merge_sort(a, b, n);

    std::cout << "[";
    for (unsigned long long i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "]\n" << std::endl;

    return EXIT_SUCCESS;
}