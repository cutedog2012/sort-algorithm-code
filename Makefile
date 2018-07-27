SRCS:= main.cpp bubble.cpp quick.cpp
all:
	g++ -o sort $(SRCS)
	@echo "SRCS: " $(SRCS)

