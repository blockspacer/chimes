LEVEL = ../../..
LIBRARYNAME = LLVMPlay
LOADABLE_MODULE = 1
USEDLIBS =

# If we don't need RTTI or EH, there's no reason to export anything
# from the hello plugin.
ifneq ($(REQUIRES_RTTI), 1)
ifneq ($(REQUIRES_EH), 1)
EXPORTED_SYMBOL_FILE = $(PROJ_SRC_DIR)/Play.exports
endif
endif

ENABLE_PROFILING=0

include $(LEVEL)/Makefile.common

