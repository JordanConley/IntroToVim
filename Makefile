EXE=example
SRC=$(shell find -name '*.cpp')
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS += -ggdb -O0 --std=c++11 -MMD -MP

all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(LDFLAGS) $(OBJ) -o $(EXE)

.PHONY:=clean
clean: 
	rm $(OBJ) $(DEP) $(EXE)
	
-include $(DEP)
