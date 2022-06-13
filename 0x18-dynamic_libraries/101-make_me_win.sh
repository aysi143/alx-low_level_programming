#!/bin/bash
gcc *.o -fPIC -shared -o libruin.so
LD_PRELOAD=$PWD/libruin.so
