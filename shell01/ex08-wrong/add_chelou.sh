#!/bin/sh

FT_NBR1=$(echo $FT_NBR1 | tr "\'\\\"\?\!" 01234)
FT_NBR2=$(echo $FT_NBR2 | tr 'mrdoc' 01234)


SUM=$(echo "obase=13; ibase=5; $FT_NBR1 + $FT_NBR2" | bc)


echo $SUM | tr '0123456789ABC' 'gtaio luSnemf'

