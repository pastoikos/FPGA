#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pastoikos/Documents/bilateralFilterKernel_HLS/solution1/.autopilot/db/a.g.bc ${1+"$@"}
