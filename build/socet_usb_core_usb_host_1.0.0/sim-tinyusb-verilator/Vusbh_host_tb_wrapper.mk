# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vusbh_host_tb_wrapper.mk

default: Vusbh_host_tb_wrapper

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /package/asicfab/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vusbh_host_tb_wrapper
# Module prefix (from --prefix)
VM_MODPREFIX = Vusbh_host_tb_wrapper
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Isrc/socet_usb_core_usb_host_1.0.0/src_v \
	-DUSB_TESTBENCH -I../../../software_test -I../../../../tinyusb/src -I../../../../tinyusb/src/common -I../../../../tinyusb/src/host -I../../../../tinyusb/src/portable/aft/aftx07 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	tusb_fifo \
	hub \
	usbh \
	hcd_aftx07 \
	tusb \
	main \
	test_top \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	src/socet_usb_core_usb_host_1.0.0/software_test \
	src/tinyusb/src \
	src/tinyusb/src/common \
	src/tinyusb/src/host \
	src/tinyusb/src/portable/aft/aftx07 \


### Default rules...
# Include list of all generated classes
include Vusbh_host_tb_wrapper_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

tusb_fifo.o: src/socet_usb_core_usb_host_1.0.0/../tinyusb/src/common/tusb_fifo.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
hub.o: src/socet_usb_core_usb_host_1.0.0/../tinyusb/src/host/hub.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
usbh.o: src/socet_usb_core_usb_host_1.0.0/../tinyusb/src/host/usbh.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
hcd_aftx07.o: src/socet_usb_core_usb_host_1.0.0/../tinyusb/src/portable/aft/aftx07/hcd_aftx07.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
tusb.o: src/socet_usb_core_usb_host_1.0.0/../tinyusb/src/tusb.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
main.o: src/socet_usb_core_usb_host_1.0.0/software_test/main.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
test_top.o: src/socet_usb_core_usb_host_1.0.0/software_test/test_top.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vusbh_host_tb_wrapper: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
