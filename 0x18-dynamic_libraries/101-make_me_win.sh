#!/bin/bash
wget -P /tmp/ https://github.com/Okinbird/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putsnum.so
export LD_PRELOAD=/tmp/putsnum.so 
