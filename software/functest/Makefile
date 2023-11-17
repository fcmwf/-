## Lab1 TODO: create Makefile for functest here

# NAMES = 
# SRCS =
# BASE_PORT =
# SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1

# -include ...

NAMES ?= $(notdir $(basename $(wildcard src/*.c))) # 可以使用 wildcard 函数来获取所有的程序名，使用方法请查阅 Makefile 教程
BASE_PORT = ../base-port
SRCS = $(addprefix src/, $(NAMES))
SIM_PATH = $(abspath "../../../../simulator")

-include ../base-port/Makefile

run: 
	@echo NAMES = $(NAMES) > $@.mk 
	@echo SRCS = $(SRCS) >> $@.mk
	@echo BASE_PORT = $(BASE_PORT) >> $@.mk
	@echo SIM_PATH = "$(SIM_PATH) >> $@.mk
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make run -s -f $@.mk
	@rm -rf $@.mk