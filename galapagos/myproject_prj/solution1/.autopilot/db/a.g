#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/tarafdar/workDir/test/galapagos/hls4ml/galapagos/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
