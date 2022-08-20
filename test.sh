#!/bin/sh
rm -rf build/
mkdir build
cd build
cmake ..
cmake --build .

for i in $(ls -1qd ../cases/*/)
do
  printf "Running test $i\n"

  ./main < $i/input.txt > sol.txt
  diff -Z sol.txt $i/output.txt > /dev/null
  if test $? -gt 0
  then
    echo Test Failed
    diff -Zy sol.txt $i/output.txt
  else
    echo Test success!
  fi

done
