# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

CXX	 = g++
CXXFLAGS	 =  -c -Wall -Werror -std=c++20
PROGNAME	= charCounter

BUILD_DIR	= ../build/41/

SOURCE	= \
main.cpp \
showchar.cpp \
charcount/action.cpp \
charcount/charcount1.cpp \
charcount/charcount2.cpp \
charcount/append.cpp \
charcount/capacity.cpp \
charcount/processchar.cpp \
charcount/inc.cpp \
charcount/count.cpp \
charcount/insert.cpp \
charcount/info.cpp \
charcount/locate.cpp \
charcount/moveelements.cpp \
charcount/enlarge.cpp \
charcount/rawcapacity.cpp

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