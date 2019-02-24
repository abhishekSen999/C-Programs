#!/bin/sh
gcc -o p1 process1.c -w
gcc -o p2 process2.c -w
gcc -o t try.c -w
./p1 &
./p2 &

wait
./t
echo all processes complete
