#!/bin/bash

make cleandbs

script -c 'make databases' make-databases.log
dos2unix make-databases.log
grep -aniEC4 'fault|dumped|terminated|smashing|fail|error|corrupt' make-databases.log | \
   grep -vE 'WARNING|ing directory' | uniq

grep -aq 'fault|dumped|terminated|smashing|fail|error|corrupt' make-databases.log && exit 1

exit 0

# debug db-create..

LST="-movie -acr -acs -naka -cine -comp -dir -write -edit -prodes -costdes -prdcr -misc -aka"
LST="${LST} -plot -bio -crazy -goof -quote -bus -castcom -cert -cntry -color -crewcom -dist -genre"
LST="${LST} -keyword -lang -ld -link -lit -loc -mix -mrr -prodco -rel -sfxco -strack -tag -tech"
LST="${LST} -time -triv -vers"

for DB in ${LST} ; do
   gdb -q -ex=r -ex=bt -ex=q --args ./etc/mkdb ${DB}
done
