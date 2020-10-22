cc = g++  # use g++ compiler

flags = -std=c++11  # compile with C++ 11 standard
flags += -Wall      # compile with all warnings

link = $(cc) $(flags) -o  # final linked build to binary executable

compile = $(cc) $(flags) -c -o  # compilation to intermediary .o files

grade_calc : grade_calc.o
	$(link) $@ $^ 

grade_calc.o : grade_calc.cc
	$(compile) $@ $^ 


clean:
	@rm -f grade_calc.o grade_calc
