all:
	g++ -Isrc/include -Lsrc/lib -o main flapps/*.cpp -lraylibdll
	main