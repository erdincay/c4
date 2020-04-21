##################################################
# 
##################################################
# -lpthread -lnsl
# -g
##################################################

TARGET   = app

CC       = gcc
CPPFLAGS = -Iinclude
CFLAGS   = -g -Wall -static-libgcc

LDFLAGS  = -OFast -m64
LIBS     = -Llib -lcascci 

SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))

$(TARGET): $(OBJS) 
	$(CC) $^ $(LDFLAGS) $(LIBS) -o $@ 

%.o: %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

clean:
	-rm -f *.o
	-rm -f app