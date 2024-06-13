# only three things you have to change in order for your project to work
# name of executable
BINARY=./build/bin
# libraries' directory
CODEDIRS=. ./src 
# headers' directory
INCDIRS=. ./include/ # can be list


CC=g++
OPT=-O0
# generate files that encode make rules for the .h dependencies
DEPFLAGS=-MP -MD
# automatically add the -I onto each include directory
CFLAGS=-Wall -Wextra -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)

BUILDDIR = ./build/

# for-style iteration (foreach) and regular expression completions (wildcard)
CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.cc))
# regular expression replacement
OBJECTS=$(patsubst %.cc,$(BUILDDIR)%.o,$(CFILES))
DEPFILES=$(patsubst %.cc,$(BUILDDIR)%.d,$(CFILES))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^
	
# only want the .cc file dependency here, thus $< instead of $^.
#
$(BUILDDIR)%.o:%.cc
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BINARY) $(BUILDDIR)
# shell commands are a set of keystrokes away
distribute: clean
	tar zcvf dist.tgz *

# @ silences the printing of the command
# $(info ...) prints output
diff:
	$(info The status of the repository, and the volume of per-file changes:)
	@git status
	@git diff --stat

# include the dependencies
-include $(DEPFILES)

# add .PHONY so that the non-targetfile
# rules work even if a file with the same name exists.
.PHONY: all clean distribute diff