#!/bin/bash
wget -q -O /tmp/libtest.so https://github.com/SunkanmiL/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
