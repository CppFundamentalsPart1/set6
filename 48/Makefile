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

BUILD_DIR	= ../build/48/

SOURCE	= \
main.cpp \
calculator/memberptrs.cpp \
tokenizer/tokenizer1.cpp \
tokenizer/identifier.cpp \
tokenizer/intordouble.cpp \
tokenizer/nexttoken.cpp \
tokenizer/reset.cpp \
calculator/run.cpp \
calculator/prompt.cpp \
calculator/atEoln.cpp \
calculator/ok.cpp \
calculator/evaluate.cpp \
calculator/expr.cpp \
calculator/term.cpp \
calculator/factor.cpp \
calculator/add.cpp \
calculator/sub.cpp \
calculator/mul.cpp \
calculator/div.cpp \
calculator/mod.cpp \
calculator/divisionOK.cpp \
calculator/done.cpp \
calculator/notOK.cpp \
calculator/charUnit.cpp \
calculator/intDouble.cpp \
calculator/ident.cpp \
calculator/parenthesized.cpp \
calculator/unaryMinus.cpp \
calculator/show.cpp \
calculator/charToken.cpp \
calculator/charTokens.cpp \
calculator/rvalue.cpp \
calculator/assign.cpp \
calculator/nextToken.cpp \
calculator/equalize.cpp \
calculator/toDouble.cpp \
../47/symtab/symtab1.cpp \
../47/symtab/symtab2.cpp \
../47/symtab/findidx.cpp \
../47/symtab/binsearch.cpp \
../47/symtab/enlarge.cpp \
../47/symtab/moveelements.cpp \
../47/symbol/symbol1.cpp \
../47/symbol/symbol2.cpp \
../47/symbol/compare.cpp \
../47/value/value1.cpp \
../47/value/value2.cpp \
../47/value/value3.cpp \
../47/value/doublevalue.cpp \
../47/value/intvalue.cpp \
../47/value/charvalue.cpp \
../47/value/requirespecial.cpp

OUT	= $(BUILD_DIR)$(PROGNAME)
OBJS	= $(SOURCE:%.cpp=$(BUILD_DIR)%.o)

all: $(OUT)

$(OUT): $(OBJS)
	$(CXX) $(OBJS) -o $(OUT)

$(BUILD_DIR)%.o : %.cpp
	@mkdir -p '$(@D)'
	$(CXX) $(CXXFLAGS) $< -o $@

build: all

rebuild: clean all

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	$(OUT) $(RUN_ARGS)