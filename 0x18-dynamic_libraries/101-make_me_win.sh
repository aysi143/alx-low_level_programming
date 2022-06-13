#!/bin/bash
wget -P /tmp https://github.com/aysi143/alx-low_level_programming/edit/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
