cc=gcc
target=lua_Comp
c_flag=-I ../src
comp_flag= -c -g

objs=main.o

link_lua_dir=-L../src/
lib_flag = -llua -lm

all:$(objs)
	$(cc) $(objs) -o $(target) $(link_lua_dir) $(lib_flag)

%.o:%.c
	$(cc) $(comp_flag) $(c_flag) $<

clean:
	-rm -rf *.o $(target)
