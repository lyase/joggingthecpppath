MYLIB_DIR = lib

# Flags passed to the preprocessor.
CPPFLAGS += -I$(MYLIB_DIR)/include

# Flags passed to the C++ compiler.
#CXXFLAGS += -g -Wall -Wextra -std=c++0x
CXXFLAGS += -g -Wall -Wextra 
CXX = g++
#CXX = g++-mp-4.6

# All tests produced by this Makefile.  Remember to add new tests you
# created to the list.
TESTS = myprg

# All Google Test headers.  Usually you shouldn't change this
# definition.
MYLIB_HEADERS = $(MYLIB_DIR)/include/*.h
# House-keeping build targets.

all : $(TESTS)

clean :
	rm -rvf $(TESTS)  my_main.a *.o doc myprg 

# Builds gtest.a and gtest_main.a.

# Usually you shouldn't tweak such internal variables, indicated by a
# trailing _.
MYLIB_SRCS_ = $(MYLIB_DIR)/src/*.cpp $(MYLIB_DIR)/include/*.h $(MYLIB_HEADERS)

# For simplicity and to avoid depending on Google Test's
# implementation details, the dependencies specified below are
# conservative and not optimized.  This is fine as Google Test
# compiles fast and for ordinary users its source rarely changes.


gtest_main.o : $(MYLIB_SRCS_)
	$(CXX) $(CPPFLAGS) -I$(MYLIB_DIR) $(CXXFLAGS) -c              $(MYLIB_DIR)/src/gtest_main.cc
my_main.o : $(MYLIB_SRCS_)
	$(CXX) $(CPPFLAGS) -I$(MYLIB_DIR) $(CXXFLAGS) -c               greet.cpp

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

my_main.a :  greet.o
	$(AR) $(ARFLAGS) $@ $^
my_main.a :  greet.o
	$(AR) $(ARFLAGS) $@ $^

# Builds a sample test.  A test should link with either gtest.a or
# gtest_main.a, depending on whether it defines its own main()
# function.

elagage.o: lib/src/elagage.cpp

tests.o : lib/src/elagage.cpp $(MYLIB_HEADERS)

tests : tests.o elagage.o my_main.a
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@
	chmod +x tests
	./tests --gtest_color=yes


doc :
	doxygen Doxyfile

docpdf : 
	cd doc/latex;  make pdf
myprg :   my_main.a
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@
	chmod +x myprg
	./myprg
