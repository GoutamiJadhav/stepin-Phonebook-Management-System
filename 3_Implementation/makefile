# comments

#Target : dependency
#<TAB>Command

PROJ_NAME = Phonebook


SRC = main.c\
src/add.c\
src/view.c\
src/search.c\
src/edit.c\
src/delete.c\






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


all:$(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -Im

run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	



analyze: test mechanic statuccheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))