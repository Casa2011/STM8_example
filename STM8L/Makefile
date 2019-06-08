TOOLS				:= $(STM8_PATH)/bin
CC				:= $(TOOLS)/sdcc
AS				:= $(TOOLS)/sdasstm8
AR 				:= $(TOOLS)/sdar
OBJCOPY 			:= $(TOOLS)/stm8-objcopy
OBJDUMP 			:= $(TOOLS)/stm8-objdump
SIZE				:= $(TOOLS)/stm8-size
OPENOCD				:= $(TOOLS)/openocd
SSTM8				:= $(TOOLS)/sstm8
GDB				:= $(TOOLS)/stm8-gdb
OPENOCD_TARGET  		:= $(TOOLS)/../share/openocd/scripts
FLASHER				:= $(TOOLS)/stm8flash

PRJ_ROOT			:= .
PRJ_C_SRC_DIR 			:= $(PRJ_ROOT)/Src/c
PRJ_ASM_SRC_DIR 		:= $(PRJ_ROOT)/Src/asm
PRJ_INC_DIR 			:= $(PRJ_ROOT)/Inc
OUTPUT_DIR 			:= $(PRJ_ROOT)/build
BIN_DIR				:= $(OUTPUT_DIR)/binary
DISASM_DIR			:= $(OUTPUT_DIR)/disasm

INCLUDE 			:= -I$(PRJ_INC_DIR)
VPATH				:=$(PRJ_C_SRC_DIR)
VPATH 				+=$(PRJ_ASM_SRC_DIR)

TARGETNAME			:= stm8l
TARGET     			:= $(OUTPUT_DIR)/$(TARGETNAME).elf
TARGET_BIN			:= $(BIN_DIR)/$(TARGETNAME).bin

PROGRAMMER			:= stlinkv2
DEVICE				:= STM8L15X_HD
DEVICE_FLASH			:=stm8l151?8
MEMTYPE				:= flash
RW				:= -w
NODEBUG				:= 0
ASMFLAGS			:= -plosgffw $(INCLUDE)
CFLAGS 				:=  -mstm8 --all-callee-saves --stack-auto --fverbose-asm --no-peep
OBJDUMPFLAGS			:= -m stm8 -D -b binary -l -w 
FLASHERFLAGS			:= -c $(PROGRAMMER) -p $(DEVICE_FLASH)

OPENOCDCONFIG =\
-f $(OPENOCD_TARGET)/interface/stlink-v2.cfg\
-f $(OPENOCD_TARGET)/target/stm8l152.cfg

