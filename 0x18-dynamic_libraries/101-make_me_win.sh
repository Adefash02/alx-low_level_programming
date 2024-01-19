#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Adefash02/alx-low_level_programming/master/0x18-dynamic_libraries/libarc.so
export LD_PRELOAD="$PWD/../libarc.so"
