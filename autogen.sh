if [ ! -e m4 ]; then
	mkdir m4
fi

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

ORIGDIR=`pwd`
cd $srcdir

autoreconf -i -f
