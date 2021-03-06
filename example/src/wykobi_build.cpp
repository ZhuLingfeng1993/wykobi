/*
(***********************************************************************)
(*                                                                     *)
(* Wykobi Computational Geometry Library                               *)
(* Release Version 0.0.5                                               *)
(* http://www.wykobi.com                                               *)
(* Copyright (c) 2005-2017 Arash Partow, All Rights Reserved.          *)
(*                                                                     *)
(* The Wykobi computational geometry library and its components are    *)
(* supplied under the terms of the General Wykobi License agreement.   *)
(* The contents of the Wykobi computational geometry library and its   *)
(* components may not be copied or disclosed except in accordance with *)
(* the terms of that agreement.                                        *)
(*                                                                     *)
(* URL: https://opensource.org/licenses/MIT                            *)
(*                                                                     *)
(***********************************************************************)
*/


// This cpp can be included and the main can run correctly.
// #include "wykobi/wykobi_instantiate.cpp"
// The main can also run correctly when only include wykobi.hpp.
#include "wykobi/wykobi.hpp"
#include <iostream>
using namespace std;
using namespace wykobi;

int main(void)
{
  wykobi::segment<double,2> segment1 = wykobi::make_segment(0.0, 0.0, 2.0, 0.0);
  wykobi::segment<double,2> segment2 = wykobi::make_segment(1.0, 1.0, 1.0, -2.0);
  bool isIntersects = simple_intersect(segment1, segment2);
  // bool isIntersects = intersect(segment1, segment2);
  if (isIntersects) {
    cout << "intersects" << std::endl;
  } else {
    cout<< "not intersects" <<endl;
  }
  // point2d<int> ip = intersection_point(segment1, segment2);
  // double ix, iy;
  // intersection_point(0.0, 0.0, 2.0, 0.0,
  //     1.234, -1.0, 1.234, 2.0,
  //     ix, iy);
  // cout << ix << ", " << iy << std::endl;

  return 0;
}
