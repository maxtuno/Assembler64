///////////////////////////////////////////////////////////////////////////////
//        copyright (c) 2012-2017 Oscar Riveros. all rights reserved.        //
//                           oscar.riveros@peqnp.com                         //
//                                                                           //
//    without any restriction, Oscar Riveros reserved rights, patents and    //
//  commercialization of this knowledge or derived directly from this work.  //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <random>

#include <boost/progress.hpp>

#include "linear_search.h"


int main(int argc, char *argv[]) {

    std::random_device random_device;
    std::uniform_int_distribution<long long> distribution(std::numeric_limits<long long>::min(),
                                                          std::numeric_limits<long long>::max());

    unsigned long long int n = std::stoull(argv[1]);
    long long *seq = new long long[n];

    for (unsigned long long int i = 0; i < n; i++) {
        seq[i] = distribution(random_device);
        printf("%llu %lld\n", i, seq[i]);
    }

    boost::progress_timer timer;

    unsigned long long int idx = linear_search(seq, n, seq[std::stoull(argv[2])]);

    printf("\n%llu %lld\n\n", idx, seq[idx]);

    return EXIT_SUCCESS;
}