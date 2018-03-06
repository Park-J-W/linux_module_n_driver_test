MOD_NAME=hello_version
ifneq ($(KERNELRELEASE),)
obj-m := $(MOD_NAME).o
else
FREE_ELE=/home/jjong/BBB/TI_SDK/labs/linux-kernel-slides
#KDIR := $(HOME)/linux-kernel-labs/src/linux
KDIR := $(FREE_ELE)/linux-kernel-labs/src/linux
all:
	$(MAKE) -C $(KDIR) M=$$PWD
endif
clean:
	rm -rf ./*.ko
	rm -rf ./*.mod.*
	rm -rf ./*.o
	rm -rf ./built-in.o
	rm -rf ./modules.order
	rm -rf ./Module.symvers
