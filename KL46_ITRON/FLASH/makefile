################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 42
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := find -type f -name *.o | xargs rm -f && \
find -type f -name *.d | xargs rm -f && \
find -type f -name *.lst | xargs rm -f && \
find -type f -name *.elf | xargs rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include Sources/subdir.mk
-include Sources/jsp/subdir.mk
-include Sources/jsp/systask/subdir.mk
-include Sources/jsp/library/subdir.mk
-include Sources/jsp/kernel/subdir.mk
-include Sources/jsp/armv6/subdir.mk
-include Sources/jsp/armv6/KL46/subdir.mk
-include Sources/jsp/armv6/KL46/driver/uart/subdir.mk
-include Sources/jsp/armv6/KL46/driver/mcg/subdir.mk
-include Sources/jsp/armv6/KL46/driver/gpio/led/subdir.mk
-include Sources/jsp/armv6/KL46/Startup_Code/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
KL46_ITRON.elf \

EXECUTABLES_QUOTED += \
"KL46_ITRON.elf" \

EXECUTABLES_OS_FORMAT += \
KL46_ITRON.elf \


# All Target
all: warning-messages explicit-dependencies KL46_ITRON.elf secondary-outputs

# Tool invocations
KL46_ITRON.elf: $(OBJS) $(USER_OBJS) ../Sources/jsp/armv6/KL46/Linker_Files/MKL46Z256_flash.ld
	@echo 'Building target: $@'
	@echo 'Executing target #43 $@'
	@echo 'Invoking: ARM Ltd Windows GCC C Linker'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED) @"KL46_ITRON.args" -o"KL46_ITRON.elf"
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM)
	-@echo 'CLEAN COMPLETED'

secondary-outputs:

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: ../Sources/jsp/armv6/KL46/Linker_Files/MKL46Z256_flash.ld 

warning-messages: 

