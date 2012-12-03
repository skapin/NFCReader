#! /bin/sh
 
ARCH=evbarm
 
SRC=/home/onslaught/Dev/NFCReader/src
BASE=/home/onslaught/Dev/NFCReader/${ARCH}
REL=/home/onslaught/Dev/NFCReader/rel
 
cd ${SRC} || exit 1
./build.sh -u -j 4 \
 -m ${ARCH} \
 -U \
 -O ${BASE}/obj \
 -T ${BASE}/tools \
 -D ${BASE}/dest \
 -R ${REL} \
 tools