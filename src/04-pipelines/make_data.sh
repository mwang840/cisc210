#!/bin/bash
for name in $(<~roosen/roster.txt)
do
    echo ${RANDOM} > data/${name}.txt
done
