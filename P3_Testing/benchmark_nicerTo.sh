#!/bin/bash

START=`exec ./time.out`
for i in `seq 1 $1`;
do 
   exec ./nicerto_read.out $i &
done
END=`exec ./time.out`
DELTA=$((END-START))

echo Time Elapsed for nicerTo() while reading: $DELTA ms.

for i in `seq 1 $1`;
do
    rm $i &
done

START=`exec ./time.out`
for i in `seq 1 $1`;
do 
   exec ./nicerto_write.out $i &
done
END=`exec ./time.out`
DELTA=$((END-START))

echo Time Elapsed for nicerTo() while writing: $DELTA ms.

for i in `seq 1 $1`;
do
    rm $i &
done