PRJ_C_SOURCE  			:= $(notdir $(wildcard $(PRJ_C_SRC_DIR)/*.c))
PRJ_ASM_SOURCE 			:= $(notdir $(wildcard $(PRJ_ASM_SRC_DIR)/*.s))
PRJ_OBJECTS			 = $(addprefix $(OUTPUT_DIR)/, $(PRJ_C_SOURCE:.c=.rel))
PRJ_OBJECTS			+= $(addprefix $(OUTPUT_DIR)/, $(PRJ_ASM_SOURCE:.s=.rel))

SKIP_TRAPS			 = 0


ifeq ($(NODEBUG), 1)
	CFLAGS += --out-fmt-ihx         
	OBJCOPYFLAGS = -Iihex -Obinary
	TARGET = $(OUTPUT_DIR)/$(TARGETNAME).ihx
else
	CFLAGS += --debug --out-fmt-elf
	OBJCOPYFLAGS = -Ielf32-stm8 -Obinary	
	TARGET = $(OUTPUT_DIR)/$(TARGETNAME).elf
endif
ifeq ($(RW), -w)
	ifeq ($(MEMTYPE), flash)
			FLASHERFLAGS +=-s $(MEMTYPE) $(RW) $(TARGET)
			else		
	endif
else		
			FLASHERFLAGS += -c $(PROGRAMMER) -p $(DEVICE_FLASH) -s $(MEMTYPE) $(RW) $(BIN_DIR)/$(MEMTYPE)_$(TARGETNAME).bin		
endif
.PHONY:program unlock disassembly clean openocd help

all:$(TARGET)

$(OUTPUT_DIR)/%.rel: %.c
		$(CC) $(CFLAGS) -D$(DEVICE) $(INCLUDE) -DSKIP_TRAPS=$(SKIP_TRAPS) -c $? -o $@
	
$(OUTPUT_DIR)/%.rel: %.s
	$(AS) $(ASMFLAGS) $@ $?

$(TARGET):$(PRJ_OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $^
	$(OBJCOPY) $(OBJCOPYFLAGS) $(TARGET) $(TARGET_BIN)
	cp $(TARGET) $(BIN_DIR)
	$(SIZE) $(TARGET)
	
program:
	$(FLASHER) $(FLASHERFLAGS)
unlock:
	$(FLASHER) -c $(PROGRAMMER) -p $(DEVICE_FLASH) -u	
disassembly:
	    $(OBJDUMP) $(OBJDUMPFLAGS) $(BIN_DIR)/$(MEMTYPE)_$(TARGETNAME).bin	> $(DISASM_DIR)/$(MEMTYPE)_$(TARGETNAME)_disasm.asm	    
clean:
	rm -f $(OUTPUT_DIR)/*.*
	rm -f $(BIN_DIR)/*.*
	rm -f $(DISASM_DIR)/*.*
	
openocd:
	#  !!!terminal window be is blocked!!! Run in second terminal
	# 	
	#   $(OPENOCD) $(OPENOCDCONFIG) -c "init" -c "reset halt"
	#
	#   run gdb
	#   $(GDB) $(OUTPUT_DIR)/$(TARGETNAME).elf -tui -ex 'target extended-remote localhost:3333' -ex 'load' -ex 'b main' -ex 'continue'
	#   step - (gdb): n 
	
help:	                                                                                       
	#******************************************************************************************#
	# make 	NODEBUG=[01] RW=[rw] MEMTYPE=[flash eeprom ram opt] TARGETNAME=[]	           #
	#******************************************************************************************#
	# NODEBUG=1	Debug disable, out format TARGETNAME.ihx (+TARGETNAME.bin)         #       #
	# NODEBUG=0 *(default)		 Debug enable, out format TARGETNAME.elf (+TARGETNAME.bin) #
	# TARGETNAME=[] *(stm8l)                                                               	   #
	# RW=w		    *(default)	write file into MEMTYPE                                    #
	# RW=r 			 read MEMTYPE from chip to ./build/bin/MEMTYPE_TARGETNAME.bin      #
	# MEMTYPE=flash *(default)                                                                 #
	# MEMTYPE=eeprom                                                                           #
	# MEMTYPE=ram                                                                              #
	# MEMTYPE=opt                                                                              #
	# *****************************************************************************************#
	# *****************************************************************************************#
	# >make                                                                                    #
	# default build config make no debug, program outfile(write only flash)                    #
	# >make clean && make all NODEBUG=0 && make program RW=-r MEMTYPE=OPT                      #
	# clean old build and build with GDB debug info and read OPTBYTE		           #
	#******************************************************************************************#
	# >make unlock - Unlocked device. Option bytes reset to default state.                     #
	#                                                                                          #
	# >make clean - delit all build and disasm file                                            #
	#                                                                                          #
	#> make disassembly - .bin file from ./build/binary(default - disasm flash[MEMTYPE=flash]) #
	# file must be read before disassembling                                                   #
	#******************************************************************************************#
	#folder struct:                                                                            #
	#					├── build                                          #
	#					│   ├── binary                                     #
	#					│   └── disasm                                     #
	#					├── Inc                                            #
	#					│   ├── c_file1.h                                  #
	#					│   ├── main.h                                     #
	#					│   └── stm8l.h                                    #
	#					├── Makefile                                       #
	#					└── Src                                            #
	#					    ├── asm                                        #
	#					    │   ├── asm_file1.s                            #
	#					    │   ├── asm_file2.s                            #
	#					    │   └── stm8l.inc                              #
	#					    └── c                                          #
	#					        ├── c_file1.c                              #
	#                           			└── main.c                                 #
	#                                                                                          #
	#					                                                   #
	#  all file ./Src/asm/*.s and in ./Src/c/*. automatically will be included in the build    #
	#******************************************************************************************#
	# Toolchain = https://stm8-binutils-gdb.sourceforge.io/                                    #
	#             https://sourceforge.net/projects/sdcc/files/                                 #
	#			  https://github.com/vdudouyt/stm8flash                            #
	#			                                                                   #
	############################################################################################
