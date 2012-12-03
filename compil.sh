#!/bin/sh





echo "=========CONF========="
cd /home/onslaught/Dev/NFCReader/src/sys/arch/evbarm/conf
../../../../../evbarm/tools/bin/nbconfig MMNET_GENERIC
cd ../compile/MMNET_GENERIC
echo "========COMPILATION DU NOYAU==============="
../../../../../../evbarm/tools/bin/nbmake-evbarm -j4 dependall

exit 0