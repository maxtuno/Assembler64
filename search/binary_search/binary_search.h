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

#ifndef ASSEMBLER_BINARY_SEARCH_H
#define ASSEMBLER_BINARY_SEARCH_H

//! A binary search througth the array return the index of element or 0 if it is the first element or not found.
/*!
  \param seq an long long sorted array.
  \param i inf of seacrh.
  \param j sup of seacrh.
  \param t the target.
  \return index or 0.
*/
extern "C" unsigned long long int
binary_search(long long *seq, unsigned long long i, unsigned long long j, long long t);

#endif //ASSEMBLER_BINARY_SEARCH_H
