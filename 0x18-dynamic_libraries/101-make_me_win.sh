#!/bin/bash
wget -p .. https://raw.githubusercontent.com/temmydasilva/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$pwd/ ../libhack.so"
