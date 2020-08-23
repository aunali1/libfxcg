SDKDIR ?= /opt/fxsdk


all: lib/libfxcg.a lib/libc.a

lib:
	mkdir -p lib

lib/libfxcg.a: lib libfxcg/libfxcg.a
	cp libfxcg/libfxcg.a lib/

libfxcg/libfxcg.a:
	make -C libfxcg

lib/libc.a: lib libc/libc.a
	cp libc/libc.a lib/

libc/libc.a:
	make -C libc

install: lib lib/libfxcg.a lib/libc.a
	cp -Rf include ${SDKDIR}/
	cp -Rf lib ${SDKDIR}/
	cp -Rf toolchain ${SDKDIR}/

clean:
	make -C libc clean
	make -C libfxcg clean
	rm -rf lib
