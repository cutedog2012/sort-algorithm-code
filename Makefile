SRCS:= main.cpp sort.cpp bubble.cpp quick.cpp choose.cpp insert.cpp merge.cpp
all:
	g++ -o sort $(SRCS)
	@echo "SRCS: " $(SRCS)

