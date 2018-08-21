SRCS:= main.cpp sort.cpp bubble.cpp quick.cpp choose.cpp insert.cpp merge.cpp heap.cpp shell.cpp count.cpp
all:
	g++ -o sort $(SRCS)
	@echo "SRCS: " $(SRCS)

