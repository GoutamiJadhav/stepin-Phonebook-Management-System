
PROJ_NAME = Phonebook
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = 3_Implementation/project_main.c\
src/add.c\
src/view.c\
src/search.c\
src/edit.c\
src/delete.c






ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
TEST_OUTPUT=$(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
INC     =-Iinc\

all:$(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -Im

run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))