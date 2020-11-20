default: build

run:
	./bazel-bin/formula

clean:
	bazel clean --async

build:
	bazel build //:formula

build-gpp:
	g++ -o formula index.cc

win:
	x86_64-w64-mingw32-g++ -static-libgcc -static-libstdc++ -o lol.exe index.cc 

