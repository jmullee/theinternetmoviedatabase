#!/bin/bash
CN="Colin Needham <cn@ibmpcug.co.uk>"
JR="Jon Reeves <reeves@zk3.dec.com>"
TARDIR="../../frozendata/tools"
TXTFILES="INSTALL LICENSE README Makefile */Makefile src/*.c src/*.h"

set -e

function addoldver() {
	VER="$1"
	DATE="$2"
	AUTHOR="$3"
	echo "addoldver(${VER} ${DATE} ${AUTHOR})"
	tar --strip-components=1 -pxf ${TARDIR}/${VER}.tar.gz
	echo "${TARDIR}/${VER}.tar.gz" > tarfiles.txt
	tar -vtf ${TARDIR}/${VER}.tar.gz | rev | sort | rev >> tarfiles.txt
	for F in ${TXTFILES} ; do
		touch .stamp -r $F ; 
		cat $F | recode l1..h4 | \
			sed 's|[[:space:]]*$||g;s|\&#13;$||g;s|^\&#13;||g;s|\&#13;|\n|g' | \
			recode h4..u8 > x ;
		cat x > $F
		touch -r.stamp $F ;
	done
	rm .stamp x

	git add .
	git commit -m "${VER}" --date="${DATE}" --author="${AUTHOR}" .
	}

[ -d .git ] && {
	echo "cleanup: delete all and do again?"
	read z
	rm -rf .git bin dbs docs etc lists man src INSTALL LICENSE README Makefile
	}

git init

addoldver "moviedb-3.4"  "1998-03-29T22:52" "${CN}"
addoldver "moviedb-3.4a" "1998-07-02T13:57" "${CN}"
addoldver "moviedb-3.5"  "1998-10-11T16:05" "${CN}"
addoldver "moviedb-3.5a" "1998-11-19T17:52" "${JR}"
addoldver "moviedb-3.7"  "1999-03-08T20:08" "${JR}"
addoldver "moviedb-3.8"  "1999-07-28T20:29" "${JR}"
addoldver "moviedb-3.10" "1999-11-04T11:24" "${JR}"
addoldver "moviedb-3.11" "2000-01-15T11:57" "${JR}"
addoldver "moviedb-3.12" "2000-02-06T19:15" "${JR}"
addoldver "moviedb-3.13" "2000-07-09T00:54" "${JR}"
addoldver "moviedb-3.14" "2000-09-21T09:12" "${JR}"
addoldver "moviedb-3.15" "2001-03-10T04:40" "${JR}"
addoldver "moviedb-3.16" "2001-07-31T12:23" "${JR}"
addoldver "moviedb-3.17" "2001-11-07T22:57" "${JR}"
addoldver "moviedb-3.18" "2002-06-22T06:36" "${JR}"
addoldver "moviedb-3.19" "2002-10-21T10:38" "${JR}"
addoldver "moviedb-3.20" "2003-01-25T10:33" "${JR}"
addoldver "moviedb-3.21" "2003-03-28T20:21" "${JR}"
addoldver "moviedb-3.22" "2003-05-03T16:48" "${JR}"
addoldver "moviedb-3.23" "2004-01-09T22:07" "${JR}"
addoldver "moviedb-3.24" "2004-09-16T11:36" "${JR}"
