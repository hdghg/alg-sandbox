#!/bin/sh
rm -rf build/
mkdir build
cd build
cmake ..
cmake --build .

echo Running test 1

./main < ../cases/case1/input.txt > sol.txt
diff -Z sol.txt ../cases/case1/output.txt > /dev/null
if test $? -gt 0
then
  echo Test Failed
  diff -Zy sol.txt ../cases/case1/output.txt
else
  echo Test success!
fi