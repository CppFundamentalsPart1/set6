# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

CXX	 = g++
CXXFLAGS	 =  -c -Wall -Werror -std=c++20
PROGNAME	= a.out

BUILD_DIR	= ../build/47/

SOURCE	= \
main.cpp \
symtab/symtab1.cpp \
symtab/symtab2.cpp \
symtab/findidx.cpp \
symtab/binsearch.cpp \
symtab/enlarge.cpp \
symtab/moveelements.cpp \
symbol/symbol1.cpp \
symbol/symbol2.cpp \
symbol/compare.cpp \
value/value1.cpp \
value/value2.cpp \
value/value3.cpp \
value/doublevalue.cpp \
value/intvalue.cpp \
value/charvalue.cpp \
value/requirespecial.cpp

OUT	= $(BUILD_DIR)$(PROGNAME)
OBJS	= $(SOURCE:%.cpp=$(BUILD_DIR)%.o)

all: $(OUT)

$(OUT): $(OBJS)
	$(CXX) $(OBJS) -o $(OUT)

$(BUILD_DIR)%.o : %.cpp
	@mkdir -p '$(@D)'
	$(CXX) $(CXXFLAGS) $< -o $@

build: $(OBJS)

rebuild: clean all

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	$(OUT) $(RUN_ARGS)