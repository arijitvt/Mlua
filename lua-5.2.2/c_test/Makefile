cc=gcc
target=lua_Comp
c_flag=-I ../src
comp_flag= -c -g

objs=main.o 

lua_dir=-L../src


all:$(objs)
	$(cc) $(objs) -o $(target) $(lua_dir) 
%.o:%.c
	$(cc) $(comp_flag) $(c_flag) $<

clean:
	-rm -rf *.o $(target)
