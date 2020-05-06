#!/bin/bash
wget -P /tmp https://github.com/clasesucatmarlon/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/library.so
export LD_PRELOAD=/tmp/library.so
