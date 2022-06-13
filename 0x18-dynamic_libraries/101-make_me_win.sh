#!/bin/bash
gcc *.o -fPIC -shared -o libruin.so
<<<<<<< HEAD
LD_PRELOAD=$PWD/libruin.so
=======
LD_PRELOAD=$PWD/libruin.so
>>>>>>> 91e6dbaa210931d3b208b27e811a1ff23e1c006b
