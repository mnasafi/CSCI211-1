# first target in a Makefile is the default target (videos in this file)
# this rule "makes" the final executable "videos"
videos: video.o main.o
	g++ -Wall -pedantic -g -o videos video.o main.o

# this rule "makes" main.o
# main.o depends on video.h and main.cpp
main.o: video.h main.cpp
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

# this rule "makes" video.o
# video.o depends on video.h and video.cpp
video.o: video.h video.cpp
	g++ -Wall -pedantic -g -std=c++11 -c video.cpp

clean:
	rm -f video.o main.o videos videos.exe
