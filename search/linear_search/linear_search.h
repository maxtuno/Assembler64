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

#ifndef ASSEMBLER_LINEAR_SEARCH_H
#define ASSEMBLER_LINEAR_SEARCH_H

//! A exaustive reverse search througth the array return the index of element or 0 (if it is the first element) or not found.
/*!
  \param seq an long long array.
  \param n size of array.
  \param t the target.
  \return index or 0.
*/
extern "C" unsigned long long int linear_search(long long *seq, unsigned long long n, long long t);

#endif //ASSEMBLER_LINEAR_SEARCH_H
