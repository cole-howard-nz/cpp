all: build

build: src/main.cpp
	g++ -o temperature src/main.cpp src/utils.cpp

clean:
	@if exists temperature.exe del /f /q temperature.exe