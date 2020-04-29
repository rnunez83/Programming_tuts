//
//  sandbox.c
//  C Programming: Advanced Data Types
//  Dartmouth_IMTx: DART.IMT.C.05
//  https://courses.edx.org/courses/course-v1:Dartmouth_IMTx+DART.IMT.C.05+2T2018/course/
//  Created by renaudt nunez on 11/7/18.
//

#include <stdio.h>
int main() {
    double a = 43.23
    double * addrOfa = &a;
    printf("At address %p, the value is %.2lf\n", addrOfa, *addrOfa);
    return 0;
}
