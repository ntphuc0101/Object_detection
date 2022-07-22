#include "gtest/gtest.h"

#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


class BB
{
    private:
        int BB_arr[4] = {};
    public:
        /////////////////////////////////////////////////////////////////////////
       // Define constructor with para for class BB1 - array with 4 dimensions
      //
     ///////////////////////////////////////////////////////////////////////////
    BB(int BB1[])
    {
        for (int idx = 0; idx < 4; idx++)
        {
            BB_arr[idx] = BB1[idx];
        }
    }

     //////////////////////////////////////////////////////////////////////
    // input class BB1 - array with 4 dimensions
   // output (float): Intersection over union
  ////////////////////////////////////////////////////////////////////////
    float IoU(int BB2[])
    {
        int xA, xB, wA, hB, A, B;
        float IoU_V, interSec;
        xA = max(BB_arr[0], BB2[0]);
        xB = max(BB_arr[1], BB2[1]);
        wA = min(BB_arr[2], BB2[2]);
        hB = min(BB_arr[3], BB2[3]);
     //////////////////////////////////////////////////////////////////////
    // Calculate intersection part of 2 bounding boxes
   // 
  ///////////////////////////////////////////////////////////////////////
        interSec = max(wA - xA, 0) * max(hB - xB, 0);
 
      //////////////////////////////////////////////////////////////////////
    // Calculate the area of A and B
   // 
  ///////////////////////////////////////////////////////////////////////
        A = (BB_arr[2] - BB_arr[0]) * (BB_arr[3] - BB_arr[1]);
        B = (BB2[2] - BB2[0]) * (BB2[3] - BB2[1]);
        IoU_V = interSec / float(A + B - interSec);
        return IoU_V;
    }

};
