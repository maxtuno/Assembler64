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

#include <boost/progress.hpp>

#include "binary_search.h"

int main(int argc, char *argv[]) {

    unsigned long long int n = std::stoull(argv[1]);
    long long *seq = new long long[n];

    for (unsigned long long int i = 0; i < n; i++) {
        seq[i] = i * i / 2; // arbitrary monotonic function (sorted)
        printf("%llu %lld\n", i, seq[i]);
    }

    std::cout << "\n *** Binary Search ***" << std::endl;

    boost::progress_timer timer;

    unsigned long long int idx = binary_search(seq, 0, n, std::stoull(argv[2]));

    printf("\n%llu %lld\n\n", idx, seq[idx]);

    return EXIT_SUCCESS;
}