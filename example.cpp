#include "natural.h"

fun volume(real r, real h){
    return r*r*3.14*h;
}

IO main(){
    let r be 2.5;
    let h be 10;

    var vol is volume(r,h);
    show vol; br
}