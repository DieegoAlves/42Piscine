#!/bin/sh
cat /etc/passwd | sed 's/\([^:]*:[^:]*:[^:]*:[^:]*:\)[^:]*:/\1/' | awk 'NR % 2 == 0' | cut -d : -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | awk 1 ORS=', ' | sed 's/, $/./' | tr -d '\n'
