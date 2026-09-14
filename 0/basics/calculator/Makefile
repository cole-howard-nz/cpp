all: build

build: src/main.cpp
	g++ -o calc src/main.cpp src/calculator.cpp

clean:
	@if exist calc.exe del /f /q calc.exe