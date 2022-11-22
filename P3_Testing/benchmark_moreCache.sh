#!/bin/bash

START=`exec ./time.out`
for i in `seq 1 $1`;
do 
   exec ./more_cache_read.out $i &
done
END=`exec ./time.out`
DELTA=$((END-START))

echo Time Elapsed for do_more_cache() while reading: $DELTA ms.

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

echo Time Elapsed for do_more_cache() while writing: $DELTA ms.

for i in `seq 1 $1`;
do
    rm $i &
done
