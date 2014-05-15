#!/bin/bash

[ -e addvec/data.txt ] || { echo "please compile your project(s) before turning it in" ; exit 1 ; }
[ -e transform/data.txt ] || { echo "please compile your project(s) before turning it in" ; exit 1 ; }

handin simdworkshop projaddvec addvec/data.txt && \
handin simdworkshop projtransform transform/data.txt || { echo "handin unsuccesful" ; exit 1 ; }
