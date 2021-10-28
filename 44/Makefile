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

BUILD_DIR	= ../build/44/

SOURCE	= \
main.cpp \
strings/destroy.cpp \
strings/add.cpp \
strings/count.cpp \
strings/fill.cpp \
strings/release.cpp \
strings/safeat.cpp \
strings/strings1.cpp \
strings/strings2.cpp \
strings/strings3.cpp \
strings/strings4.cpp \
strings/swap.cpp \
strings/capacity.cpp \
strings/rawpointer.cpp \
strings/reserve.cpp \
strings/resize.cpp \
strings/strings5.cpp

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