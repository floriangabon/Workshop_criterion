SRC_DIR	=	class/
TESTS_DIR	=	./tests/

SRC	=	$(SRC_DIR)Workshop.cpp	\
		$(SRC_DIR)exception/ExceptionWorkshop.cpp	\

TESTS =	$(TESTS_DIR)ex00/test_basic_return.cpp	\
		$(TESTS_DIR)ex01/test_return.cpp	\
		$(TESTS_DIR)ex02/test_print.cpp	\
		$(TESTS_DIR)ex03/test_final.cpp	\

TESTOBJ	= $(TESTS:.cpp=.o)
OBJ	= $(SRC:.cpp=.o)

CC	=	g++

LIBS	=	-lcriterion -lgcov
INC	= -I./class -I./class/exception
CXXFLAGS	=	-W -Wall -Wextra -Werror $(INC)

TEST_NAME	=	unit_tests


clean:
	@rm -rf $(OBJ)
	@find -name "*.gcda" -delete
	@find -name "*.gcno" -delete

fclean:	clean
	@rm -rf $(TEST_NAME)

tests_run:	rule_coverage $(OBJ) rule_test $(TESTOBJ)
	$(CC) $(OBJ) $(TESTOBJ) $(LIBS) -o $(TEST_NAME)
	./$(TEST_NAME)

all: tests_run

re: fclean all

rule_coverage:
	$(eval CXXFLAGS += --coverage)

rule_test:
	$(eval CXXFLAGS = -W -Wextra -Wall -Werror $(INC))