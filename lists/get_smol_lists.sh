#!/bin/bash

## ./lists/get_smol_lists.sh

SRCDIR=/home/jmullee/projects/imdb/ftp-data-2017-12-22
GETLINES=50000

cd lists
set -e

[ "$(basename $PWD)" = "lists" ] || { echo "ERR: run this in lists dir" ; exit 1 ; }

[ -d ${SRCDIR} ] || { echo "ERR: needs source lists dir '${SRCDIR}'" ; exit 1 ; }


find ${SRCDIR} -maxdepth 1 -type f -name \*\.list.gz -not -size 0 -printf '%f\n' | \
	while read L ; do
		M=$(echo "${L}" | sed 's|\.gz$||')
		echo "${SRCDIR}/${L} > ${M}"
		zcat ${SRCDIR}/${L} | head -n ${GETLINES} > ${M}
	done

# ln -s $PWD/src/mkdb $PWD/etc/mkdb
