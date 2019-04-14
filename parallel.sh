#!/bin/sh
gcc -o s  server.c -w
gcc -o c client.c -w
./s &
./c &

wait
./t
echo all processes complete
