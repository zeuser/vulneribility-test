1_1_1-mem-unfree.o : 1_1_1-mem-unfree.c
	cc -c 1_1_1-mem-unfree.c

1_2_1-use-after-free.o : 1_2_1-use-after-free.c
	cc -c 1_2_1-use-after-free.c

1_3_1-stack-overflow.o : 1_3_1-stack-overflow.c
	cc -c 1_3_1-stack-overflow.c

1_3_2-stack-overflow.o : 1_3_2-stack-overflow.c
	cc -c 1_3_2-stack-overflow.c

1_4_1-Heap-overflow.o : 1_4_1-Heap-overflow.c
	cc -c 1_4_1-Heap-overflow.c

1_4_2-Heap-overflow.o : 1_4_2-Heap-overflow.c
	cc -c 1_4_2-Heap-overflow.c

1_5_1-Initialize-problem.o : 1_5_1-Initialize-problem.c
	cc -c 1_5_1-Initialize-problem.c

1_6_1-Double-Free.o : 1_6_1-Double-Free.c
	cc -c 1_6_1-Double-Free.c

1_7_1-Off-By-One.o : 1_7_1-Off-By-One.c
	cc -c 1_7_1-Off-By-One.c

1_8_1-Only-free-alloc-mem.o : 1_8_1-Only-free-alloc-mem.c
	cc -c 1_8_1-Only-free-alloc-mem.c

2_1_1-Data-Overrun.o : 2_1_1-Data-Overrun.c
	cc -c 2_1_1-Data-Overrun.c

2_1_2-Data-Overrun.o : 2_1_2-Data-Overrun.c
	cc -c 2_1_2-Data-Overrun.c

3_1_1-Format-string.o : 3_1_1-Format-string.c
	cc -c 3_1_1-Format-string.c

3_1_2-Format-string.o : 3_1_2-Format-string.c
	cc -c 3_1_2-Format-string.c

3_1_3-Format-string.o : 3_1_3-Format-string.c
	cc -c 3_1_3-Format-string.c

4_1_1-uninitialized-variables.0 : 4_1_1-uninitialized-variables.c
	cc -c 4_1_1-uninitialized-variables.c

clean:
	rm 1_1_1-mem-unfree.o 1_2_1-use-after-free.o 1_3_1-stack-overflow.o \
	1_3_2-stack-overflow.o 1_4_1-Heap-overflow.o 1_4_2-Heap-overflow.o \
	1_5_1-Initialize-problem.o 1_6_1-Double-Free.o 1_7_1-Off-By-One.o \
	1_8_1-Only-free-alloc-mem.o 2_1_1-Data-Overrun.o 2_1_2-Data-Overrun.o \
	3_1_1-Format-string.o 3_1_2-Format-string.o 3_1_3-Format-string.o \
	4_1_1-uninitialized-variables.o