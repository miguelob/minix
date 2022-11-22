#!/bin/bash

START=`exec ./time.out`
for i in `seq 1 $1`;
do 
   exec ./moreZone.out $i &
done
END=`exec ./time.out`
DELTA=$((END-START))

echo Time Elapsed for do_more_zone() while reading: $DELTA ms.

for i in `seq 1 $1`;
do
    rm $i &
done

START=`exec ./time.out`
for i in `seq 1 $1`;
do 
   exec ./moreZone_write.out $i &
done
END=`exec ./time.out`
DELTA=$((END-START))

echo Time Elapsed for do_more_zone() while writing: $DELTA ms.

for i in `seq 1 $1`;
do
    rm $i &
done
