CFLAGS += -I $(BASE)os/include/
CFLAGS += -I $(BASE)arch/$(ARCH)/include/
CFLAGS += -I $(BASE)drivers/
CFLAGS += -DBT_CONFIG_OS
CFLAGS += -DBT_CONFIG_ARCH="$(ARCH)"
CFLAGS += -DBT_CONFIG_SUBARCH="$(SUBARCH)"
