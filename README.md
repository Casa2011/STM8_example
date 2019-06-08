 
### **Build and install stm8 tool**

```bash
$ echo "export STM8_PATH=~/STM8-Tools" >> ~/.profile 
 #logout and login
$ mkdir $STM8_PATH 
$ mkdir $STM8_PATH-src
```
## **stm8-gdb**
```bash
$ cd STM8_Tools-src
$ wget https://netix.dl.sourceforge.net/project/stm8-binutils-gdb/stm8-binutils-gdb-sources-2018-03-04.tar.gz
$ tar -zxf stm8-binutils-gdb-sources-2018-03-04.tar.gz
$ cd stm8-binutils-gdb-sources
$ ./patch_binutils.sh 
$ cd binutils-2.30
$ ./configure --host=$(./config.guess) --target=stm8-none-elf32 --prefix=$STM8_PATH --program-prefix=stm8-
$ make 
$ make install
```
## **sdcc**
 ```bash
$ cd STM8_Tools-src
$ wget https://netix.dl.sourceforge.net/project/sdcc/sdcc/3.9.0/sdcc-src-3.9.0.tar.bz2
$ tar -xvf sdcc-src-3.9.0.tar.bz2
$ cd sdcc-3.9.0
$ ./configure --prefix=$STM8_PATH --disable-mcs51-port  --disable-z80-port  --disable-z180-port --disable-r2k-port --disable-r3ka-port --disable-gbz80-port --disable-tlcs90-port --disable-ds390-port --disable-ds400-port --disable-pic14-port --disable-pic16-port --disable-hc08-port --disable-s08-port --disable-ez80_z80 --disable-pdk14-port --disable-pdk15-port --disable-ez80_z80-port
$ make
$ make install
```
## **openocd**
```bash
$ cd STM8_Tools-src
$ git clone https://github.com/ntfreak/openocd.git
$ ./bootstrap
$ ./configure --prefix=$STM8_PATH --disable-werror --disable-wextra
$ make
$ make install
```
## **stm8-flash**
```bash
$ cd
$ git clone https://github.com/vdudouyt/stm8flash.git
$ uname -s
$ make
$ cp stm8flash $STM8_PATH/bin
```
### **test*
        **This method is intended only for testing the assembly and installation of software.
        GUI debugger in eclipse is much better :) **
```bash
$ git clone https://github.com/Casa2011/STM8L_example
$ cd STM8L_example
$ make clean
$ make all NODEBUG=0
$ make program NODEBUG=0
$ make openocd #for show commands debug
```
