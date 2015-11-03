include default.mk

main : main.o
	$(CXX_LINK) -o main main.o
