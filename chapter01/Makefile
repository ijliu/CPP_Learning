CXX = g++
CXXFLAGS = -Wall -std=c++11
SRCEXT = cc

SOURCES = $(wildcard *.$(SRCEXT))
OBJECTS = $(patsubst %.$(SRCEXT),%.o,$(SOURCES))

TARGETS = $(patsubst %.cc,%,$(SOURCES))

all:$(TARGETS)

%:%.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o:%.$(SRCEXT)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGETS)

.PHONY: all clean

