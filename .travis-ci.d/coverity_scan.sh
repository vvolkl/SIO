#!/bin/bash

ILCSOFT=/cvmfs/clicdp.cern.ch/iLCSoft/builds/current/CI_${COMPILER}
source $ILCSOFT/init_ilcsoft.sh

cd /Package
mkdir build
cd build
cmake -DSIO_BUILTIN_ZLIB=OFF -DSIO_EXAMPLES=ON .. && \
export PATH=/Package/cov-analysis-linux64/bin:$PATH && \
cov-build --dir cov-int make -j2 && \
tar czvf myproject.tgz cov-int
