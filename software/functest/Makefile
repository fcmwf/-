## Lab1 TODO: create Makefile for functest here

# 1
# NAMES = add-longlong
# SRCS = src/add-longlong
# BASE_PORT = ../base-port
# # SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1

# -include $(BASE_PORT)/Makefile

# 2
# NAMES ?= $(notdir $(basename $(wildcard src/*.c)))

# .PHONY: all
# all: $(NAMES)

# %: src/$(notdir $(basename %)).c
# 	@NAMES=$@ SRCS=$< BASE_PORT=../base-port make -s -f ../base-port/Makefile 

# 3
NAMES ?= $(notdir $(basename $(wildcard src/*.c))) # 可以使用 wildcard 函数来获取所有的程序名，使用方法请查阅 Makefile 教程
BASE_PORT = ../base-port
SIM_PATH = $(abspath "../../../../simulator")

.PHONY: all
all: $(NAMES)

%: src/$(notdir $(basename %)).c
	@echo NAMES = $@ > $@.mk 
	@echo SRCS = $(basename $<) >> $@.mk
	@echo BASE_PORT = $(BASE_PORT) >> $@.mk
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make -s -f $@.mk
	@rm -rf $@.mk

clean:
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make clean -s -f $@.mk
	@rm -rf $@.mk

clean-all:
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make clean-all -s -f $@.mk
	@rm -rf $@.mk

run: 
	@echo NAMES = add-longlong > $@.mk 
	@echo SRCS = src/add-longlong >> $@.mk
	@echo BASE_PORT = $(BASE_PORT) >> $@.mk
	@echo SIM_PATH = "$(SIM_PATH) >> $@.mk
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make run -s -f $@.mk
	@rm -rf $@.mk