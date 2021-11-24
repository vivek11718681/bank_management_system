PROJ_NAME = bank
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = accept.c deposit.c display.c search.c withdraw.c

TEST_SRC = testbank.c\
unity/unity.c

INC = -Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = rm -rf
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = del /q
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test run clean 

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME} $(BUILD_DIR)
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

valgrind:
	valgrind $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(BUILD_DIR)/*
	 
	
	