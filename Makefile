
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

clean:
	make -C libc clean
	make -C libfxcg clean
	rm -rf lib
