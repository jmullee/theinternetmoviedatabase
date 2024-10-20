#!/bin/bash

make cleanobj cleanbin
script -c 'cd src && make compile installbin' make-compile.log
dos2unix make-compile.log
grep -iE 'warning|error' make-compile.log | cut -d: -f 4- | sort | uniq -c
[ -f ./etc/mkdb ] || exit 1
