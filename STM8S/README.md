    ******************************************************************************************
	 make 	NODEBUG=[01] RW=[rw] MEMTYPE=[flash eeprom ram opt] TARGETNAME=[]	               
	******************************************************************************************
	 NODEBUG=1*(defaul)	Debug disable, out format TARGETNAME.ihx (+TARGETNAME.bin)         
	 NODEBUG=0		 Debug enable, out format TARGETNAME.elf (+TARGETNAME.bin)             	   
	 TARGETNAME=[] *(stm8s003)                                                                
	 RW=w		    *(default)	write file into MEMTYPE                                        
	 RW=r 			 read MEMTYPE from chip to ./build/bin/MEMTYPE_TARGETNAME.bin              
	 MEMTYPE=flash *(default)                                                                 
	 MEMTYPE=eeprom                                                                           
	 MEMTYPE=ram                                                                              
	 MEMTYPE=opt                                                                              
	 *****************************************************************************************
	 *****************************************************************************************
	 >make                                                                                    
	 default build config make no debug, program outfile(write only flash)                    
	 >make clean && make all NODEBUG=0 && make program RW=-r MEMTYPE=OPT 					   
	 clean old build and build with GDB debug info and read OPTBYTE		                   
	******************************************************************************************
	 >make unlock - Unlocked device. Option bytes reset to default state.                     
	                                                                                          
	 >make clean - delit all build and disasm file                                            
	                                                                                          
	> make disassembly - .bin file from ./build/binary(default - disasm flash[MEMTYPE=flash]) 
	 file must be read before disassembling                                                   
	******************************************************************************************
	folder struct:                                                                            
						├── build                                                              
						│   ├── binary                                                         
						│   └── disasm                                                         
						├── Inc                                                                
						│   ├── c_file1.h                                                      
						│   ├── main.h                                                         
						│   └── stm8s003f.h                                                    
						├── Makefile                                                           
						└── Src                                                                
						    ├── asm                                                            
						    │   ├── asm_file1.s                                                
						    │   ├── asm_file2.s                                                
						    │   └── stm8s003f.inc                                              
						    └── c                                                              
						        ├── c_file1.c                                                  
	                           			└── main.c                                                     
	                                                                                          
						                                                                       
    	all file ./Src/asm/*.s and in ./Src/c/*. automatically will be included in the build   
	******************************************************************************************
